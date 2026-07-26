/*
 * XREFs of ?ndisNblTrackerInitialize@@YAXXZ @ 0x1C0160468
 * Callers:
 *     DriverEntry @ 0x1C01608CC (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006690 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_i @ 0x1C00724BC (WPP_RECORDER_SF_i_ea_1C00724BC.c)
 *     ?ndisCalculateIdealNblTrackerHistoryBufferSize@@YAXXZ @ 0x1C012E140 (-ndisCalculateIdealNblTrackerHistoryBufferSize@@YAXXZ.c)
 *     ?ndisNblTrackerReadConfiguration@@YAXXZ @ 0x1C0160544 (-ndisNblTrackerReadConfiguration@@YAXXZ.c)
 */

void ndisNblTrackerInitialize(void)
{
  __int64 v0; // rdx
  __int64 v1; // r9
  unsigned __int64 v2; // r8
  struct _GUID *v3; // [rsp+20h] [rbp-38h]
  __int64 v4; // [rsp+28h] [rbp-30h]
  _QWORD v5[2]; // [rsp+30h] [rbp-28h] BYREF

  ndisNblTrackerReadConfiguration();
  qword_1C00F5CB8 = (__int64)&ndisNblTrackerList;
  ndisNblTrackerList = (struct _NDIS_NBL_TRACKER *)&ndisNblTrackerList;
  KeInitializeSpinLock(&ndisNblTrackerListLock);
  if ( *(int *)ndisNblTrackerMode >= 2 )
  {
    ndisNblTrackerTimer = (struct _EX_TIMER *)ExAllocateTimer(ndisNblTrackerWatchdogTimer, 0LL, 8LL);
    if ( ndisNblTrackerTimer )
    {
      v5[0] = 0LL;
      v5[1] = -1LL;
      v2 = 10000LL * *(unsigned int *)ndisNblTrackerNblTimeoutMilliseconds;
      if ( v2 > 0x7FFFFFFF )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v4 = 10000LL * *(unsigned int *)ndisNblTrackerNblTimeoutMilliseconds;
          WPP_RECORDER_SF_i(*((_QWORD *)WPP_GLOBAL_Control + 8), v0, v2, v1, (int)v3);
        }
        v2 = 0x7FFFFFFFLL;
      }
      ExSetTimer(ndisNblTrackerTimer, -(__int64)v2, v2, v5, v3, v4);
      if ( *(int *)ndisNblTrackerMode >= 3 )
      {
        ndisCalculateIdealNblTrackerHistoryBufferSize();
        ndisNblTrackerHistoryBuffer = (unsigned __int64 *)ExAllocatePool2(
                                                            64LL,
                                                            8LL * ndisNblTrackerHistorySize,
                                                            1802781774);
        if ( !ndisNblTrackerHistoryBuffer )
          *(_DWORD *)ndisNblTrackerMode = 2;
      }
    }
    else
    {
      *(_DWORD *)ndisNblTrackerMode = 1;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          3u,
          1u,
          0xDu,
          (struct _GUID *)&WPP_1f4f9304c13d30d166c4c68f5fb6e586_Traceguids);
    }
  }
}
