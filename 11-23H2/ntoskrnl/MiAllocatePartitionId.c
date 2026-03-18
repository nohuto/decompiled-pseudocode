/*
 * XREFs of MiAllocatePartitionId @ 0x140A2F880
 * Callers:
 *     MmCreatePartition @ 0x1403AC6AC (MmCreatePartition.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     RtlFindClearBitsAndSet @ 0x140295EA0 (RtlFindClearBitsAndSet.c)
 *     ExfTryToWakePushLock @ 0x1402BD960 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F820 (KiCheckForKernelApcDelivery.c)
 *     MiExpandPartitionIds @ 0x140A44920 (MiExpandPartitionIds.c)
 */

__int64 __fastcall MiAllocatePartitionId(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v3; // rax
  signed __int8 v4; // cf
  __int64 v5; // rdi
  ULONG ClearBitsAndSet; // eax
  unsigned __int16 v7; // di
  bool v8; // zf

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = KeAbPreAcquire((__int64)&qword_140C67388, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140C67388, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&qword_140C67388, v3, (__int64)&qword_140C67388);
  if ( v5 )
    *(_BYTE *)(v5 + 18) = 1;
  do
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet(qword_140C673A8, 1u, 0);
    v7 = ClearBitsAndSet;
    if ( ClearBitsAndSet != 0xFFFFFFFFLL )
    {
      byte_140C67DD4 = 1;
      *(_QWORD *)(qword_140C673C8 + 8LL * (unsigned __int16)ClearBitsAndSet) = a1;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C67388, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C67388);
      KeAbPostRelease((ULONG_PTR)&qword_140C67388);
      v8 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v8
        && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      return v7;
    }
  }
  while ( (unsigned int)MiExpandPartitionIds() );
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C67388, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C67388);
  KeAbPostRelease((ULONG_PTR)&qword_140C67388);
  v8 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v8 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return 0LL;
}
