/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_f445b1b04a1e911cb28a3e84927aae7d_@@CA@XZ @ 0x1800464D0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GMobilityExperienceLogging@Telemetry@MobilityExperience@@UEAAPEAXI@Z @ 0x18002F240 (--_GMobilityExperienceLogging@Telemetry@MobilityExperience@@UEAAPEAXI@Z.c)
 */

void __fastcall _lambda_f445b1b04a1e911cb28a3e84927aae7d_::_lambda_invoker_cdecl_()
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( InitOnceBeginInitialize(
         &`ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::Instance'::`2'::wrapper,
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
