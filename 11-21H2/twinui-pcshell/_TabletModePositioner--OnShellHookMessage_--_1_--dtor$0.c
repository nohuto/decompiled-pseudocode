/*
 * XREFs of _TabletModePositioner::OnShellHookMessage_::_1_::dtor$0 @ 0x180505BB1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TabletModePositioner::OnShellHookMessage_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>((__int64 *)(a2 + 32));
}
