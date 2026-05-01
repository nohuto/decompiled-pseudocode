/*
 * XREFs of ??1_Sentry_base@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAA@XZ @ 0x18076A6A4
 * Callers:
 *     _std::basic_ostream_wchar_t_std::char_traits_wchar_t___::sentry::sentry_::_1_::dtor$0 @ 0x18076A3F0 (_std--basic_ostream_wchar_t_std--char_traits_wchar_t___--sentry--sentry_--_1_--dtor$0.c)
 *     ??1sentry@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAA@XZ @ 0x18076A710 (--1sentry@-$basic_ostream@_WU-$char_traits@_W@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::wostream::_Sentry_base::~_Sentry_base(__int64 a1)
{
  __int64 result; // rax

  result = std::wios::rdbuf(*(_QWORD *)a1 + *(int *)(**(_QWORD **)a1 + 4LL));
  if ( result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
  return result;
}
