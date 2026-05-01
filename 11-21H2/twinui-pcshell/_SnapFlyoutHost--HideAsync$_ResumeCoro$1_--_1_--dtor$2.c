/*
 * XREFs of _SnapFlyoutHost::HideAsync$_ResumeCoro$1_::_1_::dtor$2 @ 0x1801C0514
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$tip_test@U_tip_SearchHideTest@@@tip@@QEAA@XZ @ 0x18019BD78 (--1-$tip_test@U_tip_SearchHideTest@@@tip@@QEAA@XZ.c)
 */

void __fastcall SnapFlyoutHost::HideAsync__ResumeCoro_1_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 72) = *(_QWORD *)(a2 + 112) + 56LL;
  tip::tip_test<_tip_SearchHideTest>::~tip_test<_tip_SearchHideTest>(*(_QWORD *)(a2 + 72));
}
