/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_8df9595ef2b54e9d87dd50e21e23ed4b_@@CA@XZ @ 0x180024010
 * Callers:
 *     <none>
 * Callees:
 *     ??_GMobilityExperienceLogging@Telemetry@MobilityExperience@@UEAAPEAXI@Z @ 0x18002F240 (--_GMobilityExperienceLogging@Telemetry@MobilityExperience@@UEAAPEAXI@Z.c)
 */

void __fastcall _lambda_8df9595ef2b54e9d87dd50e21e23ed4b_::_lambda_invoker_cdecl_()
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( InitOnceBeginInitialize(
         &`TaskbarContentDeliveryPinningTelemetry::Instance'::`2'::wrapper,
         1u,
         &fPending,
         &Context) )
  {
    if ( !fPending )
      MobilityExperience::Telemetry::MobilityExperienceLogging::`scalar deleting destructor'(
        (MobilityExperience::Telemetry::MobilityExperienceLogging *)Context,
        0);
  }
}
