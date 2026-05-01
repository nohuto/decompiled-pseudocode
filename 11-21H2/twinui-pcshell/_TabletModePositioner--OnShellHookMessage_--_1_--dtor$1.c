/*
 * XREFs of _TabletModePositioner::OnShellHookMessage_::_1_::dtor$1 @ 0x180505BBD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall TabletModePositioner::OnShellHookMessage_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<CGITCallbackArray>::~ComPtr<CGITCallbackArray>((_QWORD *)(a2 + 40));
}
