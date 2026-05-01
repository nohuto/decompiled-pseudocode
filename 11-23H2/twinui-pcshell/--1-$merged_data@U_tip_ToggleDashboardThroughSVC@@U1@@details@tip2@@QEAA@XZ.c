/*
 * XREFs of ??1?$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@QEAA@XZ @ 0x180235498
 * Callers:
 *     ?Release@?$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@AEAAKXZ @ 0x180241118 (-Release@-$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@AEAAKXZ.c)
 * Callees:
 *     ?on_destroy@?$shared_data@$00$0A@$0A@@details@tip2@@IEAAXXZ @ 0x1801F0F90 (-on_destroy@-$shared_data@$00$0A@$0A@@details@tip2@@IEAAXXZ.c)
 *     ??1_tip_ToggleDashboardThroughSVC@@QEAA@XZ @ 0x180695328 (--1_tip_ToggleDashboardThroughSVC@@QEAA@XZ.c)
 */

void __fastcall tip2::details::merged_data<_tip_ToggleDashboardThroughSVC,_tip_ToggleDashboardThroughSVC>::~merged_data<_tip_ToggleDashboardThroughSVC,_tip_ToggleDashboardThroughSVC>(
        _QWORD *a1)
{
  *a1 = &tip2::details::merged_data<_tip_ToggleDashboardThroughSVC,_tip_ToggleDashboardThroughSVC>::`vftable';
  tip2::details::shared_data<1,0,0>::on_destroy((__int64)(a1 + 1));
  _tip_ToggleDashboardThroughSVC::~_tip_ToggleDashboardThroughSVC((_tip_ToggleDashboardThroughSVC *)(a1 + 31));
  tip2::details::shared_data<0,0,1>::~shared_data<0,0,1>((__int64)(a1 + 1));
}
