/*
 * XREFs of _AppSwitchOperation::QuerySwitchToApp_::_1_::dtor$1 @ 0x18050FE3E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AppSwitchOperation::QuerySwitchToApp_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>((__int64 *)(a2 + 48));
}
