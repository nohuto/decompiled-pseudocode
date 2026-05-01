/*
 * XREFs of _FullScreenPositioner::ControlLost_::_1_::dtor$0 @ 0x18031F1C1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FullScreenPositioner::ControlLost_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>((__int64 *)(a2 + 64));
}
