/*
 * XREFs of _SnapFlyoutHost::StartXamlExplorerHostThread_::_1_::catch$13 @ 0x1805B0FEA
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180016F04 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?complete@?$tip_test@U_tip_DesktopTouchKeyboardShowOnTryShowV1@TouchKeyboardExperienceTip@@@tip@@QEAAXXZ @ 0x180045564 (-complete@-$tip_test@U_tip_DesktopTouchKeyboardShowOnTryShowV1@TouchKeyboardExperienceTip@@@tip@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180120A64 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x180120B54 (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18022A4B2 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?ensure_data@?$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_SnapFlyoutShowTest@@@details@tip@@@std@@XZ @ 0x1805B1964 (-ensure_data@-$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_data.c)
 */

__int64 __fastcall SnapFlyoutHost::StartXamlExplorerHostThread_::_1_::catch_13(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  _QWORD *v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  std::_Ref_count_base *v8; // rcx

  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 184),
    (void *)0x17A,
    (int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyouthost.cpp",
    a4);
  *(_DWORD *)(*(_QWORD *)(a2 + 96) + 136LL) = 0;
  v5 = (_QWORD *)tip::tip_test<_tip_SnapFlyoutShowTest>::ensure_data(*(_QWORD *)(a2 + 56));
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    (_QWORD *)(a2 + 64),
    v5);
  v6 = *(_QWORD *)(a2 + 64);
  tip::details::test_common_data<1>::begin_update(v6 + 8);
  if ( v6 )
    v7 = v6 + 144;
  else
    v7 = 0LL;
  *(_BYTE *)(v7 + 12) = 1;
  if ( v6 )
  {
    tip::details::test_common_data<1>::end_update(v6 + 8);
    std::shared_ptr<PeoplePaneViewInfo>::reset((_QWORD *)(a2 + 64));
  }
  v8 = *(std::_Ref_count_base **)(a2 + 72);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTryShowV1>::complete(*(__int64 **)(a2 + 56));
  return 0LL;
}
