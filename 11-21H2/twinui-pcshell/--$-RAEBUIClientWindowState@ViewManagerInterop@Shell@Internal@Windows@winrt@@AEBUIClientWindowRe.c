/*
 * XREFs of ??$?RAEBUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@winrt@@AEBUIClientWindowReadyForPresentationChangedEventArgs@12345@@_lambda_bef65ec9d7e5e7cbe5d032e5d418e177_@@QEBAXAEBUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@winrt@@AEBUIClientWindowReadyForPresentationChangedEventArgs@23456@@Z @ 0x180340DF0
 * Callers:
 *     ?Invoke@?$delegate@U?$TypedEventHandler@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@winrt@@UIClientWindowReadyForPresentationChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_bef65ec9d7e5e7cbe5d032e5d418e177_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x180342380 (-Invoke@-$delegate@U-$TypedEventHandler@UIClientWindowState@ViewManagerInterop@Shell@Internal@Wi.c)
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x1800F4BD8 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?unconditional_release_ref@?$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ @ 0x18033DCB8 (-unconditional_release_ref@-$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ.c)
 *     ?get@?$weak_ref@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@QEBA?AU?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@2@XZ @ 0x180344590 (-get@-$weak_ref@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@.c)
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
    return winrt::com_ptr<SnapFlyoutHost>::unconditional_release_ref(&v10);
  return result;
}
