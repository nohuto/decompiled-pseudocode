/*
 * XREFs of ?AnimationsEnabled@?$consume_Windows_UI_ViewManagement_IUISettings@UIUISettings@ViewManagement@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18006B630
 * Callers:
 *     ?AreAnimationsEnabled@CUndockedSearchAppExperienceManagerConfig@@UEAA_NXZ @ 0x18006B620 (-AreAnimationsEnabled@CUndockedSearchAppExperienceManagerConfig@@UEAA_NXZ.c)
 *     VirtualDesktopSwitcherHost::DismissAsync$_ResumeCoro$1 @ 0x18028B890 (VirtualDesktopSwitcherHost--DismissAsync$_ResumeCoro$1.c)
 *     ?ViewLoaded@VirtualDesktopSwitcherHost@@UEAAJXZ @ 0x180776AD0 (-ViewLoaded@VirtualDesktopSwitcherHost@@UEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

char __fastcall winrt::impl::consume_Windows_UI_ViewManagement_IUISettings<winrt::Windows::UI::ViewManagement::IUISettings>::AnimationsEnabled(
        __int64 *a1)
{
  __int64 v1; // rcx
  int v2; // eax
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v4 = 0;
  v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v1 + 96LL))(v1, &v4);
  if ( v2 < 0 )
    winrt::throw_hresult((unsigned int)v2);
  return v4;
}
