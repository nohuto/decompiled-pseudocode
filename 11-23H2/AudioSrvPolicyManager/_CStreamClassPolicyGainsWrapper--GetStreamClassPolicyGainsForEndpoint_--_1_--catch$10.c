/*
 * XREFs of _CStreamClassPolicyGainsWrapper::GetStreamClassPolicyGainsForEndpoint_::_1_::catch$10 @ 0x180048306
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180027C18 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CStreamClassPolicyGainsWrapper::GetStreamClassPolicyGainsForEndpoint_::_1_::catch_10(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 152),
    (void *)0x6B,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamclasspolicymanager.cpp",
    a4);
  return 0LL;
}
