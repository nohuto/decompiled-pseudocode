/*
 * XREFs of _lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_::_lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_ @ 0x18019B3CC
 * Callers:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_____lambda_e9972a7fc06ea41c4e23ae797ec0a7d8___ @ 0x1801996F0 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e9972a7fc06ea.c)
 * Callees:
 *     ??0?$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1800715C4 (--0-$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProvi.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800F2C90 (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ??0ShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@QEAA@AEBU01234@@Z @ 0x180143304 (--0ShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@QEAA@AEBU01234@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_::_lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rcx

  wil::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)a1,
    a2);
  *(_QWORD *)a1 = &SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch::`vftable';
  winrt::hstring::hstring((winrt::hstring *)(a1 + 320), (winrt::impl **)(a2 + 320));
  *(_BYTE *)(a1 + 328) = *(_BYTE *)(a2 + 328);
  winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs::ShowShellViewRequestedEventArgs(
    (winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *)(a1 + 336),
    (const struct winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *)(a2 + 336));
  *(_BYTE *)(a1 + 344) = *(_BYTE *)(a2 + 344);
  v4 = (_QWORD *)(a2 + 352);
  *(_QWORD *)(a1 + 352) = 0LL;
  if ( a1 + 352 != a2 + 352 )
  {
    *(_QWORD *)(a1 + 352) = *v4;
    *v4 = 0LL;
  }
  *(_QWORD *)(a1 + 360) = *(_QWORD *)(a2 + 360);
  return a1;
}
