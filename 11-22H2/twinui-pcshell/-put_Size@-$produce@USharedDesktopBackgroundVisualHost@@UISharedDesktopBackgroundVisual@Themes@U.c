/*
 * XREFs of ?put_Size@?$produce@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@@impl@winrt@@UEAAHUSize@Foundation@Windows@3@@Z @ 0x1806ED3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Size@SharedDesktopBackgroundVisualHost@@QEAAXAEBU0Foundation@Windows@winrt@@@Z @ 0x1806E8E40 (-Size@SharedDesktopBackgroundVisualHost@@QEAAXAEBU0Foundation@Windows@winrt@@@Z.c)
 */

__int64 __fastcall winrt::impl::produce<SharedDesktopBackgroundVisualHost,winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual>::put_Size(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a2;
  SharedDesktopBackgroundVisualHost::Size(
    (RTL_SRWLOCK *)((a1 - 16) & -(__int64)(a1 != 0)),
    (const struct winrt::Windows::Foundation::Size *)v3);
  return 0LL;
}
