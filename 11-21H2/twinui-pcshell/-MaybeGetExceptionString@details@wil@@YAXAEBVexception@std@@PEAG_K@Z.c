/*
 * XREFs of ?MaybeGetExceptionString@details@wil@@YAXAEBVexception@std@@PEAG_K@Z @ 0x1802D7A68
 * Callers:
 *     _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$2 @ 0x1802223B9 (_wil--details--ResultFromCaughtException_WinRt_--_1_--catch$2.c)
 *     _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$6 @ 0x1802224CD (_wil--details--ResultFromCaughtException_WinRt_--_1_--catch$6.c)
 *     _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$7 @ 0x180222503 (_wil--details--ResultFromCaughtException_WinRt_--_1_--catch$7.c)
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$1 @ 0x180223843 (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$1.c)
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$4 @ 0x18022394F (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$4.c)
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$5 @ 0x1802239A2 (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$5.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$2 @ 0x180223E24 (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$2.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$3 @ 0x180223E60 (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$3.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$4 @ 0x180223E9C (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$4.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$8 @ 0x180223FCB (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$8.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$9 @ 0x180224007 (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$9.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$10 @ 0x180224043 (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$10.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$11 @ 0x18022407F (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$11.c)
 *     _wil::details::RecognizeCaughtExceptionFromCallback_::_1_::catch$0 @ 0x1802D7FF9 (_wil--details--RecognizeCaughtExceptionFromCallback_--_1_--catch$0.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800CA828 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil::details::MaybeGetExceptionString(
        wil::details *this,
        const struct std::exception *a2,
        unsigned __int16 *a3)
{
  __int64 v5; // rax

  if ( a2 )
  {
    v5 = (*(__int64 (__fastcall **)(wil::details *))(*(_QWORD *)this + 8LL))(this);
    StringCchPrintfW((unsigned __int16 *)a2, (__int64)a3, L"std::exception: %hs", v5);
  }
}
