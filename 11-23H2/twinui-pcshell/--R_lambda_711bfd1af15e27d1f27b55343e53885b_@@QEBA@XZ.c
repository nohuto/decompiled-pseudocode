/*
 * XREFs of ??R_lambda_711bfd1af15e27d1f27b55343e53885b_@@QEBA@XZ @ 0x1806FF72C
 * Callers:
 *     ?Invoke@?$delegate@UDispatcherQueueHandler@System@Windows@winrt@@V_lambda_711bfd1af15e27d1f27b55343e53885b_@@@impl@winrt@@UEAAHXZ @ 0x1802EB120 (-Invoke@-$delegate@UDispatcherQueueHandler@System@Windows@winrt@@V_lambda_711bfd1af15e27d1f27b55.c)
 * Callees:
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180098510 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800C8EDC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18016B8F0 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ?complete@?$tip_test@U_tip_NotificationCenterShowTest@@@tip@@QEAAXXZ @ 0x1802D442C (-complete@-$tip_test@U_tip_NotificationCenterShowTest@@@tip@@QEAAXXZ.c)
 *     ??$HideRequest@_NIIAEAY0BA@$$CBG_N@InputSwitchingManagerTelemetry@@SAX$$QEA_N$$QEAI1AEAY0BA@$$CBG0@Z @ 0x1802EAC2A (--$HideRequest@_NIIAEAY0BA@$$CBG_N@InputSwitchingManagerTelemetry@@SAX$$QEA_N$$QEAI1AEAY0BA@$$CB.c)
 *     ??$InputSwitchTrace@AEAY0M@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0M@$$CBG@Z @ 0x1802EAD56 (--$InputSwitchTrace@AEAY0M@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0M@$$CBG@Z.c)
 *     ??$InputSwitchTrace@AEAY0O@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0O@$$CBG@Z @ 0x1802EADA0 (--$InputSwitchTrace@AEAY0O@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0O@$$CBG@Z.c)
 *     ?CanShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x1802EB0D0 (-CanShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?pop_front@?$deque@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@V?$allocator@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@QEAAXXZ @ 0x1802EB52E (-pop_front@-$deque@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@V-$all.c)
 *     ??$OpenRequest@_NIIAEAY0BA@$$CBG_N@InputSwitchingManagerTelemetry@@SAX$$QEA_N$$QEAI1AEAY0BA@$$CBG0@Z @ 0x1806FE7F8 (--$OpenRequest@_NIIAEAY0BA@$$CBG_N@InputSwitchingManagerTelemetry@@SAX$$QEA_N$$QEAI1AEAY0BA@$$CB.c)
 *     ?HideControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x1806FFAFC (-HideControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QE.c)
 *     ?InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4InputSwitcherActionKind@23456@@Z @ 0x1806FFDB8 (-InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4I.c)
 *     ?ShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x1807003EC (-ShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QE.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall _lambda_711bfd1af15e27d1f27b55343e53885b_::operator()(
        winrt::Windows::Internal::Shell::implementation::InputSwitchingManager **a1)
{
  winrt::Windows::Internal::Shell::implementation::InputSwitchingManager *v2; // rcx
  __int64 v3; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-D0h] BYREF
  void **v5; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v6[152]; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v7; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v8[24]; // [rsp+F0h] [rbp-10h] BYREF
  int v9; // [rsp+108h] [rbp+8h]
  bool v10; // [rsp+158h] [rbp+58h] BYREF
  int v11; // [rsp+160h] [rbp+60h] BYREF
  int v12; // [rsp+168h] [rbp+68h] BYREF

  wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)((char *)*a1 + 96));
  v5 = &wil::ThreadFailureCache::`vftable';
  v7 = 0LL;
  memset_0(v6, 0, sizeof(v6));
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)v8,
    (struct wil::details::IFailureCallback *)&v5,
    0LL,
    1);
  v2 = *a1;
  if ( *((_QWORD *)*a1 + 21) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)v2 + 18) + 8 * (*((_QWORD *)v2 + 20) & (*((_QWORD *)v2 + 19) - 1LL)));
    if ( !*(_BYTE *)(v3 + 52) )
    {
      if ( !*(_DWORD *)v3 )
      {
        winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::CanShowControlCenterSwitcher(v2);
        v11 = 0;
        v12 = *(_DWORD *)(v3 + 48);
        v10 = v12 == 4;
        InputSwitchingManagerTelemetry::OpenRequest<bool,unsigned int,unsigned int,unsigned short const (&)[16],bool>(
          (char *)&v10,
          &v12,
          &v11);
        if ( winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::ShowControlCenterSwitcher(*a1) )
        {
          *(_BYTE *)(v3 + 52) = 1;
          *(_QWORD *)(v3 + 8) = GetTickCount64();
          goto LABEL_12;
        }
        InputSwitchingManagerTelemetry::InputSwitchTrace<unsigned short const (&)[12]>((__int64)L"Failed Show");
        tip::tip_test<_tip_NotificationCenterShowTest>::complete((__int64 *)(v3 + 16));
        goto LABEL_9;
      }
      winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::CanShowControlCenterSwitcher(v2);
      v11 = 0;
      v12 = *(_DWORD *)(v3 + 48);
      v10 = v12 == 4;
      InputSwitchingManagerTelemetry::HideRequest<bool,unsigned int,unsigned int,unsigned short const (&)[16],bool>(
        (char *)&v10,
        &v12,
        &v11);
      if ( winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::HideControlCenterSwitcher(*a1) )
      {
        *(_BYTE *)(v3 + 52) = 1;
        *(_QWORD *)(v3 + 8) = GetTickCount64();
        tip::tip_test<_tip_NotificationCenterShowTest>::complete((__int64 *)(v3 + 32));
LABEL_9:
        std::deque<winrt::Windows::Internal::Shell::implementation::InputSwitcherAsyncAction>::pop_front((_QWORD *)*a1 + 17);
        goto LABEL_12;
      }
      InputSwitchingManagerTelemetry::InputSwitchTrace<unsigned short const (&)[12]>((__int64)L"Failed Hide");
      tip::tip_test<_tip_NotificationCenterShowTest>::complete((__int64 *)(v3 + 32));
      std::deque<winrt::Windows::Internal::Shell::implementation::InputSwitcherAsyncAction>::pop_front((_QWORD *)*a1 + 17);
      if ( *((_BYTE *)*a1 + 280) )
      {
        InputSwitchingManagerTelemetry::InputSwitchTrace<unsigned short const (&)[14]>((__int64)L"Retrying Hide");
        winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::InsertActionToQueue(*a1, 1LL);
      }
    }
  }
LABEL_12:
  if ( v9 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v8);
  wil::details::shared_buffer::reset((volatile signed __int32 **)&v7);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
}
