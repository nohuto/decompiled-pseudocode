/*
 * XREFs of MiInitializeMirroring @ 0x140B45F30
 * Callers:
 *     MiInitSystem @ 0x140B44518 (MiInitSystem.c)
 * Callees:
 *     MiReservePtes @ 0x14027D420 (MiReservePtes.c)
 *     MiLockDynamicMemoryExclusive @ 0x14061BAF4 (MiLockDynamicMemoryExclusive.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x14061C4FC (MiUnlockDynamicMemoryExclusive.c)
 *     MiInitializeDynamicBitmap @ 0x14081CA74 (MiInitializeDynamicBitmap.c)
 *     MiUpdateMirrorBitmaps @ 0x140A2F3A8 (MiUpdateMirrorBitmaps.c)
 */

__int64 MiInitializeMirroring()
{
  _QWORD *v0; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v2; // r14
  unsigned __int64 v3; // rbx
  unsigned int i; // ebp
  ULONG_PTR v5; // rax
  _OWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF

  stru_140C67E68.Parameter = (void *)-1LL;
  stru_140C67E68.List.Flink = 0LL;
  v0 = v7;
  stru_140C67E50.Header.WaitListHead.Blink = &stru_140C67E50.Header.WaitListHead;
  stru_140C67E50.Header.WaitListHead.Flink = &stru_140C67E50.Header.WaitListHead;
  stru_140C67E68.WorkerRoutine = (void (__fastcall *)(void *))MiFinishResume;
  LOWORD(stru_140C67E50.Header.Lock) = 1;
  stru_140C67E50.Header.Size = 6;
  stru_140C67E50.Header.SignalState = 1;
  CurrentThread = KeGetCurrentThread();
  v2 = qword_140C65BA0;
  v3 = (((unsigned __int64)(qword_140C65BA0 + 8) >> 3) + 4095) >> 12;
  for ( i = 0; i < 2; ++i )
  {
    v5 = MiReservePtes((__int64)&qword_140C69940, v3);
    if ( !v5 || !(unsigned int)MiInitializeDynamicBitmap(v0, (__int64)(v5 << 25) >> 16, v2 + 1, 6) )
      return 0LL;
    *v0 = 0LL;
    v0 += 2;
  }
  MiLockDynamicMemoryExclusive((__int64)MiSystemPartition, (__int64)CurrentThread);
  xmmword_140C67E90[0] = v7[0];
  xmmword_140C67EA0 = v7[1];
  MiUnlockDynamicMemoryExclusive((__int64)MiSystemPartition, (__int64)CurrentThread);
  if ( (dword_140D1D1D4 & 1) != 0 )
  {
    MiLockDynamicMemoryExclusive((__int64)MiSystemPartition, (__int64)CurrentThread);
    MiUpdateMirrorBitmaps();
    MiUnlockDynamicMemoryExclusive((__int64)MiSystemPartition, (__int64)CurrentThread);
  }
  return 1LL;
}
