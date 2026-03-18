/*
 * XREFs of MiUnlockDynamicMemoryNestedExclusive @ 0x14061C010
 * Callers:
 *     MiRemovePhysicalMemory @ 0x140A2CC4C (MiRemovePhysicalMemory.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD960 (ExfTryToWakePushLock.c)
 */

signed __int32 MiUnlockDynamicMemoryNestedExclusive()
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C6B518, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C6B518);
  return KeAbPostRelease((ULONG_PTR)&qword_140C6B518);
}
