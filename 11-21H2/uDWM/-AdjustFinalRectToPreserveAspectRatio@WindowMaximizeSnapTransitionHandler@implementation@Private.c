/*
 * XREFs of ?AdjustFinalRectToPreserveAspectRatio@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAA?AURect@Foundation@Windows@6@AEBU7896@0@Z @ 0x1800086AC
 * Callers:
 *     ?PostTransition@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18003EF80 (-PostTransition@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winr.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18010B248 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

_OWORD *__fastcall winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler::AdjustFinalRectToPreserveAspectRatio(
        __int64 a1,
        _OWORD *a2,
        __int64 a3,
        float *a4)
{
  float v6; // xmm2_4
  float v7; // xmm3_4
  __int128 v9; // [rsp+20h] [rbp-18h]

  if ( COERCE_FLOAT(*(_DWORD *)(a3 + 12) & _xmm) < 0.001 || (v6 = a4[3], COERCE_FLOAT(LODWORD(v6) & _xmm) < 0.001) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgs();
    *a2 = *(_OWORD *)a4;
  }
  else
  {
    v7 = *(float *)(a3 + 8) / *(float *)(a3 + 12);
    v9 = *(_OWORD *)a4;
    if ( (float)(a4[2] / v6) <= v7 )
      *((float *)&v9 + 2) = *((float *)&v9 + 2) + (float)((float)(v6 * v7) - a4[2]);
    else
      *((float *)&v9 + 3) = *((float *)&v9 + 3) + (float)((float)((float)(1.0 / v7) * a4[2]) - v6);
    *a2 = v9;
  }
  return a2;
}
