/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@VDeferralHolder@@@std@@EEAAXXZ @ 0x180174EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Ref_count_obj2<DeferralHolder>::_Destroy(__int64 a1)
{
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(a1 + 16));
}
