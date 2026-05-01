/*
 * XREFs of ??R_lambda_711bfd1af15e27d1f27b55343e53885b_@@QEBAXXZ @ 0x1805E0BBC
 * Callers:
 *     ?Invoke@?$delegate@UDispatcherQueueHandler@System@Windows@winrt@@V_lambda_711bfd1af15e27d1f27b55343e53885b_@@@impl@winrt@@UEAAHXZ @ 0x1805E1F40 (-Invoke@-$delegate@UDispatcherQueueHandler@System@Windows@winrt@@V_lambda_711bfd1af15e27d1f27b55.c)
 * Callees:
 *     ?complete@?$tip_test@U_tip_DesktopTouchKeyboardShowOnTryShowV1@TouchKeyboardExperienceTip@@@tip@@QEAAXXZ @ 0x180045564 (-complete@-$tip_test@U_tip_DesktopTouchKeyboardShowOnTryShowV1@TouchKeyboardExperienceTip@@@tip@.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x18007BE14 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18009EBB4 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18013A0EC (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ??$HideRequest@_NIIAEAY0BA@$$CBG_N@InputSwitchingManagerTelemetry@@SAX$$QEA_N$$QEAI1AEAY0BA@$$CBG0@Z @ 0x1805DF220 (--$HideRequest@_NIIAEAY0BA@$$CBG_N@InputSwitchingManagerTelemetry@@SAX$$QEA_N$$QEAI1AEAY0BA@$$CB.c)
 *     ??$InputSwitchTrace@AEAY0M@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0M@$$CBG@Z @ 0x1805DF3E8 (--$InputSwitchTrace@AEAY0M@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0M@$$CBG@Z.c)
 *     ??$InputSwitchTrace@AEAY0O@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0O@$$CBG@Z @ 0x1805DF434 (--$InputSwitchTrace@AEAY0O@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0O@$$CBG@Z.c)
 *     ??$OpenRequest@_NIIAEAY0BA@$$CBG_N@InputSwitchingManagerTelemetry@@SAX$$QEA_N$$QEAI1AEAY0BA@$$CBG0@Z @ 0x1805DF554 (--$OpenRequest@_NIIAEAY0BA@$$CBG_N@InputSwitchingManagerTelemetry@@SAX$$QEA_N$$QEAI1AEAY0BA@$$CB.c)
 *     ?CanShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x1805E1028 (-CanShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?HideControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x1805E167C (-HideControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QE.c)
 *     ?InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4InputSwitcherActionKind@23456@@Z @ 0x1805E1934 (-InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4I.c)
 *     ?ShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x1805E22BC (-ShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QE.c)
 *     ?pop_front@?$deque@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@V?$allocator@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@QEAAXXZ @ 0x1805E2C78 (-pop_front@-$deque@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@V-$all.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall _lambda_711bfd1af15e27d1f27b55343e53885b_::operator()(
        winrt::Windows::Internal::Shell::implementation::InputSwitchingManager **a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  winrt::Windows::Internal::Shell::implementation::InputSwitchingManager *v3; // rcx
  __int64 v4; // rbx
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+30h] [rbp-D0h] BYREF
  void **v6; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v7[152]; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v8; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v9[24]; // [rsp+F0h] [rbp-10h] BYREF
  int v10; // [rsp+108h] [rbp+8h]
  bool v11; // [rsp+158h] [rbp+58h] BYREF
  int v12; // [rsp+160h] [rbp+60h] BYREF
  int v13; // [rsp+168h] [rbp+68h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)*a1 + 96);
  EnterCriticalSection(v2);
  v5 = v2;
  v6 = &wil::ThreadFailureCache::`vftable';
  v8 = 0LL;
  memset_0(v7, 0, sizeof(v7));
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)v9,
    (struct wil::details::IFailureCallback *)&v6,
    0LL,
    1);
  v3 = *a1;
  if ( *((_QWORD *)*a1 + 21) )
  {
    v4 = *(_QWORD *)(*((_QWORD *)v3 + 18) + 8 * (*((_QWORD *)v3 + 20) & (*((_QWORD *)v3 + 19) - 1LL)));
    if ( !*(_BYTE *)(v4 + 52) )
    {
      if ( !*(_DWORD *)v4 )
      {
        winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::CanShowControlCenterSwitcher(v3);
        v12 = 0;
        v13 = *(_DWORD *)(v4 + 48);
        v11 = v13 == 4;
        InputSwitchingManagerTelemetry::OpenRequest<bool,unsigned int,unsigned int,unsigned short const (&)[16],bool>(
          (char *)&v11,
          &v13,
          &v12);
        if ( winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::ShowControlCenterSwitcher(*a1) )
        {
          *(_BYTE *)(v4 + 52) = 1;
          *(_QWORD *)(v4 + 8) = GetTickCount64();
          goto LABEL_12;
        }
        InputSwitchingManagerTelemetry::InputSwitchTrace<unsigned short const (&)[12]>((__int64)L"Failed Show");
        tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTryShowV1>::complete((__int64 *)(v4 + 16));
        goto LABEL_9;
      }
      winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::CanShowControlCenterSwitcher(v3);
      v12 = 0;
      v13 = *(_DWORD *)(v4 + 48);
      v11 = v13 == 4;
      InputSwitchingManagerTelemetry::HideRequest<bool,unsigned int,unsigned int,unsigned short const (&)[16],bool>(
        (char *)&v11,
        &v13,
        &v12);
      if ( winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::HideControlCenterSwitcher(*a1) )
      {
        *(_BYTE *)(v4 + 52) = 1;
        *(_QWORD *)(v4 + 8) = GetTickCount64();
        tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTryShowV1>::complete((__int64 *)(v4 + 32));
LABEL_9:
        std::deque<winrt::Windows::Internal::Shell::implementation::InputSwitcherAsyncAction>::pop_front((char *)*a1 + 136);
        goto LABEL_12;
      }
      InputSwitchingManagerTelemetry::InputSwitchTrace<unsigned short const (&)[12]>((__int64)L"Failed Hide");
      tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTryShowV1>::complete((__int64 *)(v4 + 32));
      std::deque<winrt::Windows::Internal::Shell::implementation::InputSwitcherAsyncAction>::pop_front((char *)*a1 + 136);
      if ( *((_BYTE *)*a1 + 280) )
      {
        InputSwitchingManagerTelemetry::InputSwitchTrace<unsigned short const (&)[14]>((__int64)L"Retrying Hide");
        winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::InsertActionToQueue(*a1, 1LL);
      }
    }
  }
LABEL_12:
  if ( v10 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v9);
  wil::details::shared_buffer::reset((volatile signed __int32 **)&v8);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v5);
}
