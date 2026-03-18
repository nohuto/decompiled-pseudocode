/*
 * XREFs of MiFreePartitionId @ 0x140A2FA68
 * Callers:
 *     MiDeletePartition @ 0x14062941C (MiDeletePartition.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 */

char __fastcall MiFreePartitionId(unsigned __int16 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v2; // rsi
  __int64 v3; // rax
  signed __int8 v4; // cf
  __int64 v5; // rdi
  $C71981A45BEB2B45F82C232A7085991E *v6; // rax

  CurrentThread = KeGetCurrentThread();
  v2 = a1;
  --CurrentThread->SpecialApcDisable;
  v3 = KeAbPreAcquire((__int64)&qword_140C67488, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140C67488, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&qword_140C67488, v3, (__int64)&qword_140C67488);
  if ( v5 )
    *(_BYTE *)(v5 + 18) = 1;
  *((_BYTE *)qword_140C674A8->Buffer + (v2 >> 3)) &= ~(1 << (v2 & 7));
  *(_QWORD *)(qword_140C674C8 + 8 * v2) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C67488, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C67488);
  LOBYTE(v6) = KeAbPostRelease((ULONG_PTR)&qword_140C67488);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v6 = &CurrentThread->152;
    if ( ($C71981A45BEB2B45F82C232A7085991E *)v6->ApcState.ApcListHead[0].Flink != v6 )
      LOBYTE(v6) = KiCheckForKernelApcDelivery();
  }
  return (char)v6;
}
