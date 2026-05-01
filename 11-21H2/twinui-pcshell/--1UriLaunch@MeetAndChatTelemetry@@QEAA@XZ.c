/*
 * XREFs of ??1UriLaunch@MeetAndChatTelemetry@@QEAA@XZ @ 0x1805D03BC
 * Callers:
 *     ?LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z @ 0x1801D3374 (-LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z.c)
 *     _Utils::ProtocolLauncher::LaunchUriWithCv_::_1_::dtor$1 @ 0x1801D353F (_Utils--ProtocolLauncher--LaunchUriWithCv_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801D328C (-Destroy@-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflec.c)
 */

void __fastcall MeetAndChatTelemetry::UriLaunch::~UriLaunch(MeetAndChatTelemetry::UriLaunch *this)
{
  *(_QWORD *)this = &MeetAndChatTelemetry::UriLaunch::`vftable';
  wil::ActivityBase<MeetAndChatTelemetryLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<MeetAndChatTelemetryLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<MeetAndChatTelemetryLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
