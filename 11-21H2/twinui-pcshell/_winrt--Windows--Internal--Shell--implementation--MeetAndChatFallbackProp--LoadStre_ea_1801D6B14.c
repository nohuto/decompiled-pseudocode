/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp::LoadStreamAsync$_ResumeCoro$1_::_1_::catch$12 @ 0x1801D6B14
 * Callers:
 *     <none>
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800F6DA0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18022A4B2 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp::LoadStreamAsync__ResumeCoro_1_::_1_::catch_12(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  _QWORD *v5; // rbx
  winrt::Windows::Foundation::IUnknown *v6; // rcx

  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 88),
    (void *)0x1D,
    (unsigned int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatfallbackprop.cpp",
    a4);
  v5 = *(_QWORD **)(a2 + 96);
  v5[8] = 0LL;
  v5[22] = (char *)v5 + 1;
  v5[40] = (char *)v5 + 449;
  v6 = *(winrt::Windows::Foundation::IUnknown **)((char *)v5 + 449);
  v5[42] = v6;
  v6 = (winrt::Windows::Foundation::IUnknown *)((char *)v6 + 48);
  v5[44] = v6;
  v5[12] = v6;
  winrt::Windows::Foundation::IUnknown::operator=(v6, (winrt::Windows::Foundation::IUnknown *)(v5 + 8));
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(v5 + 8));
  return 0LL;
}
