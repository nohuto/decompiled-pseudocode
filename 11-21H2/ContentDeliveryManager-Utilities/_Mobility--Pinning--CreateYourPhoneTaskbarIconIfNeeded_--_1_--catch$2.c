/*
 * XREFs of _Mobility::Pinning::CreateYourPhoneTaskbarIconIfNeeded_::_1_::catch$2 @ 0x1800EE908
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18003B334 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall Mobility::Pinning::CreateYourPhoneTaskbarIconIfNeeded_::_1_::catch_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 152),
    (void *)0xBF,
    (int)"onecoreuap\\internal\\shell\\inc\\MobilityPinning.h",
    a4);
  return 0LL;
}
