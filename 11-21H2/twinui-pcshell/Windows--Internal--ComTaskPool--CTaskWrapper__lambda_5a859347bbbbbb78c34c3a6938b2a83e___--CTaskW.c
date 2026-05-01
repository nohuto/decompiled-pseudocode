/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5a859347bbbbbb78c34c3a6938b2a83e___::CTaskWrapper__lambda_5a859347bbbbbb78c34c3a6938b2a83e_____lambda_5a859347bbbbbb78c34c3a6938b2a83e___ @ 0x1801A6C6C
 * Callers:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5a859347bbbbbb78c34c3a6938b2a83e_____lambda_5a859347bbbbbb78c34c3a6938b2a83e___ @ 0x1801A6E34 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5a859347bbbbb.c)
 * Callees:
 *     ??0?$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1800715C4 (--0-$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProvi.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180087160 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800F2C90 (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ??0ShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@QEAA@AEBU01234@@Z @ 0x180143304 (--0ShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@QEAA@AEBU01234@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5a859347bbbbbb78c34c3a6938b2a83e___::CTaskWrapper__lambda_5a859347bbbbbb78c34c3a6938b2a83e_____lambda_5a859347bbbbbb78c34c3a6938b2a83e___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  wil::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)(a1 + 16),
    a2);
  *(_QWORD *)(a1 + 16) = &MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_ActivateAppAsync::`vftable';
  winrt::hstring::hstring((winrt::hstring *)(a1 + 336), (winrt::impl **)(a2 + 320));
  winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs::ShowShellViewRequestedEventArgs(
    (winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *)(a1 + 344),
    (const struct winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *)(a2 + 328));
  *(_QWORD *)a1 = off_180643520;
  return a1;
}
