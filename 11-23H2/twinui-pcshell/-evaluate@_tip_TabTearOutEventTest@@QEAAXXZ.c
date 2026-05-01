/*
 * XREFs of ?evaluate@_tip_TabTearOutEventTest@@QEAAXXZ @ 0x18066E650
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@EEAAXXZ @ 0x1802241C0 (-evaluate@-$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 *     ?__fail_if_complete_not_called@?$test_data_base@U_tip_GuidedSnapAssistTest_id@@@tip2@@IEBA_NXZ @ 0x180201550 (-__fail_if_complete_not_called@-$test_data_base@U_tip_GuidedSnapAssistTest_id@@@tip2@@IEBA_NXZ.c)
 *     ?__succeed@?$test_data_base@U_tip_ColumnSmartFillTest_id@@@tip2@@IEBAXXZ @ 0x180201660 (-__succeed@-$test_data_base@U_tip_ColumnSmartFillTest_id@@@tip2@@IEBAXXZ.c)
 */

void __fastcall _tip_TabTearOutEventTest::evaluate(_tip_TabTearOutEventTest *this, const char *a2)
{
  const char *v2; // rax
  __int64 v3; // r9
  __int64 v4; // rcx
  int v5; // eax
  const char *v6; // rax
  __int64 v7; // r9
  __int16 v8; // dx
  __int64 v9; // r9

  if ( *((_BYTE *)this + 16) )
  {
    v2 = tip::details::reason_string((tip::details *)"reason::snap_assist_cancelled", a2);
    v4 = *(_QWORD *)(v3 + 8);
    if ( !*(_BYTE *)(v4 + 152) )
    {
      *(_BYTE *)(v4 + 152) = 4;
      *(_WORD *)(v4 + 154) = 3;
      *(_QWORD *)(v4 + 160) = v2;
    }
    return;
  }
  v5 = *((_DWORD *)this + 5);
  if ( !v5 )
  {
    v6 = tip::details::reason_string((tip::details *)"reason::start_snap_region_not_initialized", a2);
    v8 = 1;
LABEL_6:
    tip2::test_data_base<_tip_TabTearOutEventTest_id>::__fail<enum _tip_TabTearOutEventTest::reason>(
      v7,
      v8,
      (__int64)v6);
    return;
  }
  if ( v5 != *((_DWORD *)this + 6) )
  {
    v6 = tip::details::reason_string((tip::details *)"reason::mismatched_snap_regions", a2);
    v8 = 2;
    goto LABEL_6;
  }
  if ( !tip2::test_data_base<_tip_GuidedSnapAssistTest_id>::__fail_if_complete_not_called((__int64)this) )
    tip2::test_data_base<_tip_ColumnSmartFillTest_id>::__succeed(v9);
}
