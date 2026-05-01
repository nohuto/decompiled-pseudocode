/*
 * XREFs of ?Extend@CorrelationVector@@QEBA?AV1@XZ @ 0x1806C2168
 * Callers:
 *     ApplicationFlyoutView::Show$_ResumeCoro$1 @ 0x180255C40 (ApplicationFlyoutView--Show$_ResumeCoro$1.c)
 *     ?LaunchAppWithProgIdAndUriWithOpenWithSuppressed@ProtocolLauncher@Utils@@CAXPEBG0AEBVCorrelationVector@@@Z @ 0x1806C2460 (-LaunchAppWithProgIdAndUriWithOpenWithSuppressed@ProtocolLauncher@Utils@@CAXPEBG0AEBVCorrelation.c)
 *     ?LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z @ 0x1806C2684 (-LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z.c)
 *     ??0WindowRegistration@@QEAA@PEAUHWND__@@AEBVCorrelationVector@@@Z @ 0x1806C4BD4 (--0WindowRegistration@@QEAA@PEAUHWND__@@AEBVCorrelationVector@@@Z.c)
 *     ?EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z @ 0x1806C526C (-EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z.c)
 * Callees:
 *     ?ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z @ 0x1800BBD2C (-ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?Extend@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z @ 0x1806C21D0 (-Extend@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z.c)
 */

_QWORD *__fastcall CorrelationVector::Extend(TraceLoggingCorrelationVector **a1, _QWORD *a2)
{
  bool v3; // dl
  char v5[144]; // [rsp+20h] [rbp-A8h] BYREF

  TraceLoggingCorrelationVector::ToStringImpl(
    *a1,
    _InterlockedExchangeAdd64((volatile signed __int64 *)*a1 + 17, 0LL),
    v5);
  *a2 = TraceLoggingCorrelationVector::Extend(v5, v3);
  return a2;
}
