/*
 * XREFs of KiComputeThreadAffinity @ 0x1402BFAC4
 * Callers:
 *     KiSetAffinityThread @ 0x14020327C (KiSetAffinityThread.c)
 *     KiQueueReadyThread @ 0x1402345E0 (KiQueueReadyThread.c)
 *     KiDeferredReadySingleThread @ 0x14023A3A0 (KiDeferredReadySingleThread.c)
 *     KiDirectSwitchThread @ 0x1402B1B30 (KiDirectSwitchThread.c)
 *     KiSetSystemAffinityThread @ 0x1403073EC (KiSetSystemAffinityThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14039E0CC (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiUpdateThreadCpuSets @ 0x14039EC20 (KiUpdateThreadCpuSets.c)
 * Callees:
 *     KiReselectIdealProcessorAfterAffinityChange @ 0x14020377C (KiReselectIdealProcessorAfterAffinityChange.c)
 *     KiAndAffinityEx @ 0x140252500 (KiAndAffinityEx.c)
 *     KiCopyAffinityEx @ 0x140254680 (KiCopyAffinityEx.c)
 *     KeCheckProcessorAffinityEx @ 0x140257420 (KeCheckProcessorAffinityEx.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1402BE2FC (KiUpdateSharedReadyQueueAffinityThread.c)
 *     RtlBeginReadTickLock @ 0x1402C0024 (RtlBeginReadTickLock.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x1402C0050 (KiUpdateNodeAffinitizedFlag.c)
 *     KeIsEqualAffinityEx @ 0x1402C0160 (KeIsEqualAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x1402C0450 (KeCountSetBitsAffinityEx.c)
 *     KiComputeCpuSetAffinity @ 0x1402C06D4 (KiComputeCpuSetAffinity.c)
 *     KeFirstGroupAffinityEx @ 0x140309370 (KeFirstGroupAffinityEx.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall KiComputeThreadAffinity(__int64 a1)
{
  unsigned int v2; // r14d
  __int64 v3; // r15
  __int64 v4; // rax
  __int64 TickLock; // rdi
  __int64 v6; // rsi
  __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rcx
  __int128 v11; // [rsp+28h] [rbp-E0h] BYREF
  _DWORD v12[68]; // [rsp+38h] [rbp-D0h] BYREF

  v11 = 0LL;
  memset(&v12[2], 0, 0x100uLL);
  v2 = 0;
  v3 = *(_QWORD *)(a1 + 544);
  if ( (*(_DWORD *)(a1 + 116) & 8) != 0 )
  {
    TickLock = RtlBeginReadTickLock(&KiCpuSetSequence);
  }
  else
  {
    do
    {
      v4 = RtlBeginReadTickLock(&KiCpuSetSequence);
      v12[0] = 2097153;
      TickLock = v4;
      memset(&v12[1], 0, 0x104uLL);
      KiCopyAffinityEx((__int64)v12, 0x20u, *(unsigned __int16 **)(a1 + 552));
      if ( (unsigned int)KeCountSetBitsAffinityEx(v12) > 1 )
      {
        KiComputeCpuSetAffinity(a1, v12);
        if ( !(unsigned int)KiAndAffinityEx(
                              *(unsigned __int16 **)(a1 + 552),
                              (unsigned __int16 *)v12,
                              v12,
                              HIWORD(v12[0])) )
          KiCopyAffinityEx((__int64)v12, HIWORD(v12[0]), *(unsigned __int16 **)(a1 + 552));
      }
      v6 = *(_QWORD *)(a1 + 576);
      if ( !(unsigned int)KeIsEqualAffinityEx(v6, v12) )
      {
        KiCopyAffinityEx(v6, *(_WORD *)(v6 + 2), (unsigned __int16 *)v12);
        v8 = *(unsigned int *)(a1 + 196);
        v9 = KiProcessorBlock[v8];
        if ( !(unsigned int)KeCheckProcessorAffinityEx(*(unsigned __int16 **)(a1 + 576), *(_DWORD *)(a1 + 196)) )
        {
          KeFirstGroupAffinityEx(&v11, v12);
          v8 = (unsigned __int16)KiReselectIdealProcessorAfterAffinityChange(
                                   a1,
                                   (__int64)&v11,
                                   v9,
                                   v3 + 2 * (WORD4(v11) + 322LL));
        }
        v10 = KiProcessorBlock[v8];
        *(_DWORD *)(a1 + 588) = v8;
        *(_WORD *)(a1 + 584) = *(unsigned __int8 *)(v10 + 208);
        *(_WORD *)(a1 + 560) = *(unsigned __int8 *)(v10 + 208);
        KiUpdateSharedReadyQueueAffinityThread(v10, a1);
        KiUpdateNodeAffinitizedFlag(a1);
        v2 = 1;
      }
    }
    while ( KiCpuSetSequence != TickLock );
  }
  *(_QWORD *)(a1 + 568) = TickLock;
  return v2;
}
