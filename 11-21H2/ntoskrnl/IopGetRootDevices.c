/*
 * XREFs of IopGetRootDevices @ 0x1406CF708
 * Callers:
 *     IopPnPDispatch @ 0x140763C50 (IopPnPDispatch.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     IopInitializeDeviceInstanceKey @ 0x1406CF970 (IopInitializeDeviceInstanceKey.c)
 *     _CmGetMatchingFilteredDeviceList @ 0x1406D01BC (_CmGetMatchingFilteredDeviceList.c)
 *     _CmOpenDeviceRegKey @ 0x14077F2EC (_CmOpenDeviceRegKey.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall IopGetRootDevices(_QWORD *a1)
{
  _WORD *Pool2; // rsi
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS inited; // ebx
  unsigned int v5; // edi
  int MatchingFilteredDeviceList; // eax
  const WCHAR *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdi
  _DWORD *v10; // rax
  _DWORD *v11; // r14
  void *v12; // rdx
  PVOID *v14; // r14
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-30h] BYREF
  __int128 v16; // [rsp+60h] [rbp-20h]
  void *Src; // [rsp+70h] [rbp-10h]
  unsigned int v18; // [rsp+C0h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+C8h] [rbp+48h] BYREF

  *a1 = 0LL;
  Handle = 0LL;
  Pool2 = 0LL;
  v16 = 0LL;
  DestinationString = 0LL;
  Src = (void *)ExAllocatePool2(256LL, 1024LL, 1684303952LL);
  if ( !Src )
    return 3221225626LL;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)((char *)&v16 + 4) = 128LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  v18 = 2048;
  inited = -1073741789;
  v5 = 0;
  while ( v5 < 5 )
  {
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    Pool2 = (_WORD *)ExAllocatePool2(256LL, 2LL * v18, 1684303952LL);
    if ( !Pool2 )
    {
      inited = -1073741670;
      break;
    }
    MatchingFilteredDeviceList = CmGetMatchingFilteredDeviceList(
                                   PiPnpRtlCtx,
                                   (unsigned int)L"Root",
                                   1,
                                   0,
                                   0LL,
                                   (__int64)Pool2,
                                   v18,
                                   (__int64)&v18);
    ++v5;
    inited = MatchingFilteredDeviceList;
    if ( MatchingFilteredDeviceList != -1073741789 )
    {
      if ( MatchingFilteredDeviceList < 0 )
        break;
      v7 = Pool2;
      LODWORD(v16) = 0;
      if ( *Pool2 )
      {
        while ( 1 )
        {
          inited = CmOpenDeviceRegKey(PiPnpRtlCtx, (_DWORD)v7, 16, 0, 983103, 0, (__int64)&Handle, 0LL);
          if ( inited < 0 )
            break;
          inited = RtlInitUnicodeStringEx(&DestinationString, v7);
          if ( inited >= 0 && !(unsigned int)IopInitializeDeviceInstanceKey(Handle, &DestinationString) )
          {
            ZwClose(Handle);
            goto LABEL_17;
          }
          ZwClose(Handle);
          if ( inited < 0 )
            break;
          v8 = -1LL;
          do
            ++v8;
          while ( v7[v8] );
          v7 += v8 + 1;
          if ( !*v7 )
            goto LABEL_17;
        }
LABEL_28:
        v9 = DWORD2(v16);
        if ( !DWORD2(v16) )
          goto LABEL_29;
        if ( inited >= 0 )
          break;
      }
      else
      {
LABEL_17:
        inited = v16;
        if ( (int)v16 < 0 )
          goto LABEL_28;
        v9 = DWORD2(v16);
        if ( DWORD2(v16) )
        {
          v10 = (_DWORD *)ExAllocatePool2(256LL, 8LL * DWORD2(v16) + 16, 1684303952LL);
          v11 = v10;
          if ( v10 )
          {
            v12 = Src;
            *v10 = v9;
            memmove(v10 + 2, v12, 8 * v9);
            *a1 = v11;
            break;
          }
          inited = -1073741670;
        }
        else
        {
LABEL_29:
          inited = -1073741823;
        }
      }
      if ( (_DWORD)v9 )
      {
        v14 = (PVOID *)Src;
        do
        {
          ObfDereferenceObject(*v14++);
          --v9;
        }
        while ( v9 );
      }
      break;
    }
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  ExFreePoolWithTag(Src, 0);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)inited;
}
