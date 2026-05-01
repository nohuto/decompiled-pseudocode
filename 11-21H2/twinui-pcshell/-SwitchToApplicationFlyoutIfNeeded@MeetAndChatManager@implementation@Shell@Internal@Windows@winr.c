/*
 * XREFs of ?SwitchToApplicationFlyoutIfNeeded@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x1805CF0C8
 * Callers:
 *     ?OnListenerWindowMessage@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@56@0@Z @ 0x18003D410 (-OnListenerWindowMessage@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAE.c)
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_ResumeCoro$1 @ 0x1801D1BE0 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--InstallForCurr_ea_1801D1BE0.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1803D55B0 (--4-$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$CannotSwitchToAppFlyout@AEA_NAEA_NAEAI@MeetAndChatTelemetry@@SAXAEA_N0AEAI@Z @ 0x1805BF1D8 (--$CannotSwitchToAppFlyout@AEA_NAEA_NAEAI@MeetAndChatTelemetry@@SAXAEA_N0AEAI@Z.c)
 *     ?ShowMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUShowShellViewRequestedEventArgs@3UI@WindowsUdk@6@W4LaunchSource@MeetAndChatTelemetry@@@Z @ 0x1805CE3A0 (-ShowMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUShowShellVi.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::SwitchToApplicationFlyoutIfNeeded(
        RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rbx
  std::_Ref_count_base *v3; // rdi
  char v4; // bl
  char v5; // bl
  std::_Ref_count_base *v7[2]; // [rsp+20h] [rbp-10h] BYREF
  RTL_SRWLOCK *v8; // [rsp+50h] [rbp+20h] BYREF
  char v9; // [rsp+58h] [rbp+28h] BYREF
  int v10; // [rsp+60h] [rbp+30h] BYREF

  *(_OWORD *)v7 = 0LL;
  v2 = this + 14;
  AcquireSRWLockShared(this + 14);
  v8 = v2;
  std::shared_ptr<FlyoutView>::operator=((__int64 *)v7, &this[24].Ptr);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v8);
  v3 = v7[0];
  if ( v7[0] )
  {
    if ( (**(unsigned __int8 (__fastcall ***)(std::_Ref_count_base *))v7[0])(v7[0])
      && (*(unsigned int (__fastcall **)(std::_Ref_count_base *))(*(_QWORD *)v3 + 24LL))(v3) )
    {
      v8 = 0LL;
      winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::ShowMACFlyout(
        (__int64)this,
        (__int64 *)&v8,
        0);
      v4 = 1;
      goto LABEL_10;
    }
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  v9 = v5;
  LOBYTE(v8) = 0;
  v10 = 0;
  if ( v5 )
  {
    LOBYTE(v8) = (**(__int64 (__fastcall ***)(std::_Ref_count_base *))v3)(v3);
    v10 = (*(__int64 (__fastcall **)(std::_Ref_count_base *))(*(_QWORD *)v3 + 24LL))(v3);
  }
  MeetAndChatTelemetry::CannotSwitchToAppFlyout<bool &,bool &,unsigned int &>(&v9, (char *)&v8, &v10);
  v4 = 0;
LABEL_10:
  if ( v7[1] )
    std::_Ref_count_base::_Decref(v7[1]);
  return v4;
}
