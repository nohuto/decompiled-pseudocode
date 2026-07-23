/*
 * XREFs of ExpGetSystemFirmwareTableInformation @ 0x14077EAD0
 * Callers:
 *     ExpQuerySystemInformation @ 0x140726A50 (ExpQuerySystemInformation.c)
 *     ExpGetSystemFlushInformation @ 0x14077D270 (ExpGetSystemFlushInformation.c)
 *     ExpGetSystemPlatformBinary @ 0x14085FBD8 (ExpGetSystemPlatformBinary.c)
 *     ExGetSystemFirmwareTable @ 0x140860EB0 (ExGetSystemFirmwareTable.c)
 *     ExEnumerateSystemFirmwareTables @ 0x1409F5F70 (ExEnumerateSystemFirmwareTables.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D750 (ExAcquireResourceSharedLite.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6DB4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     PsIsProcessAppContainer @ 0x14077F27C (PsIsProcessAppContainer.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x1409FCA74 (ExpFirmwareAccessAppContainerCheck.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall ExpGetSystemFirmwareTableInformation(char *Src, char a2, unsigned int a3, _DWORD *a4)
{
  int v7; // edi
  _DWORD *v8; // rbx
  _DWORD *v9; // rsi
  unsigned int v10; // r14d
  struct _KTHREAD *CurrentThread; // rax
  __int64 (__fastcall *v12)(_DWORD *); // r14
  __int64 v13; // rcx
  int v14; // eax
  __int64 *v16; // rax
  _DWORD *Pool2; // rax
  _DWORD *v19; // [rsp+30h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+38h] [rbp-70h] BYREF
  _QWORD *v21; // [rsp+58h] [rbp-50h]
  int v22; // [rsp+60h] [rbp-48h]
  int v23; // [rsp+64h] [rbp-44h]

  v7 = 0;
  v8 = 0LL;
  v19 = 0LL;
  if ( a3 < 0x10 )
  {
    *a4 = 16;
    v7 = -1073741820;
    goto LABEL_12;
  }
  v9 = Src;
  v10 = a3 - 16;
  if ( !a2 )
    goto LABEL_3;
  Pool2 = (_DWORD *)ExAllocatePool2(257LL, a3, 1413894721LL);
  v8 = Pool2;
  v19 = Pool2;
  if ( !Pool2 )
  {
    v7 = -1073741670;
    goto LABEL_12;
  }
  memmove(Pool2, Src, a3);
  v9 = v8;
  if ( !(unsigned __int8)PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process)
    || *v8 == 1381190978 && (unsigned __int8)ExpFirmwareAccessAppContainerCheck(0LL) )
  {
LABEL_3:
    v9[3] = v10;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&ExpFirmwareTableResource, 1u);
    v12 = 0LL;
    v13 = ExpFirmwareTableProviderListHead - 24;
    if ( &ExpFirmwareTableProviderListHead != (__int64 *)ExpFirmwareTableProviderListHead )
    {
      while ( *(_DWORD *)v13 != *v9 )
      {
        v16 = *(__int64 **)(v13 + 24);
        v13 = (__int64)(v16 - 3);
        if ( &ExpFirmwareTableProviderListHead == v16 )
          goto LABEL_6;
      }
      v12 = *(__int64 (__fastcall **)(_DWORD *))(v13 + 8);
    }
LABEL_6:
    if ( v12 )
      v7 = v12(v9);
    ExReleaseResourceLite(&ExpFirmwareTableResource);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v12 )
    {
      if ( a2 )
      {
        if ( v7 >= 0 )
          memmove(Src + 16, v8 + 4, (unsigned int)v8[3]);
        if ( (int)(v7 + 0x80000000) < 0 || v7 == -1073741789 )
          *((_DWORD *)Src + 3) = v8[3];
        v14 = v8[3];
      }
      else
      {
        v14 = v9[3];
      }
      *a4 = v14 + 16;
    }
    else
    {
      v7 = -1073741822;
    }
  }
  else
  {
    v7 = -1073741790;
    if ( (unsigned int)dword_140C038A8 > 5 && tlgKeywordOn((__int64)&dword_140C038A8, 0x200000000000LL) )
    {
      LODWORD(v19) = *v8;
      v21 = &v19;
      v22 = 4;
      v23 = 0;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C038A8,
        (unsigned __int8 *)byte_140035F43,
        0LL,
        0LL,
        3u,
        &v20);
    }
  }
LABEL_12:
  if ( v8 )
    ExFreePoolWithTag(v8, 0x54465241u);
  return (unsigned int)v7;
}
