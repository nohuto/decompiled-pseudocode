/*
 * XREFs of ?ProcessInteropCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x180109324
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_0c5ce8ae284f99017ef76f49f6fd125b__void__MIT_INPUT_INTEROP_MESSAGE_const___::_Do_call @ 0x18010A140 (std--_Func_impl_no_alloc__lambda_0c5ce8ae284f99017ef76f49f6fd125b__void__MIT_INPUT__ea_18010A140.c)
 *     std::_Func_impl_no_alloc__lambda_17650820b92cc5e02da2ea4d610b12cf__void__MIT_INPUT_INTEROP_MESSAGE_const___::_Do_call @ 0x18010A230 (std--_Func_impl_no_alloc__lambda_17650820b92cc5e02da2ea4d610b12cf__void__MIT_INPUT__ea_18010A230.c)
 * Callees:
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180020420 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1800B33F0 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x1801080E8 (-DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Win32kInterop::ProcessInteropCallback(
        Win32kInterop *this,
        const struct _MIT_INPUT_INTEROP_MESSAGE *a2,
        __int64 a3,
        const char *a4)
{
  _BYTE v6[48]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( *(_DWORD *)a2 )
  {
    if ( *(_DWORD *)a2 == 1 )
    {
      InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v6, "MIT_INPUT_INTEROP_HOVER", 0LL);
      ((void (__fastcall *)(const struct _MIT_INPUT_INTEROP_MESSAGE *, _QWORD))Win32kInterop::s_pfnMTCallback)(a2, 0LL);
    }
    else
    {
      if ( *(_DWORD *)a2 != 2 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x152,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
          a4);
      InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v6, "MIT_INPUT_INTEROP_INERTIA", 0LL);
      ((void (__fastcall *)(const struct _MIT_INPUT_INTEROP_MESSAGE *, _QWORD))Win32kInterop::s_pfnMTCallback)(a2, 0LL);
    }
  }
  else
  {
    InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v6, "MIT_INPUT_INTEROP_MTCALLBACK", 0LL);
    Win32kInterop::DoConvergedMTCallback(this, a2);
  }
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v6);
}
