/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_41dc59efcb7f6863bfbeda390f55e438_@@CA@XZ @ 0x180046440
 * Callers:
 *     <none>
 * Callees:
 *     ??_GMobilityExperienceLogging@Telemetry@MobilityExperience@@UEAAPEAXI@Z @ 0x18002F240 (--_GMobilityExperienceLogging@Telemetry@MobilityExperience@@UEAAPEAXI@Z.c)
 */

unsigned int _lambda_41dc59efcb7f6863bfbeda390f55e438_::_lambda_invoker_cdecl_(void)
{
  unsigned int result; // eax
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  result = InitOnceBeginInitialize(
             &`ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Instance'::`2'::wrapper,
             1u,
             &fPending,
             &Context);
  if ( result )
  {
    if ( !fPending )
      return (unsigned int)MobilityExperience::Telemetry::MobilityExperienceLogging::`scalar deleting destructor'(
                             (MobilityExperience::Telemetry::MobilityExperienceLogging *)Context,
                             0);
  }
  return result;
}
