/*
 * XREFs of ??1UriLaunch@MeetAndChatTelemetry@@QEAA@XZ @ 0x1806C2048
 * Callers:
 *     ?LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z @ 0x1806C2684 (-LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z.c)
 *     _Utils::ProtocolLauncher::LaunchUriWithCv_::_1_::dtor$1 @ 0x1806C28AD (_Utils--ProtocolLauncher--LaunchUriWithCv_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1806C20B4 (-Destroy@-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflec.c)
 */

void __fastcall MeetAndChatTelemetry::UriLaunch::~UriLaunch(MeetAndChatTelemetry::UriLaunch *this)
{
  *(_QWORD *)this = &MeetAndChatTelemetry::UriLaunch::`vftable';
  wil::ActivityBase<MeetAndChatTelemetryLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<MeetAndChatTelemetryLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<MeetAndChatTelemetryLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
