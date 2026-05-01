/*
 * XREFs of ??$StopWithResult@_NAEAU?$atomic@_N@std@@@InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAAXJ$$QEA_NAEAU?$atomic@_N@std@@@Z @ 0x1801AF040
 * Callers:
 *     _lambda_5bca6f87553ee4a307de3070de971dc8_::operator() @ 0x1801B0020 (_lambda_5bca6f87553ee4a307de3070de971dc8_--operator().c)
 * Callees:
 *     ?SetStopResult@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXJPEAJ@Z @ 0x180464AB4 (-SetStopResult@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAA.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::InputAppActivation::StopWithResult<bool,std::atomic<bool> &>(
        TouchKeyboardExperienceTelemetryLogger::InputAppActivation *this,
        __int64 a2,
        bool *a3,
        bool *a4)
{
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::SetStopResult();
  TouchKeyboardExperienceTelemetryLogger::InputAppActivation::Stop(this, *a3, *a4);
}
