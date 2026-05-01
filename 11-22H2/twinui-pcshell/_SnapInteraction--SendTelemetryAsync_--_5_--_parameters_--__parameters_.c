/*
 * XREFs of _SnapInteraction::SendTelemetryAsync_::_5_::_parameters_::__parameters_ @ 0x18066F9A4
 * Callers:
 *     _SnapInteraction::SendTelemetryAsync$_InitCoro$2_::_1_::dtor$1 @ 0x1802244ED (_SnapInteraction--SendTelemetryAsync$_InitCoro$2_--_1_--dtor$1.c)
 *     SnapInteraction::SendTelemetryAsync$_ResumeCoro$1 @ 0x180224510 (SnapInteraction--SendTelemetryAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall SnapInteraction::SendTelemetryAsync_::_5_::_parameters_::__parameters_(__int64 *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<ISnapComponent>::unconditional_release_ref(a1);
  return result;
}
