/*
 * XREFs of WbRemoveWarbirdProcess @ 0x1407610F4
 * Callers:
 *     PspProcessDelete @ 0x1407612A0 (PspProcessDelete.c)
 *     WbDispatchOperation @ 0x140763608 (WbDispatchOperation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     sub_140761B68 @ 0x140761B68 (sub_140761B68.c)
 *     sub_140763A10 @ 0x140763A10 (sub_140763A10.c)
 *     sub_140763A48 @ 0x140763A48 (sub_140763A48.c)
 */

__int64 __fastcall WbRemoveWarbirdProcess(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v3; // rbx
  int v4; // ebx
  struct _KTHREAD *v5; // rax
  bool v6; // zf
  struct _KTHREAD *v8; // rax
  __int64 v9; // rax
  signed __int8 v10; // cf
  __int64 v11; // rbx
  char v12; // di
  struct _KTHREAD *v13; // rax
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v14 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v3 = KeAbPreAcquire((__int64)&qword_140C70A68, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C70A68, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140C70A68, 0LL, v3, (__int64)&qword_140C70A68);
  if ( v3 )
    *(_BYTE *)(v3 + 18) = 1;
  v4 = sub_140763A48(a1, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C70A68, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C70A68);
  KeAbPostRelease((ULONG_PTR)&qword_140C70A68);
  v5 = KeGetCurrentThread();
  v6 = v5->SpecialApcDisable++ == -1;
  if ( v6 && ($C71981A45BEB2B45F82C232A7085991E *)v5->ApcState.ApcListHead[0].Flink != &v5->152 )
    KiCheckForKernelApcDelivery();
  if ( v4 >= 0 )
  {
    v8 = KeGetCurrentThread();
    --v8->SpecialApcDisable;
    v9 = KeAbPreAcquire((__int64)&qword_140C70A68, 0LL);
    v10 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140C70A68, 0LL);
    v11 = v9;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx(&qword_140C70A68, v9, (__int64)&qword_140C70A68);
    if ( v11 )
      *(_BYTE *)(v11 + 18) = 1;
    v4 = sub_140761B68((unsigned int)&dword_140C70A40, a1, 8, -1, (__int64)&v14);
    v12 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C70A68, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v12 & 2) != 0 && (v12 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C70A68);
    KeAbPostRelease((ULONG_PTR)&qword_140C70A68);
    v13 = KeGetCurrentThread();
    v6 = v13->SpecialApcDisable++ == -1;
    if ( v6 && ($C71981A45BEB2B45F82C232A7085991E *)v13->ApcState.ApcListHead[0].Flink != &v13->152 )
      KiCheckForKernelApcDelivery();
    sub_140763A10(v14);
  }
  return (unsigned int)v4;
}
