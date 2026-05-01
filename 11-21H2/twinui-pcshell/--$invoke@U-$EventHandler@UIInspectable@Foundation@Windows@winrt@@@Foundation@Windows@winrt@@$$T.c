/*
 * XREFs of ??$invoke@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@$$T$$T@impl@winrt@@YA_NAEBU?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@1@AEB$$T1@Z @ 0x1801A38D0
 * Callers:
 *     ??$?R$$T$$T@?$event@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXAEB$$T0@Z @ 0x1801A35E0 (--$-R$$T$$T@-$event@U-$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ??R?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEBAXAEBUIInspectable@123@0@Z @ 0x180038584 (--R-$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEBAXAEBUII.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall winrt::impl::invoke<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>,std::nullptr_t,std::nullptr_t>(
        _QWORD *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  try
  {
    winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>::operator()(a1, &v5, &v4);
    winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v5);
    winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v4);
  }
  catch ( ... )
  {
    v2 = *(_DWORD *)winrt::to_hresult(&v5);
    ___load_runtime_function_P6AHHHPEAX__EP6AHHH0__E_impl_winrt__YAXPEBDAEAP6AHHHPEAX__EP6AHHH1__E_Z(
      v3,
      &`winrt::impl::invoke<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>,std::nullptr_t,std::nullptr_t>'::`4'::handler);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))`winrt::impl::invoke<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>,std::nullptr_t,std::nullptr_t>'::`4'::handler)(
      v2,
      0LL,
      0LL);
    return v2 != -2147417848 && v2 != -2147023174 && v2 != -1996357631;
  }
  return 1;
}
