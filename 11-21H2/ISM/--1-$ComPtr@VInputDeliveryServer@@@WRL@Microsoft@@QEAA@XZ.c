/*
 * XREFs of ??1?$ComPtr@VInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ @ 0x180153138
 * Callers:
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$15 @ 0x1800570D9 (_DWMInputRouter--DWMInputRouter_--_1_--dtor$15.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<InputDeliveryServer>::~ComPtr<InputDeliveryServer>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<InputDeliveryServer>::InternalRelease(a1);
}
