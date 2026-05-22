/*
 * XREFs of ??1?$ComPtr@VInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ @ 0x180180768
 * Callers:
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$16 @ 0x1800832EE (_DWMInputRouter--DWMInputRouter_--_1_--dtor$16.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<InputDeliveryServer>::~ComPtr<InputDeliveryServer>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<InputDeliveryServer>::InternalRelease(a1);
}
