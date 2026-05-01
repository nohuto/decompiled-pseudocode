/*
 * XREFs of ??$?RAEBUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@winrt@@AEBUIClientWindowReadyForPresentationChangedEventArgs@12345@@_lambda_bef65ec9d7e5e7cbe5d032e5d418e177_@@QEBA?A_PAEBUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@winrt@@AEBUIClientWindowReadyForPresentationChangedEventArgs@23456@@Z @ 0x18040EA54
 * Callers:
 *     ?Invoke@?$delegate@U?$TypedEventHandler@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@winrt@@UIClientWindowReadyForPresentationChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_bef65ec9d7e5e7cbe5d032e5d418e177_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x18040FF10 (-Invoke@-$delegate@U-$TypedEventHandler@UIClientWindowState@ViewManagerInterop@Shell@Internal@Wi.c)
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1801FA5AC (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?get@?$weak_ref@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x1804123B8 (-get@-$weak_ref@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _lambda_bef65ec9d7e5e7cbe5d032e5d418e177_::operator()<winrt::Windows::Internal::Shell::ViewManagerInterop::IClientWindowState const &,winrt::Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs const &>(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 result; // rax
  char *v7; // rsi
  __int64 (__fastcall *v8)(char *, _QWORD *, __int64 *); // rdi
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF
  volatile __int64 *v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  result = winrt::weak_ref<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl>::get(
             a1,
             &v10);
  if ( v10 )
  {
    v7 = (char *)v10 + *(int *)(a1 + 16);
    v8 = *(__int64 (__fastcall **)(char *, _QWORD *, __int64 *))(a1 + 8);
    v11 = *a3;
    winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v11);
    v9[0] = *a2;
    winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)v9);
    result = v8(v7, v9, &v11);
  }
  if ( v10 )
    return winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v10);
  return result;
}
