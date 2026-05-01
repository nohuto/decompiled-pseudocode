/*
 * XREFs of ??0XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@_KAEBUhstring@6@@Z @ 0x18004A534
 * Callers:
 *     ?CreateInstance@XamlExplorerHostChildWindow_WASDK@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@_KAEBUhstring@7@@Z @ 0x18004A30C (-CreateInstance@XamlExplorerHostChildWindow_WASDK@factory_implementation@XamlExplorerHost@Shell@.c)
 * Callees:
 *     ?Initialize@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXV?$optional@PEAUHWND__@@@std@@@Z @ 0x18004A7A0 (-Initialize@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Win.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 */

// Hidden C++ exception states: #wind=6
winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK *__fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK::XamlExplorerHostChildWindow_WASDK(
        winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK *this,
        struct winrt::impl::hstring_header *a2,
        winrt::impl **a3)
{
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  *((_QWORD *)this + 2) = &winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDK>::`vftable';
  *((_QWORD *)this + 3) = &winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDK2>::`vftable';
  *((_QWORD *)this + 4) = &winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Foundation::IClosable>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_QWORD *)this + 1) = 1LL;
  *(_QWORD *)this = &winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK::`vftable';
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = winrt::impl::duplicate_hstring(*a3, a2);
  *((_QWORD *)this + 10) = a2;
  *((_BYTE *)this + 88) = 0;
  *((_DWORD *)this + 23) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  v6[8] = 0;
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK::Initialize(
    this,
    v6);
  return this;
}
