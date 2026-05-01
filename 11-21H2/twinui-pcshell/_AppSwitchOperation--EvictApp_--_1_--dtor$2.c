/*
 * XREFs of _AppSwitchOperation::EvictApp_::_1_::dtor$2 @ 0x18050F13A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AppSwitchOperation::EvictApp_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>((__int64 *)(a2 + 128));
}
