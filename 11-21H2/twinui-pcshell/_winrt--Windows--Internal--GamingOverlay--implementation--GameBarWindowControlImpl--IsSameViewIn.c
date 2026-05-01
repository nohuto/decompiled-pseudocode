/*
 * XREFs of _winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::IsSameViewInstanceId_::_1_::catch$0 @ 0x180342484
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18012A46C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::IsSameViewInstanceId_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_BYTE *)(a2 + 56) = (unsigned int)wil::details::in1diag3::Return_CaughtException(
                                        *(wil::details::in1diag3 **)(a2 + 40),
                                        (void *)0xD3,
                                        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
                                        a4) != 0;
  return 0LL;
}
