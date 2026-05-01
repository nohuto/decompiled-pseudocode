/*
 * XREFs of ??0SearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@QEAA@AEBUhstring@5@AEBW4SearchAppActivationMode@2345@AEBU?$IReference@URect@Foundation@Windows@winrt@@@Foundation@Windows@5@AEBUDeferralCompletedHandler@9Windows@5@_N0AEBUSearchAppHost@2345@@Z @ 0x1800DB940
 * Callers:
 *     ??0?$heap_implements@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEAA@AEBUhstring@2@AEBW4SearchAppActivationMode@Shell@UI@WindowsUdk@2@AEBU?$IReference@URect@Foundation@Windows@winrt@@@Foundation@Windows@2@AEBUDeferralCompletedHandler@9Windows@2@_N0AEBUSearchAppHost@5672@@Z @ 0x1800DBC64 (--0-$heap_implements@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@@imp.c)
 * Callees:
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs::SearchAppActivatedEventArgs(
        __int64 a1,
        winrt::impl **a2,
        _DWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        char a6,
        winrt::impl **a7,
        _QWORD *a8)
{
  struct winrt::impl::hstring_header *v11; // rdx

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
  *(_QWORD *)(a1 + 80) = winrt::impl::duplicate_hstring(*a2, (struct winrt::impl::hstring_header *)a2);
  *(_DWORD *)(a1 + 88) = *a3;
  *(_QWORD *)(a1 + 96) = *a4;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)(a1 + 96));
  *(_QWORD *)(a1 + 104) = *a5;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)(a1 + 104));
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_BYTE *)(a1 + 128) = a6;
  *(_QWORD *)(a1 + 136) = winrt::impl::duplicate_hstring(*a7, v11);
  *(_QWORD *)(a1 + 144) = *a8;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)(a1 + 144));
  return a1;
}
