/*
 * XREFs of ?MaybeGetExceptionString@details@wil@@YAXAEBVexception@std@@PEAG_K@Z @ 0x180019708
 * Callers:
 *     _wil::details::RecognizeCaughtExceptionFromCallback_::_1_::catch$0 @ 0x18004858C (_wil--details--RecognizeCaughtExceptionFromCallback_--_1_--catch$0.c)
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$1 @ 0x180048656 (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$1.c)
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$4 @ 0x180048762 (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$4.c)
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$5 @ 0x1800487B5 (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$5.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18001A324 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
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
    StringCchPrintfW((unsigned __int16 *)a2, (unsigned __int64)a3, L"std::exception: %hs", v5);
  }
}
