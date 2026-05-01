/*
 * XREFs of ?GetXamlType@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA?AUIXamlType@Markup@Xaml@UI@Microsoft@8@AEBUhstring@8@@Z @ 0x180036E98
 * Callers:
 *     ?GetXamlTypeByFullName@?$produce@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@8@@impl@winrt@@UEAAHPEAXPEAPEAX@Z @ 0x180036E20 (-GetXamlTypeByFullName@-$produce@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Sh.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800D5B1C (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?GetXamlType@?$consume_Microsoft_UI_Xaml_Markup_IXamlMetadataProvider@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1801FAE3C (-GetXamlType@-$consume_Microsoft_UI_Xaml_Markup_IXamlMetadataProvider@UIXamlMetadat_ea_1801FAE3C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
winrt::Windows::Foundation::IUnknown *__fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK::GetXamlType(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2,
        _QWORD *a3)
{
  RTL_SRWLOCK *v6; // rsi
  int v7; // eax
  DWORD LastError; // ebx
  winrt::Windows::Foundation::IUnknown *XamlType; // rbx
  __int64 v10; // rcx
  _QWORD v12[4]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v13; // [rsp+50h] [rbp-20h] BYREF
  RTL_SRWLOCK *v14; // [rsp+58h] [rbp-18h]

  v6 = (RTL_SRWLOCK *)(a1 + 80);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 80));
  v14 = v6;
  v13 = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)(a1 + 56) + 56LL))(
         *(_QWORD *)(a1 + 56),
         *a3,
         &v13);
  if ( v7 < 0 )
    winrt::throw_hresult((unsigned int)v7);
  *(_QWORD *)a2 = v13;
  if ( v6 )
  {
    LastError = GetLastError();
    ReleaseSRWLockExclusive(v6);
    SetLastError(LastError);
  }
  v14 = 0LL;
  v13 = 0LL;
  if ( (unsigned __int8)winrt::Windows::Foundation::operator==(a2, &v13) )
  {
    v12[0] = *a3;
    XamlType = (winrt::Windows::Foundation::IUnknown *)winrt::impl::consume_Microsoft_UI_Xaml_Markup_IXamlMetadataProvider<winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider>::GetXamlType(
                                                         a1 + 48,
                                                         &v13,
                                                         v12);
    if ( a2 != XamlType )
    {
      if ( *(_QWORD *)a2 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a2);
      v10 = *(_QWORD *)XamlType;
      *(_QWORD *)XamlType = 0LL;
      *(_QWORD *)a2 = v10;
    }
    if ( v13 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v13);
  }
  return a2;
}
