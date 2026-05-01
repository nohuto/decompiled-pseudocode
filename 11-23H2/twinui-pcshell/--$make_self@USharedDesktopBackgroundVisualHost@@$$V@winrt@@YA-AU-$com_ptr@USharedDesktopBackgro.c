/*
 * XREFs of ??$make_self@USharedDesktopBackgroundVisualHost@@$$V@winrt@@YA?AU?$com_ptr@USharedDesktopBackgroundVisualHost@@@0@XZ @ 0x1806E0C50
 * Callers:
 *     ?GetBackgroundHostForType@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA_KW4BackgroundIdentifier@34567@_N@Z @ 0x1806E2288 (-GetBackgroundHostForType@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??0SharedDesktopBackgroundVisualHost@@QEAA@PEAUHWND__@@@Z @ 0x1806E66F0 (--0SharedDesktopBackgroundVisualHost@@QEAA@PEAUHWND__@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
SharedDesktopBackgroundVisualHost **__fastcall winrt::make_self<SharedDesktopBackgroundVisualHost,>(
        SharedDesktopBackgroundVisualHost **a1)
{
  HWND v2; // rdx
  SharedDesktopBackgroundVisualHost *v4; // [rsp+40h] [rbp+8h]

  v4 = (SharedDesktopBackgroundVisualHost *)operator new(0x150uLL);
  SharedDesktopBackgroundVisualHost::SharedDesktopBackgroundVisualHost(v4, v2);
  *(_QWORD *)v4 = &SharedDesktopBackgroundVisualHost::`vftable';
  *a1 = v4;
  return a1;
}
