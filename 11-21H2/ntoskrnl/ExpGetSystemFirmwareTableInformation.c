/*
 * XREFs of ExpGetSystemFirmwareTableInformation @ 0x1406C9754
 * Callers:
 *     ExpGetSystemFlushInformation @ 0x1406C955C (ExpGetSystemFlushInformation.c)
 *     ExpQuerySystemInformation @ 0x14073B5A0 (ExpQuerySystemInformation.c)
 *     ExpGetSystemPlatformBinary @ 0x14085FAA4 (ExpGetSystemPlatformBinary.c)
 *     ExGetSystemFirmwareTable @ 0x140860C10 (ExGetSystemFirmwareTable.c)
 *     ExEnumerateSystemFirmwareTables @ 0x1409F5C90 (ExEnumerateSystemFirmwareTables.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14020A9C4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402A2000 (_tlgKeywordOn.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     PsIsProcessAppContainer @ 0x1406C9928 (PsIsProcessAppContainer.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x1409FC784 (ExpFirmwareAccessAppContainerCheck.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpGetSystemFirmwareTableInformation(char *Src, char a2, unsigned int a3, _DWORD *a4)
{
  int v7; // edi
  _DWORD *v8; // rbx
  _DWORD *v9; // rsi
  unsigned int v10; // r14d
  _DWORD *PoolWithQuotaTag; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 (__fastcall *v14)(_DWORD *); // r14
  __int64 v15; // rcx
  int v16; // eax
  __int64 *v18; // rax
  PVOID P; // [rsp+30h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+38h] [rbp-70h] BYREF
  PVOID *p_P; // [rsp+58h] [rbp-50h]
  int v22; // [rsp+60h] [rbp-48h]
  int v23; // [rsp+64h] [rbp-44h]

  v7 = 0;
  v8 = 0LL;
  P = 0LL;
  if ( a3 < 0x10 )
  {
    *a4 = 16;
    v7 = -1073741820;
    goto LABEL_19;
  }
  v9 = Src;
  v10 = a3 - 16;
  if ( !a2 )
    goto LABEL_5;
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, a3, 0x54465241u);
  v8 = PoolWithQuotaTag;
  P = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
  {
    v7 = -1073741670;
    goto LABEL_19;
  }
  memmove(PoolWithQuotaTag, Src, a3);
  v9 = v8;
  if ( !(unsigned __int8)PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process)
    || *v8 == 1381190978 && (unsigned __int8)ExpFirmwareAccessAppContainerCheck(0LL) )
  {
LABEL_5:
    v9[3] = v10;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&ExpFirmwareTableResource, 1u);
    v14 = 0LL;
    v15 = ExpFirmwareTableProviderListHead - 24;
    if ( &ExpFirmwareTableProviderListHead != (__int64 *)ExpFirmwareTableProviderListHead )
    {
      while ( *(_DWORD *)v15 != *v9 )
      {
        v18 = *(__int64 **)(v15 + 24);
        v15 = (__int64)(v18 - 3);
        if ( &ExpFirmwareTableProviderListHead == v18 )
          goto LABEL_8;
      }
      v14 = *(__int64 (__fastcall **)(_DWORD *))(v15 + 8);
    }
LABEL_8:
    if ( v14 )
      v7 = v14(v9);
    ExReleaseResourceLite(&ExpFirmwareTableResource);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( v14 )
    {
      if ( a2 )
      {
        if ( v7 >= 0 )
          memmove(Src + 16, v8 + 4, (unsigned int)v8[3]);
        if ( (int)(v7 + 0x80000000) < 0 || v7 == -1073741789 )
          *((_DWORD *)Src + 3) = v8[3];
        v16 = v8[3];
      }
      else
      {
        v16 = v9[3];
      }
      *a4 = v16 + 16;
    }
    else
    {
      v7 = -1073741822;
    }
  }
  else
  {
    v7 = -1073741790;
    if ( (unsigned int)dword_140C06518 > 5 && tlgKeywordOn((__int64)&dword_140C06518, 0x200000000000LL) )
    {
      LODWORD(P) = *v8;
      p_P = &P;
      v22 = 4;
      v23 = 0;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C06518,
        (unsigned __int8 *)byte_140035DB9,
        0LL,
        0LL,
        3u,
        &v20);
    }
  }
LABEL_19:
  if ( v8 )
    ExFreePoolWithTag(v8, 0x54465241u);
  return (unsigned int)v7;
}
