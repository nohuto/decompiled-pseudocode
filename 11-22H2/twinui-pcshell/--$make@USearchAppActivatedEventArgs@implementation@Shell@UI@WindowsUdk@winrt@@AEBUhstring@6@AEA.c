/*
 * XREFs of ??$make@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@AEBUhstring@6@AEAW4SearchAppActivationMode@3456@AEAURect@Foundation@Windows@6@AEAUDeferralCompletedHandler@Foundation@Windows@6@AEA_NAEAU76@AEAUSearchAppHost@3456@@winrt@@YA?A_PAEBUhstring@0@AEAW4SearchAppActivationMode@Shell@UI@WindowsUdk@0@AEAURect@Foundation@Windows@0@AEAUDeferralCompletedHandler@780@AEA_NAEAU10@AEAUSearchAppHost@3450@@Z @ 0x1800DBB80
 * Callers:
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x1800B7C8C (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??0?$heap_implements@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEAA@AEBUhstring@2@AEBW4SearchAppActivationMode@Shell@UI@WindowsUdk@2@AEBU?$IReference@URect@Foundation@Windows@winrt@@@Foundation@Windows@2@AEBUDeferralCompletedHandler@9Windows@2@_N0AEBUSearchAppHost@5672@@Z @ 0x1800DBC64 (--0-$heap_implements@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@@imp.c)
 *     ??0?$IReference@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@AEBURect@123@@Z @ 0x1800DBCB8 (--0-$IReference@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@AEBURect@123@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall winrt::make<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,winrt::hstring const &,enum winrt::WindowsUdk::UI::Shell::SearchAppActivationMode &,winrt::Windows::Foundation::Rect &,winrt::Windows::Foundation::DeferralCompletedHandler &,bool &,winrt::hstring &,winrt::WindowsUdk::UI::Shell::SearchAppHost &>(
        __int64 *a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        char *a6,
        __int64 a7,
        __int64 a8)
{
  char v12; // bl
  __int64 v13; // rax
  unsigned int v15; // [rsp+48h] [rbp-20h]
  __int64 *v16; // [rsp+70h] [rbp+8h] BYREF

  v16 = a1;
  v15 = (unsigned int)operator new(0x98uLL);
  v12 = *a6;
  winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::Rect>::IReference<winrt::Windows::Foundation::Rect>(
    &v16,
    a4);
  v13 = winrt::impl::heap_implements<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs>::heap_implements<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs>(
          v15,
          a2,
          a3,
          (unsigned int)&v16,
          a5,
          v12,
          a7,
          a8);
  if ( v13 )
    v13 += 16LL;
  *a1 = v13;
  if ( v16 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v16);
  return a1;
}
