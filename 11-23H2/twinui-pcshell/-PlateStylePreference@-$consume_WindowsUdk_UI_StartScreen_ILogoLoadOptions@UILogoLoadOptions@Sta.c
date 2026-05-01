/*
 * XREFs of ?PlateStylePreference@?$consume_WindowsUdk_UI_StartScreen_ILogoLoadOptions@UILogoLoadOptions@StartScreen@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBW4LogoPlateStyle@StartScreen@UI@WindowsUdk@3@@Z @ 0x1805E4154
 * Callers:
 *     JointResize::TagViewWithLogoAsync$_ResumeCoro$1 @ 0x180213B40 (JointResize--TagViewWithLogoAsync$_ResumeCoro$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_WindowsUdk_UI_StartScreen_ILogoLoadOptions<winrt::WindowsUdk::UI::StartScreen::ILogoLoadOptions>::PlateStylePreference(
        _QWORD *a1,
        unsigned int *a2)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 136LL))(*a1, *a2);
  if ( (int)result < 0 )
    winrt::throw_hresult(result);
  return result;
}
