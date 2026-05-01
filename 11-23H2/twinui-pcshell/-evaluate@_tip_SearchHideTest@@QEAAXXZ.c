/*
 * XREFs of ?evaluate@_tip_SearchHideTest@@QEAAXXZ @ 0x180058934
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@EEAAXXZ @ 0x180058920 (-evaluate@-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_54322664@@@details@wil@@QEAA_NXZ @ 0x1801F04D8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_54322664@@@details@wil@@QEAA_NXZ.c)
 *     ??$__warn@W4Reason@_tip_SearchHideTest@@@?$test_data_base@U_tip_SearchHideTest_id@@@tip2@@IEBAXW4Reason@_tip_SearchHideTest@@PEBD@Z @ 0x180462B34 (--$__warn@W4Reason@_tip_SearchHideTest@@@-$test_data_base@U_tip_SearchHideTest_id@@@tip2@@IEBAXW.c)
 */

void __fastcall _tip_SearchHideTest::evaluate(_tip_SearchHideTest *this, const char *a2)
{
  const char *v3; // rax
  __int64 v4; // rcx
  __int16 v5; // dx
  const char *v6; // rdx
  unsigned int v7; // eax
  int v8; // ecx
  __int64 v9; // rax
  __int16 v10; // cx
  const char *v11; // rax
  __int64 v12; // rdx

  if ( *((_BYTE *)this + 21) )
  {
    v3 = tip::details::reason_string((tip::details *)"Reason::activated_while_hiding", a2);
    v4 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v4 + 152) )
      return;
    v5 = 1;
    goto LABEL_4;
  }
  if ( *((_BYTE *)this + 22) )
  {
    v3 = tip::details::reason_string((tip::details *)"Reason::view_destroyed", a2);
    v4 = *((_QWORD *)this + 1);
    if ( !*(_BYTE *)(v4 + 152) )
    {
      v5 = 7;
LABEL_4:
      *(_BYTE *)(v4 + 152) = 4;
LABEL_5:
      *(_WORD *)(v4 + 154) = v5;
      *(_QWORD *)(v4 + 160) = v3;
      return;
    }
    return;
  }
  if ( !*((_BYTE *)this + 24) )
  {
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_54322664>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_54322664>::GetImpl'::`2'::impl)
      && !*((_BYTE *)this + 18) )
    {
      v3 = tip::details::reason_string((tip::details *)"Reason::app_not_suspended", v6);
      v4 = *((_QWORD *)this + 1);
      if ( !*(_BYTE *)(v4 + 152) )
      {
        *(_BYTE *)(v4 + 152) = 3;
        v5 = 6;
        goto LABEL_5;
      }
      return;
    }
    if ( !*((_BYTE *)this + 17) )
    {
      v3 = tip::details::reason_string((tip::details *)"Reason::view_not_cloaked", v6);
      v4 = *((_QWORD *)this + 1);
      if ( !*(_BYTE *)(v4 + 152) )
      {
        *(_BYTE *)(v4 + 152) = 3;
        v5 = 5;
        goto LABEL_5;
      }
      return;
    }
    v7 = *((_DWORD *)this + 7);
    if ( v7 <= 0xB )
    {
      v8 = 3665;
      if ( _bittest(&v8, v7) )
      {
        v3 = tip::details::reason_string((tip::details *)"Reason::unexpected_initial_state", v6);
        v4 = *((_QWORD *)this + 1);
        if ( !*(_BYTE *)(v4 + 152) )
        {
          *(_BYTE *)(v4 + 152) = 3;
          v5 = 9;
          goto LABEL_5;
        }
        return;
      }
    }
    v9 = *((_QWORD *)this + 1);
    if ( (*(_DWORD *)(v9 + 56) & 0x200) == 0 )
    {
      if ( *(_BYTE *)(v9 + 152) )
        return;
      *(_BYTE *)(v9 + 152) = 3;
      v10 = 16385;
LABEL_45:
      *(_QWORD *)(v9 + 160) = 0LL;
      *(_WORD *)(v9 + 154) = v10;
      return;
    }
    if ( *((_DWORD *)this + 8) == 11 )
    {
      if ( *((_DWORD *)this + 9) == 10 )
      {
        if ( *((_DWORD *)this + 10) == 10 )
        {
          if ( *((_BYTE *)this + 44) )
          {
            v11 = tip::details::reason_string((tip::details *)"Reason::view_visible_during_suspension", v6);
            v12 = 13LL;
          }
          else if ( *((_BYTE *)this + 45) )
          {
            v11 = tip::details::reason_string((tip::details *)"Reason::navigation_level_active_during_suspension", v6);
            v12 = 14LL;
          }
          else if ( *((_BYTE *)this + 19) )
          {
            v11 = tip::details::reason_string((tip::details *)"Reason::hide_view_timer_expired", v6);
            v12 = 2LL;
          }
          else if ( *((_BYTE *)this + 23) )
          {
            v11 = tip::details::reason_string((tip::details *)"Reason::view_visibility_revoked", v6);
            v12 = 16LL;
          }
          else
          {
            if ( !*((_BYTE *)this + 20) )
            {
              if ( *(_BYTE *)(v9 + 152) )
                return;
              v10 = 0x8000;
              *(_BYTE *)(v9 + 152) = 1;
              goto LABEL_45;
            }
            v11 = tip::details::reason_string((tip::details *)"Reason::suspend_timer_expired", v6);
            v12 = 3LL;
          }
        }
        else
        {
          v11 = tip::details::reason_string(
                  (tip::details *)"Reason::unexpected_state_during_last_resort_suspension_timer",
                  v6);
          v12 = 12LL;
        }
      }
      else
      {
        v11 = tip::details::reason_string((tip::details *)"Reason::unexpected_state_during_view_consolidation", v6);
        v12 = 11LL;
      }
    }
    else
    {
      v11 = tip::details::reason_string((tip::details *)"Reason::unexpected_state_during_hide_request_timer", v6);
      v12 = 10LL;
    }
    tip2::test_data_base<_tip_SearchHideTest_id>::__warn<enum _tip_SearchHideTest::Reason>(this, v12, v11);
    return;
  }
  v3 = tip::details::reason_string((tip::details *)"Reason::already_hidden", a2);
  v4 = *((_QWORD *)this + 1);
  if ( !*(_BYTE *)(v4 + 152) )
  {
    v5 = 8;
    goto LABEL_4;
  }
}
