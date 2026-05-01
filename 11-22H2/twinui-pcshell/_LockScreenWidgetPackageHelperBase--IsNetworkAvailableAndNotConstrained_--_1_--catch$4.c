/*
 * XREFs of _LockScreenWidgetPackageHelperBase::IsNetworkAvailableAndNotConstrained_::_1_::catch$4 @ 0x18023F6E3
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802CED10 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall LockScreenWidgetPackageHelperBase::IsNetworkAvailableAndNotConstrained_::_1_::catch_4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 72),
    (void *)0x1BD,
    (unsigned int)"shellcommon\\internal\\shell\\inc\\LockScreenWidgetPackageHelper.h",
    a4);
  return 0LL;
}
