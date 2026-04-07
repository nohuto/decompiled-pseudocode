/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_7c6f95392d1fa211f578d6d8eb47d107_@@CAXXZ @ 0x180109A30
 * Callers:
 *     <none>
 * Callees:
 *     InitOnceBeginInitialize_0 @ 0x18006108A (InitOnceBeginInitialize_0.c)
 *     ??_GCScalingCompatTelemetry@ScalingCompatTelemetry@@UEAAPEAXI@Z @ 0x180109CA0 (--_GCScalingCompatTelemetry@ScalingCompatTelemetry@@UEAAPEAXI@Z.c)
 */

void __fastcall _lambda_7c6f95392d1fa211f578d6d8eb47d107_::_lambda_invoker_cdecl_()
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( InitOnceBeginInitialize_0(
         &`ScalingCompatTelemetry::CScalingCompatTelemetry::Instance'::`2'::wrapper,
         1u,
         &fPending,
         &Context) )
  {
    if ( !fPending )
      ScalingCompatTelemetry::CScalingCompatTelemetry::`scalar deleting destructor'(
        (ScalingCompatTelemetry::CScalingCompatTelemetry *)Context,
        0);
  }
}
