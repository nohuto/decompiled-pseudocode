/*
 * XREFs of std::_Func_impl_no_alloc__lambda_9505533670deb393e9e7bf932fb2c1e9__void__MIT_ACCESSIBILITY_TIMER_const___::_Do_call @ 0x1800E21F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1800183C0 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x180089C20 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?ProcessAccessibilityTimerMessage@Win32kInterop@@AEAAXPEBU_MIT_ACCESSIBILITY_TIMER@@@Z @ 0x1800E0450 (-ProcessAccessibilityTimerMessage@Win32kInterop@@AEAAXPEBU_MIT_ACCESSIBILITY_TIMER@@@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_9505533670deb393e9e7bf932fb2c1e9__void__MIT_ACCESSIBILITY_TIMER_const___::_Do_call(
        __int64 a1,
        const struct _MIT_ACCESSIBILITY_TIMER **a2)
{
  const struct _MIT_ACCESSIBILITY_TIMER *v3; // rbx
  _BYTE v4[48]; // [rsp+20h] [rbp-48h] BYREF

  v3 = *a2;
  InputTraceLogging::PerfRegion::PerfRegion(
    (InputTraceLogging::PerfRegion *)v4,
    "MITEP_ACCESSIBILITYTIMER_NOTIFICATION",
    0LL);
  Win32kInterop::ProcessAccessibilityTimerMessage(*(Win32kInterop **)(a1 + 8), v3);
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v4);
}
