/*
 * XREFs of ?evaluate@_tip_GuidedSnapAssistTest@@QEAAXXZ @ 0x18066E4BC
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@EEAAXXZ @ 0x1802241A0 (-evaluate@-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180192FD4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@.c)
 *     ?__fail_if_complete_not_called@?$test_data_base@U_tip_GuidedSnapAssistTest_id@@@tip2@@IEBA_NXZ @ 0x180201550 (-__fail_if_complete_not_called@-$test_data_base@U_tip_GuidedSnapAssistTest_id@@@tip2@@IEBA_NXZ.c)
 *     ??$__fail@W4reason@_tip_GuidedSnapAssistTest@@@?$test_data_base@U_tip_GuidedSnapAssistTest_id@@@tip2@@IEBAXW4reason@_tip_GuidedSnapAssistTest@@PEBD@Z @ 0x180223600 (--$__fail@W4reason@_tip_GuidedSnapAssistTest@@@-$test_data_base@U_tip_GuidedSnapAssistTest_id@@@.c)
 */

void __fastcall _tip_GuidedSnapAssistTest::evaluate(_tip_GuidedSnapAssistTest *this)
{
  __int64 v1; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  const char *v5; // rdx
  char v6; // al
  const char *v7; // rax
  __int16 v8; // dx
  const char *v9; // rax
  __int16 v10; // dx
  char v11; // cl
  int v12; // eax

  v1 = *((_QWORD *)this + 1);
  if ( !*(_QWORD *)(v1 + 80) )
  {
    if ( tip2::test_data_base<_tip_GuidedSnapAssistTest_id>::__fail_if_complete_not_called((__int64)this) )
      return;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
      1u,
      v3,
      v4);
    v6 = *((_BYTE *)this + 35);
    if ( *((_BYTE *)this + 34) )
    {
      if ( v6 )
      {
        v7 = tip::details::reason_string((tip::details *)"reason::snap_assist_invoked_with_no_empty_regions", v5);
        v8 = 10;
LABEL_28:
        tip2::test_data_base<_tip_GuidedSnapAssistTest_id>::__fail<enum _tip_GuidedSnapAssistTest::reason>(
          (__int64)this,
          v8,
          (__int64)v7);
        return;
      }
    }
    else if ( v6 )
    {
      v9 = tip::details::reason_string((tip::details *)"reason::snap_assist_skipped_no_empty_regions", v5);
      v10 = 9;
      goto LABEL_10;
    }
    if ( *((_BYTE *)this + 33) )
    {
      v9 = tip::details::reason_string((tip::details *)"reason::snap_assist_dismissed_while_showing_new_view", v5);
      v10 = 8;
    }
    else if ( *((_BYTE *)this + 30) )
    {
      v9 = tip::details::reason_string((tip::details *)"reason::snapping_refused", v5);
      v10 = 4;
    }
    else if ( *((_BYTE *)this + 28) )
    {
      v9 = tip::details::reason_string((tip::details *)"reason::snap_assist_blocked", v5);
      v10 = 1;
    }
    else if ( *((_BYTE *)this + 32) )
    {
      v9 = tip::details::reason_string((tip::details *)"reason::snap_assist_occluded", v5);
      v10 = 7;
    }
    else
    {
      v11 = *((_BYTE *)this + 31);
      if ( v11 || !*((_BYTE *)this + 29) )
      {
        v12 = *((_DWORD *)this + 6);
        if ( v12 == *((_DWORD *)this + 4) )
        {
          v9 = tip::details::reason_string((tip::details *)"reason::filled_all_regions", v5);
          v10 = 5;
        }
        else
        {
          if ( *((_DWORD *)this + 4) != v12 + 1 || !v11 )
          {
            v7 = tip::details::reason_string((tip::details *)"reason::snap_assist_incomplete", v5);
            v8 = 3;
            goto LABEL_28;
          }
          v9 = tip::details::reason_string((tip::details *)"reason::last_region_pending", v5);
          v10 = 6;
        }
      }
      else
      {
        v9 = tip::details::reason_string((tip::details *)"reason::snap_assist_dismissed", v5);
        v10 = 2;
      }
    }
LABEL_10:
    tip2::test_data_base<_tip_GuidedSnapAssistTest_id>::__succeed<enum _tip_GuidedSnapAssistTest::reason>(
      (__int64)this,
      v10,
      (__int64)v9);
    return;
  }
  if ( !*(_BYTE *)(v1 + 152) )
  {
    *(_QWORD *)(v1 + 160) = 0LL;
    *(_WORD *)(v1 + 154) = 0x4000;
    *(_BYTE *)(v1 + 152) = 3;
  }
}
