/*
 * XREFs of __anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1_::_1_::dtor$23 @ 0x18023A23C
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 */

void __fastcall _anonymous_namespace_::EnsureWebExperiencePackageInstalled__ResumeCoro_1_::_1_::dtor_23(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 400) = *(_QWORD *)(a2 + 104) + 608LL;
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(*(winrt::Windows::Foundation::IUnknown **)(a2 + 400));
}
