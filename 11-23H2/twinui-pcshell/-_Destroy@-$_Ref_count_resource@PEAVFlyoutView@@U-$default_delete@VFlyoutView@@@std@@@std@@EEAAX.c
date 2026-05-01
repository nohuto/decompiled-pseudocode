/*
 * XREFs of ?_Destroy@?$_Ref_count_resource@PEAVFlyoutView@@U?$default_delete@VFlyoutView@@@std@@@std@@EEAAXXZ @ 0x1806C1020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::_Ref_count_resource<FlyoutView *,std::default_delete<FlyoutView>>::_Destroy(__int64 a1)
{
  operator delete(*(void **)(a1 + 16));
}
