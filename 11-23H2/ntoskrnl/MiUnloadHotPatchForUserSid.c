/*
 * XREFs of MiUnloadHotPatchForUserSid @ 0x140A3C330
 * Callers:
 *     NtManageHotPatch @ 0x1407D41C0 (NtManageHotPatch.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     RtlAvlRemoveNode @ 0x14028B1E0 (RtlAvlRemoveNode.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     MiDeleteHotPatchRecord @ 0x140A36B14 (MiDeleteHotPatchRecord.c)
 *     MiFindUserSidHotPatchContext @ 0x140A3717C (MiFindUserSidHotPatchContext.c)
 *     MiHotPatchAllProcesses @ 0x140A376B8 (MiHotPatchAllProcesses.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiUnloadHotPatchForUserSid(void *a1, int *a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 *v5; // r14
  __int64 v6; // rax
  signed __int8 v7; // cf
  __int64 v8; // rbx
  unsigned __int64 *UserSidHotPatchContext; // rax
  unsigned __int64 *v10; // rdi
  bool v11; // zf

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v6 = KeAbPreAcquire((__int64)&xmmword_140C69848, 0LL);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&xmmword_140C69848, 0LL);
  v8 = v6;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&xmmword_140C69848, v6, (__int64)&xmmword_140C69848);
  if ( v8 )
    *(_BYTE *)(v8 + 18) = 1;
  UserSidHotPatchContext = MiFindUserSidHotPatchContext(a1);
  v10 = UserSidHotPatchContext;
  if ( UserSidHotPatchContext )
  {
    MiDeleteHotPatchRecord(UserSidHotPatchContext + 3, 1, *a2, a2[1]);
    if ( !v10[3] )
    {
      RtlAvlRemoveNode((unsigned __int64 *)&qword_140C69828, v10);
      v5 = v10;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&xmmword_140C69848, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&xmmword_140C69848);
  KeAbPostRelease((ULONG_PTR)&xmmword_140C69848);
  v11 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v11 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  MiHotPatchAllProcesses(*a2, a2[1]);
  return 0LL;
}
