/*
 * XREFs of PspNotifyThreadCreation @ 0x14076F9F0
 * Callers:
 *     PspUserThreadStartup @ 0x14076F8D0 (PspUserThreadStartup.c)
 *     PspSecureThreadStartup @ 0x1409B1AF0 (PspSecureThreadStartup.c)
 * Callees:
 *     KeQuerySystemTimePrecise @ 0x1402BE7C0 (KeQuerySystemTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x1402C3500 (KeQueryPerformanceCounter.c)
 *     ExGenRandom @ 0x140317860 (ExGenRandom.c)
 *     PfProcessCreateNotification @ 0x140760654 (PfProcessCreateNotification.c)
 *     DbgkCreateThread @ 0x14076FE0C (DbgkCreateThread.c)
 */

__int64 __fastcall PspNotifyThreadCreation(__int64 a1)
{
  __int64 v1; // rbx
  struct _KPRCB *CurrentPrcb; // rdi
  ULONG LowPart; // ebx
  int v5; // r8d
  unsigned __int64 v6; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  v1 = *(_QWORD *)(a1 + 544);
  DbgkCreateThread();
  if ( (*(_DWORD *)(v1 + 1124) & 0x80000) == 0
    && !_interlockedbittestandset((volatile signed __int32 *)(v1 + 1124), 0x13u) )
  {
    PfProcessCreateNotification(v1, *(_QWORD *)(v1 + 1304));
  }
  while ( !MEMORY[0xFFFFF78000000330] )
  {
    KeQuerySystemTimePrecise(&v7);
    CurrentPrcb = KeGetCurrentPrcb();
    LowPart = KeQueryPerformanceCounter(0LL).LowPart;
    v5 = ExGenRandom(1);
    v6 = __rdtsc();
    _InterlockedCompareExchange(
      (volatile signed __int32 *)(MmWriteableSharedUserData + 816),
      v7 ^ HIDWORD(v7) ^ LowPart ^ v6 ^ v5 ^ CurrentPrcb->MmPageFaultCount ^ CurrentPrcb->InterruptCount ^ CurrentPrcb->InterruptTime,
      0);
  }
  return 0LL;
}
