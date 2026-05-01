/*
 * XREFs of ?SwitchToApplicationFlyoutIfNeeded@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x1806C0C38
 * Callers:
 *     ?OnListenerWindowMessage@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@56@0@Z @ 0x180012F60 (-OnListenerWindowMessage@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAE.c)
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_ResumeCoro$1 @ 0x180254250 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--InstallForCurr_ea_180254250.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1804B226C (--4-$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$CannotSwitchToAppFlyout@AEA_NAEA_NAEAI@MeetAndChatTelemetry@@SAXAEA_N0AEAI@Z @ 0x1806AF34C (--$CannotSwitchToAppFlyout@AEA_NAEA_NAEAI@MeetAndChatTelemetry@@SAXAEA_N0AEAI@Z.c)
 *     ?ShowMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUShowShellViewRequestedEventArgs@3UI@WindowsUdk@6@W4LaunchSource@MeetAndChatTelemetry@@@Z @ 0x1806BFC40 (-ShowMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUShowShellVi.c)
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
  __int64 v8; // [rsp+50h] [rbp+20h] BYREF
  char v9; // [rsp+58h] [rbp+28h] BYREF
  int v10; // [rsp+60h] [rbp+30h] BYREF

  *(_OWORD *)v7 = 0LL;
  v2 = this + 14;
  AcquireSRWLockShared(this + 14);
  std::shared_ptr<FlyoutView>::operator=((__int64 *)v7, &this[24].Ptr);
  if ( v2 )
    ReleaseSRWLockShared(v2);
  v3 = v7[0];
  if ( v7[0] )
  {
    if ( (**(unsigned __int8 (__fastcall ***)(std::_Ref_count_base *))v7[0])(v7[0])
      && (*(unsigned int (__fastcall **)(std::_Ref_count_base *))(*(_QWORD *)v3 + 24LL))(v3) )
    {
      v8 = 0LL;
      winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::ShowMACFlyout((__int64)this, &v8, 0);
      v4 = 1;
      goto LABEL_12;
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
LABEL_12:
  if ( v7[1] )
    std::_Ref_count_base::_Decref(v7[1]);
  return v4;
}
