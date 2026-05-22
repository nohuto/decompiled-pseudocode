/*
 * XREFs of std::_Func_impl_no_alloc__lambda_17650820b92cc5e02da2ea4d610b12cf__void__MIT_INPUT_INTEROP_MESSAGE_const___::_Do_call @ 0x1800E2070
 * Callers:
 *     <none>
 * Callees:
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1800183C0 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x180089C20 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?ProcessInteropCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x1800E1004 (-ProcessInteropCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_17650820b92cc5e02da2ea4d610b12cf__void__MIT_INPUT_INTEROP_MESSAGE_const___::_Do_call(
        __int64 a1,
        const struct _MIT_INPUT_INTEROP_MESSAGE **a2)
{
  const struct _MIT_INPUT_INTEROP_MESSAGE *v3; // rbx
  __int64 v4; // r8
  const char *v5; // r9
  _BYTE v6[48]; // [rsp+20h] [rbp-48h] BYREF

  v3 = *a2;
  InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v6, "MITEP_INPUT_INTEROP_ISM", 0LL);
  Win32kInterop::ProcessInteropCallback(*(Win32kInterop **)(a1 + 8), v3, v4, v5);
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v6);
}
