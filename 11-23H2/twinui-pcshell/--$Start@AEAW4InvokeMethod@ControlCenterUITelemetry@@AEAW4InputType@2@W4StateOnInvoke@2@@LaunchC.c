/*
 * XREFs of ??$Start@AEAW4InvokeMethod@ControlCenterUITelemetry@@AEAW4InputType@2@W4StateOnInvoke@2@@LaunchControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@SA?AV012@AEAW4InvokeMethod@2@AEAW4InputType@2@$$QEAW4StateOnInvoke@2@@Z @ 0x18041C76C
 * Callers:
 *     CControlCenterExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x1801DFD20 (CControlCenterExperienceManager--ShowRequested$_ResumeCoro$1.c)
 * Callees:
 *     ??0?$ActivityBase@VControlCenterLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18041D750 (--0-$ActivityBase@VControlCenterLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0.c)
 *     ?StartActivity@LaunchControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXW4InvokeMethod@3@W4InputType@3@W4StateOnInvoke@3@@Z @ 0x180423EFC (-StartActivity@LaunchControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXW4Inv.c)
 */

struct wil::details::IFailureCallback *__fastcall ControlCenterUITelemetry::ControlCenterTelemetry::LaunchControlCenterV1::Start<enum ControlCenterUITelemetry::InvokeMethod &,enum ControlCenterUITelemetry::InputType &,enum ControlCenterUITelemetry::StateOnInvoke>(
        struct wil::details::IFailureCallback *a1,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int *a4)
{
  wil::ActivityBase<ControlCenterLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ControlCenterLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>(a1);
  *(_QWORD *)a1 = &ControlCenterUITelemetry::ControlCenterTelemetry::LaunchControlCenterV1::`vftable';
  ControlCenterUITelemetry::ControlCenterTelemetry::LaunchControlCenterV1::StartActivity(a1, *a2, *a3, *a4);
  return a1;
}
