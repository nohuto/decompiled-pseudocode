/*
 * XREFs of ??B?$tip_test@U_tip_TouchGestureTest@@@tip@@QEBA_NXZ @ 0x180040728
 * Callers:
 *     ?Show@CActionCenterExperienceManager@@AEAAJXZ @ 0x1800178C0 (-Show@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?CompleteHide@CActionCenterExperienceManager@@AEAAJXZ @ 0x180018214 (-CompleteHide@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?StartNotificationCenterShowTest@CActionCenterExperienceManager@@AEAAXW4InvokeMethod@NotificationCenterUITelemetry@@W4InputType@3@@Z @ 0x180040204 (-StartNotificationCenterShowTest@CActionCenterExperienceManager@@AEAAXW4InvokeMethod@Notificatio.c)
 *     ?CompleteHide@CControlCenterExperienceManager@@AEAAJXZ @ 0x18041E478 (-CompleteHide@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?ShowExperience@CControlCenterExperienceManager@@AEAAJXZ @ 0x1804236E4 (-ShowExperience@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?StartControlCenterShowTest@CControlCenterExperienceManager@@AEAAXW4InvokeMethod@ControlCenterUITelemetry@@W4InputType@3@@Z @ 0x180424000 (-StartControlCenterShowTest@CControlCenterExperienceManager@@AEAAXW4InvokeMethod@ControlCenterUI.c)
 *     ?ContinueSwipe@TouchGestureProcessor@@QEAAXAEBUPoint@Foundation@Windows@winrt@@0@Z @ 0x18064FE44 (-ContinueSwipe@TouchGestureProcessor@@QEAAXAEBUPoint@Foundation@Windows@winrt@@0@Z.c)
 *     ?FinishPreviousGestureIfNeeded@TouchGestureProcessor@@AEAAXAEBU?$com_ptr@UITouchSwipe@@@winrt@@@Z @ 0x180650060 (-FinishPreviousGestureIfNeeded@TouchGestureProcessor@@AEAAXAEBU-$com_ptr@UITouchSwipe@@@winrt@@@.c)
 *     ?FinishSwipe@TouchGestureProcessor@@QEAAXAEBUPoint@Foundation@Windows@winrt@@@Z @ 0x1806501E0 (-FinishSwipe@TouchGestureProcessor@@QEAAXAEBUPoint@Foundation@Windows@winrt@@@Z.c)
 *     ?HandleRecognizerException@TouchGestureProcessor@@AEAAXXZ @ 0x1806507DC (-HandleRecognizerException@TouchGestureProcessor@@AEAAXXZ.c)
 *     ?PointersDown@TouchGestureProcessor@@QEAAXI@Z @ 0x180650E00 (-PointersDown@TouchGestureProcessor@@QEAAXI@Z.c)
 *     ?PointersUp@TouchGestureProcessor@@QEAAXXZ @ 0x18065128C (-PointersUp@TouchGestureProcessor@@QEAAXXZ.c)
 *     ?ProcessUpEvent@PointerEventsDetector@TouchGestureProcessor@@QEAAXAEBUPointerPoint@Input@UI@Windows@winrt@@@Z @ 0x180651638 (-ProcessUpEvent@PointerEventsDetector@TouchGestureProcessor@@QEAAXAEBUPointerPoint@Input@UI@Wind.c)
 *     ?StartSwipe@TouchGestureProcessor@@QEAAXIAEBUPoint@Foundation@Windows@winrt@@@Z @ 0x180651D0C (-StartSwipe@TouchGestureProcessor@@QEAAXIAEBUPoint@Foundation@Windows@winrt@@@Z.c)
 *     ?RestoreRemoteSystemsDataAndNotifyOnRemote@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@AEBV?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@Z @ 0x180718430 (-RestoreRemoteSystemsDataAndNotifyOnRemote@RemoteSystemDataModel@factory_implementation@Shell@In.c)
 *     ?DeactivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUguid@6@@Z @ 0x180721258 (-DeactivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?Execute@SwitchDisconnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x180731930 (-Execute@SwitchDisconnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV-$shared_.c)
 * Callees:
 *     ?is_running@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x18004039C (-is_running@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 */

bool __fastcall tip::tip_test<_tip_TouchGestureTest>::operator bool(__int64 *a1)
{
  __int64 v1; // rcx
  bool result; // al

  v1 = *a1;
  result = 0;
  if ( v1 )
    return tip::details::test_common_data<1>::is_running(v1 + 8);
  return result;
}
