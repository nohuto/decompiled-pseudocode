/*
 * XREFs of _SnapInteraction::SendTelemetryAsync_::_5_::_parameters_::_parameters_ @ 0x18066F988
 * Callers:
 *     SnapInteraction::SendTelemetryAsync$_InitCoro$2 @ 0x18022441C (SnapInteraction--SendTelemetryAsync$_InitCoro$2.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall SnapInteraction::SendTelemetryAsync_::_5_::_parameters_::_parameters_(
        _QWORD *a1,
        __int64 *a2,
        _QWORD *a3)
{
  __int64 v3; // rax

  v3 = *a2;
  *a2 = 0LL;
  *a1 = v3;
  a1[1] = *a3;
  return a1;
}
