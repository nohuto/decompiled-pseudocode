/*
 * XREFs of ??$Start@W4DismissMethod@ControlCenterUITelemetry@@AEAW4InputType@2@@DismissControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@SA?AV012@$$QEAW4DismissMethod@2@AEAW4InputType@2@@Z @ 0x180352824
 * Callers:
 *     CControlCenterExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x180194C00 (CControlCenterExperienceManager--DismissRequested$_ResumeCoro$1.c)
 * Callees:
 *     ??0?$ActivityBase@VControlCenterLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18035307C (--0-$ActivityBase@VControlCenterLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0.c)
 *     ?StartActivity@DismissControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXW4DismissMethod@3@W4InputType@3@@Z @ 0x18035480C (-StartActivity@DismissControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXW4Di.c)
 */

struct wil::details::IFailureCallback *__fastcall ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1::Start<enum ControlCenterUITelemetry::DismissMethod,enum ControlCenterUITelemetry::InputType &>(
        struct wil::details::IFailureCallback *a1,
        unsigned int *a2)
{
  wil::ActivityBase<ControlCenterLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ControlCenterLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>(a1);
  *(_QWORD *)a1 = &ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1::`vftable';
  ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1::StartActivity(a1, *a2);
  return a1;
}
