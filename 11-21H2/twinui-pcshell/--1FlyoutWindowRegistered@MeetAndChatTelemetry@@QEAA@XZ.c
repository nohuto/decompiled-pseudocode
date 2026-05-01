/*
 * XREFs of ??1FlyoutWindowRegistered@MeetAndChatTelemetry@@QEAA@XZ @ 0x1805D2400
 * Callers:
 *     ??0WindowRegistration@@QEAA@PEAUHWND__@@AEBVCorrelationVector@@@Z @ 0x1805D22A4 (--0WindowRegistration@@QEAA@PEAUHWND__@@AEBVCorrelationVector@@@Z.c)
 *     _WindowRegistration::WindowRegistration_::_1_::dtor$2 @ 0x1805D23EB (_WindowRegistration--WindowRegistration_--_1_--dtor$2.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1805C0E68 (-Destroy@-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflec.c)
 */

void __fastcall MeetAndChatTelemetry::FlyoutWindowRegistered::~FlyoutWindowRegistered(
        MeetAndChatTelemetry::FlyoutWindowRegistered *this)
{
  *(_QWORD *)this = &MeetAndChatTelemetry::FlyoutWindowRegistered::`vftable';
  wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
