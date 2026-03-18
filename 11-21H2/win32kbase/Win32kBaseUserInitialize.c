/*
 * XREFs of Win32kBaseUserInitialize @ 0x1C005AFC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00384DC (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C005F1A8 (-UserInitialize@@YAJXZ.c)
 *     InitializeGreCSRSS @ 0x1C009000C (InitializeGreCSRSS.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     InitializePowerRequestList @ 0x1C02E3D98 (InitializePowerRequestList.c)
 */

__int64 __fastcall Win32kBaseUserInitialize(HANDLE Handle, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  PDEVICE_OBJECT v5; // rcx
  char v6; // bl
  void *v7; // r9
  __int64 BugCheckParameter4; // rdi
  __int64 result; // rax
  __int64 ProcessWin32Process; // rax
  __int64 v11; // rax
  int v12; // edx
  unsigned int v13; // edi
  int v14; // r8d

  v3 = a2;
  v5 = WPP_GLOBAL_Control;
  v6 = 1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v7 = &WPP_6bbaa2e2a0713bd7aecc3a487024d555_Traceguids;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      28,
      (__int64)&WPP_6bbaa2e2a0713bd7aecc3a487024d555_Traceguids);
  if ( gpepCSRSS )
    return 3221225473LL;
  BugCheckParameter4 = PsGetCurrentProcess(v5, a2, a3, v7);
  if ( qword_1C029C788 && (int)qword_1C029C788() >= 0 && (!qword_1C029C790 || !(unsigned __int8)qword_1C029C790()) )
    KeBugCheckEx(0x91u, 0LL, 0LL, 0LL, BugCheckParameter4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&gpepCSRSS, BugCheckParameter4, 0LL) )
    return 3221225473LL;
  ObfReferenceObject(gpepCSRSS);
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_CSRSSHandleTracing__private_reporting,
    30581629LL,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_BrokeredDisplays_ModeChanges_logged_traits,
    0,
    3);
  result = InitializePowerRequestList(Handle);
  if ( (int)result >= 0 )
  {
    if ( !qword_1C029C798 || (int)qword_1C029C798() < 0 )
      goto LABEL_18;
    if ( !qword_1C029C7A0 )
      return 3221225659LL;
    result = qword_1C029C7A0(v3);
    if ( (int)result >= 0 )
    {
LABEL_18:
      byte_1C0296550 = 0;
      if ( (unsigned int)InitializeGreCSRSS() )
      {
        ProcessWin32Process = PsGetProcessWin32Process(gpepCSRSS);
        *(_DWORD *)(ProcessWin32Process + 12) |= 0x40010u;
        v11 = PsGetProcessWin32Process(gpepCSRSS);
        *(_DWORD *)(v11 + 820) |= 0x400000u;
        *(_DWORD *)(PsGetProcessWin32Process(gpepCSRSS) + 280) = 18;
        v13 = UserInitialize();
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v6 = 0;
        }
        if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v12) = v6;
          LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v12,
            v14,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            14,
            29,
            (__int64)&WPP_6bbaa2e2a0713bd7aecc3a487024d555_Traceguids);
        }
        return v13;
      }
      return 3221225473LL;
    }
  }
  return result;
}
