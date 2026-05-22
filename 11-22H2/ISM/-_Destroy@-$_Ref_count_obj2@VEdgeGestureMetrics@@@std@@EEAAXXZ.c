/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@VEdgeGestureMetrics@@@std@@EEAAXXZ @ 0x1801D8410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Ref_count_obj2<EdgeGestureMetrics>::_Destroy(__int64 a1)
{
  return Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)(a1 + 16));
}
