/*
 * XREFs of ??0SearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@QEAA@AEBUhstring@5@AEBW4SearchAppActivationMode@2345@AEBU?$IReference@URect@Foundation@Windows@winrt@@@Foundation@Windows@5@AEBUDeferralCompletedHandler@9Windows@5@_N0AEBUSearchAppHost@2345@@Z @ 0x1801A4574
 * Callers:
 *     ??0?$heap_implements@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEAA@AEBUhstring@2@AEBW4SearchAppActivationMode@Shell@UI@WindowsUdk@2@AEBU?$IReference@URect@Foundation@Windows@winrt@@@Foundation@Windows@2@AEBUDeferralCompletedHandler@9Windows@2@_N0AEBUSearchAppHost@5672@@Z @ 0x18019B730 (--0-$heap_implements@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@@imp.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800F2C90 (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x1800F4BD8 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ??0ShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@QEAA@AEBU01234@@Z @ 0x180143304 (--0ShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@QEAA@AEBU01234@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs::SearchAppActivatedEventArgs(
        __int64 a1,
        winrt::impl **a2,
        _DWORD *a3,
        const struct winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *a4,
        _QWORD *a5,
        char a6,
        winrt::impl **a7,
        struct winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *a8)
{
  *(_QWORD *)(a1 + 16) = &winrt::impl::produce<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,winrt::WindowsUdk::UI::Shell::ISearchAppActivatedEventArgs>::`vftable';
  *(_QWORD *)(a1 + 24) = &winrt::impl::produce<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,winrt::WindowsUdk::UI::Shell::ISearchAppActivatedEventArgs2>::`vftable';
  *(_QWORD *)(a1 + 32) = &winrt::impl::produce<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs>::`vftable';
  *(_QWORD *)(a1 + 40) = &winrt::impl::produce<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs>::`vftable';
  *(_QWORD *)(a1 + 48) = &winrt::impl::produce<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs>::`vftable';
  *(_QWORD *)(a1 + 56) = &winrt::impl::produce<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2>::`vftable';
  *(_QWORD *)(a1 + 64) = &winrt::impl::produce<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>::`vftable';
  *(_QWORD *)(a1 + 72) = &winrt::impl::produce<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *(_QWORD *)(a1 + 8) = 1LL;
  *(_QWORD *)a1 = &winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs::`vftable';
  winrt::hstring::hstring((winrt::hstring *)(a1 + 80), a2);
  *(_DWORD *)(a1 + 88) = *a3;
  winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs::ShowShellViewRequestedEventArgs(
    (winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *)(a1 + 96),
    a4);
  *(_QWORD *)(a1 + 104) = *a5;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)(a1 + 104));
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_BYTE *)(a1 + 128) = a6;
  winrt::hstring::hstring((winrt::hstring *)(a1 + 136), a7);
  winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs::ShowShellViewRequestedEventArgs(
    (winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *)(a1 + 144),
    a8);
  return a1;
}
