/*
 * XREFs of MiGetNewSessionId @ 0x1407A9B8C
 * Callers:
 *     MiSessionCreate @ 0x1407A91FC (MiSessionCreate.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     RtlClearAllBits @ 0x140290FE0 (RtlClearAllBits.c)
 *     RtlFindClearBitsAndSet @ 0x140296130 (RtlFindClearBitsAndSet.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 MiGetNewSessionId()
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v1; // rax
  signed __int8 v2; // cf
  __int64 v3; // rdi
  __int64 v4; // rsi
  ULONG ClearBitsAndSet; // edi
  char v6; // al
  bool v7; // zf
  unsigned int v9; // ebp
  _RTL_BITMAP *Pool; // rax
  _RTL_BITMAP *v11; // r14
  unsigned __int64 SizeOfBitMap; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v1 = KeAbPreAcquire((__int64)&qword_140C659D0, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140C659D0, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&qword_140C659D0, v1, (__int64)&qword_140C659D0);
  v4 = 0LL;
  if ( v3 )
    *(_BYTE *)(v3 + 18) = 1;
  ClearBitsAndSet = RtlFindClearBitsAndSet(qword_140C69910, 1u, 0);
  if ( ClearBitsAndSet == -1 )
  {
    v9 = qword_140C69910->SizeOfBitMap + 128;
    if ( v9 > 0x7FFFF )
      v9 = 0x7FFFF;
    Pool = (_RTL_BITMAP *)MiAllocatePool(256, 8 * ((v9 >> 6) + ((v9 & 0x3F) != 0) + 2), 0x20206D4Du);
    v11 = Pool;
    if ( Pool )
    {
      Pool->SizeOfBitMap = v9;
      Pool->Buffer = &Pool[1].SizeOfBitMap;
      RtlClearAllBits(Pool);
      SizeOfBitMap = qword_140C69910->SizeOfBitMap;
      LOBYTE(v4) = (SizeOfBitMap & 0x3F) != 0;
      memmove(v11->Buffer, qword_140C69910->Buffer, 8 * ((SizeOfBitMap >> 6) + v4));
      ExFreePoolWithTag(qword_140C69910, 0);
      qword_140C69910 = v11;
      ClearBitsAndSet = RtlFindClearBitsAndSet(v11, 1u, 0);
    }
  }
  v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C659D0, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v6 & 2) != 0 && (v6 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C659D0);
  KeAbPostRelease((ULONG_PTR)&qword_140C659D0);
  v7 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v7 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return ClearBitsAndSet;
}
