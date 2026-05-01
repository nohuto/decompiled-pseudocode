/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@VDeferralHolder@@@std@@EEAAXXZ @ 0x1801BE7F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Ref_count_obj2<DeferralHolder>::_Destroy(__int64 a1)
{
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(a1 + 16));
}
