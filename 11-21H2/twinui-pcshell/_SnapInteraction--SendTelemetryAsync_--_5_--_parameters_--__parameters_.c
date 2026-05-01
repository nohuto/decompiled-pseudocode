/*
 * XREFs of _SnapInteraction::SendTelemetryAsync_::_5_::_parameters_::__parameters_ @ 0x1805A05E8
 * Callers:
 *     _SnapInteraction::SendTelemetryAsync$_InitCoro$2_::_1_::dtor$1 @ 0x1801BEC1D (_SnapInteraction--SendTelemetryAsync$_InitCoro$2_--_1_--dtor$1.c)
 *     SnapInteraction::SendTelemetryAsync$_ResumeCoro$1 @ 0x1801BEC40 (SnapInteraction--SendTelemetryAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall SnapInteraction::SendTelemetryAsync_::_5_::_parameters_::__parameters_(__int64 *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<ISnapComponent>::unconditional_release_ref(a1);
  return result;
}
