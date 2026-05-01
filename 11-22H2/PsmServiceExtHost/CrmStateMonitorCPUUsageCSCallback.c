/*
 * XREFs of CrmStateMonitorCPUUsageCSCallback @ 0x180047540
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorStateSet @ 0x180009B80 (CrmStateMonitorStateSet.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 */

__int64 __fastcall CrmStateMonitorCPUUsageCSCallback(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rbx
  __int64 v5; // rcx
  int v6; // [rsp+20h] [rbp-188h] BYREF
  __int64 v7; // [rsp+28h] [rbp-180h] BYREF
  _QWORD SystemInformation[44]; // [rsp+30h] [rbp-178h] BYREF

  v3 = a1 - 64;
  if ( (unsigned int)(*a3 - 1) > 0xFFFFFFFD )
  {
    NtQuerySystemInformation(SystemPerformanceInformation, SystemInformation, 0x158u, 0LL);
    *(_QWORD *)(v3 + 112) = SystemInformation[0];
    RtlQueryUnbiasedInterruptTime(v3 + 104);
    v6 = 100;
    CrmStateMonitorStateSet((void **)v3, &v6, 4uLL, 0);
    v5 = *(_QWORD *)(v3 + 88);
    v7 = -100000000LL;
    return TpSetTimer(v5, &v7, 10000LL, 2000LL);
  }
  else
  {
    TpSetTimer(*(_QWORD *)(v3 + 88), 0LL, 0LL, 0LL);
    TpWaitForTimer(*(_QWORD *)(v3 + 88), 1LL);
    v6 = 0;
    return CrmStateMonitorStateSet((void **)v3, &v6, 4uLL, 0);
  }
}
