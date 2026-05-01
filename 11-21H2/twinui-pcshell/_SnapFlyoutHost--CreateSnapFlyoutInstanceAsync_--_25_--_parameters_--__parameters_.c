/*
 * XREFs of _SnapFlyoutHost::CreateSnapFlyoutInstanceAsync_::_25_::_parameters_::__parameters_ @ 0x1805AE774
 * Callers:
 *     _SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_InitCoro$2_::_1_::dtor$1 @ 0x1801BEFAF (_SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_InitCoro$2_--_1_--dtor$1.c)
 *     SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1 @ 0x1801BEFD0 (SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall SnapFlyoutHost::CreateSnapFlyoutInstanceAsync_::_25_::_parameters_::__parameters_(__int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 40);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
