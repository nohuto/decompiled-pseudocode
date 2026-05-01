/*
 * XREFs of ?GetDeferral@SearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AUDeferral@Foundation@Windows@6@XZ @ 0x1800B20A0
 * Callers:
 *     ?GetDeferral@?$produce@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppActivatedEventArgs@3456@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800B2050 (-GetDeferral@-$produce@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UI.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@@winrt@@AEAAXXZ @ 0x1800B1AC0 (-unconditional_release_ref@-$com_ptr@USearchAppActivatedEventArgs@implementation@Shell@UI@Window.c)
 *     ??$call@AEAV_lambda_05b02c468eda432e9e6db40beed076d3_@@@?$factory_cache_entry@UDeferral@Foundation@Windows@winrt@@UIDeferralFactory@234@@impl@winrt@@QEAA?A_PAEAV_lambda_05b02c468eda432e9e6db40beed076d3_@@@Z @ 0x1800B21D8 (--$call@AEAV_lambda_05b02c468eda432e9e6db40beed076d3_@@@-$factory_cache_entry@UDeferral@Foundati.c)
 *     ?Create@?$consume_Windows_Foundation_IDeferralFactory@UIDeferralFactory@Foundation@Windows@winrt@@@impl@winrt@@QEBA@AEBUDeferralCompletedHandler@Foundation@Windows@3@@Z @ 0x1800B2330 (-Create@-$consume_Windows_Foundation_IDeferralFactory@UIDeferralFactory@Foundation@Windows@winrt.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
volatile __int64 *__fastcall winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs::GetDeferral(
        __int64 a1,
        volatile __int64 *a2)
{
  volatile __int64 *v3; // rax
  signed __int64 v4; // rdx
  bool v5; // zf
  signed __int64 v6; // rax
  signed __int64 v7; // rdx
  volatile __int64 *v8; // r8
  signed __int64 v9; // rax
  volatile __int64 **v10; // rax
  volatile __int64 *v11; // rcx
  __int64 (__fastcall **v12)(); // rcx
  volatile __int64 *v14; // [rsp+50h] [rbp+18h] BYREF
  volatile __int64 *v15; // [rsp+58h] [rbp+20h] BYREF
  volatile __int64 **v16; // [rsp+60h] [rbp+28h] BYREF
  volatile __int64 **v17; // [rsp+68h] [rbp+30h] BYREF

  v15 = a2;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 112));
  v3 = 0LL;
  v15 = 0LL;
  if ( a1 )
  {
    v15 = (volatile __int64 *)a1;
    v4 = *(_QWORD *)(a1 + 8);
    while ( v4 >= 0 )
    {
      v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v4 + 1, v4);
      v5 = v4 == v6;
      v4 = v6;
      if ( v5 )
        goto LABEL_5;
    }
    _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v4 + 24), 1u);
LABEL_5:
    v3 = v15;
  }
  v14 = v3;
  if ( v3 )
  {
    v7 = *((_QWORD *)v3 + 1);
    v8 = v15;
    while ( v7 >= 0 )
    {
      v9 = _InterlockedCompareExchange64(v8 + 1, v7 + 1, v7);
      v5 = v7 == v9;
      v7 = v9;
      if ( v5 )
        goto LABEL_10;
    }
    _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v7 + 24), 1u);
  }
LABEL_10:
  v17 = &v14;
  v10 = (volatile __int64 **)operator new(0x18uLL);
  v17 = v10;
  v11 = v14;
  v14 = 0LL;
  v10[1] = v11;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v10 + 4) = 1;
  v12 = off_1807A1320;
  *v10 = (volatile __int64 *)off_1807A1320;
  v16 = v10;
  if ( v14 )
    winrt::com_ptr<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs>::unconditional_release_ref(&v14);
  v17 = (volatile __int64 **)&v16;
  _InterlockedIncrement64(&qword_18098DA08);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::Deferral,winrt::Windows::Foundation::IDeferralFactory> )
  {
    winrt::impl::consume_Windows_Foundation_IDeferralFactory<winrt::Windows::Foundation::IDeferralFactory>::Create(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::Deferral,winrt::Windows::Foundation::IDeferralFactory>,
      a2,
      &v16);
    _InterlockedDecrement64(&qword_18098DA08);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098DA08);
    winrt::impl::factory_cache_entry<winrt::Windows::Foundation::Deferral,winrt::Windows::Foundation::IDeferralFactory>::call<_lambda_05b02c468eda432e9e6db40beed076d3_ &>(
      v12,
      a2,
      &v17);
  }
  if ( v16 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v16);
  if ( v15 )
    winrt::com_ptr<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs>::unconditional_release_ref(&v15);
  return a2;
}
