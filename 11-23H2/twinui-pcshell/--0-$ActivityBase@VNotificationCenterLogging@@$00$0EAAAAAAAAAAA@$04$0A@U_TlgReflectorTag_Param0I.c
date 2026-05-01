/*
 * XREFs of ??0?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18001AAB4
 * Callers:
 *     ?OnDismiss@CActionCenterExperienceManager@@UEAAJXZ @ 0x18001A980 (-OnDismiss@CActionCenterExperienceManager@@UEAAJXZ.c)
 *     ??$Start@AEAW4InvokeMethod@NotificationCenterUITelemetry@@AEAW4InputType@2@W4StateOnInvoke@2@@LaunchActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SA?AV012@AEAW4InvokeMethod@2@AEAW4InputType@2@$$QEAW4StateOnInvoke@2@@Z @ 0x18001AA4C (--$Start@AEAW4InvokeMethod@NotificationCenterUITelemetry@@AEAW4InputType@2@W4StateOnInvoke@2@@La.c)
 *     ??$Start@W4DismissMethod@NotificationCenterUITelemetry@@AEAW4InputType@2@@DismissActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SA?AV012@$$QEAW4DismissMethod@2@AEAW4InputType@2@@Z @ 0x1804140AC (--$Start@W4DismissMethod@NotificationCenterUITelemetry@@AEAW4InputType@2@@DismissActionCenter@No.c)
 *     ?StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z @ 0x180419B80 (-StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z.c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800C8EDC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

struct wil::details::IFailureCallback *__fastcall wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
        struct wil::details::IFailureCallback *a1,
        __int64 a2)
{
  *(_QWORD *)a1 = &wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 8),
    a1,
    (struct wil::details::IFailureCallback *)((char *)a1 + 96),
    0);
  *((_QWORD *)a1 + 6) = (char *)a1 + 56;
  *((_DWORD *)a1 + 14) = 0;
  *((_DWORD *)a1 + 24) = 0;
  *((_QWORD *)a1 + 14) = 0LL;
  *((_DWORD *)a1 + 33) = 0;
  *((_BYTE *)a1 + 60) = 0;
  *((_BYTE *)a1 + 120) = 0;
  *((_QWORD *)a1 + 13) = a2;
  *((_DWORD *)a1 + 32) = 1;
  *((_QWORD *)a1 + 36) = 0LL;
  *((_QWORD *)a1 + 37) = 0LL;
  memset_0((char *)a1 + 136, 0, 0x98uLL);
  *((_QWORD *)a1 + 38) = 0LL;
  *((_QWORD *)a1 + 39) = 0LL;
  return a1;
}
