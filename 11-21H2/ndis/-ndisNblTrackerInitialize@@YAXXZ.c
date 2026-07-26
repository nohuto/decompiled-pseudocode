/*
 * XREFs of ?ndisNblTrackerInitialize@@YAXXZ @ 0x1C0154B10
 * Callers:
 *     DriverEntry @ 0x1C0153778 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_i @ 0x1C006D11C (WPP_RECORDER_SF_i_ea_1C006D11C.c)
 *     ?ndisCalculateIdealNblTrackerHistoryBufferSize@@YAXXZ @ 0x1C0122600 (-ndisCalculateIdealNblTrackerHistoryBufferSize@@YAXXZ.c)
 *     ?ndisNblTrackerReadConfiguration@@YAXXZ @ 0x1C0154BEC (-ndisNblTrackerReadConfiguration@@YAXXZ.c)
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
  qword_1C00ECCD8 = (__int64)&ndisNblTrackerList;
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
          (struct _GUID *)&WPP_44b390fadec23ba9bcae0cc9320a34b9_Traceguids);
    }
  }
}
