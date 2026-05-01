/*
 * XREFs of ?evaluate@_tip_StartMenuInvokeTest@@QEAAXXZ @ 0x180053D5C
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@EEAAXXZ @ 0x180201810 (-evaluate@-$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_49402389@@@details@wil@@QEAA_NXZ @ 0x1801E3294 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_49402389@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FullTrustStartMenu@@@details@wil@@QEAA_NXZ @ 0x1801E32D0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FullTrustStartMenu@@_ea_1801E32D0.c)
 *     ??$__fail@W4reason@_tip_StartMenuInvokeTest@@@?$test_data_base@U_tip_StartMenuInvokeTest_id@@@tip2@@IEBAXW4reason@_tip_StartMenuInvokeTest@@PEBD@Z @ 0x1801FB740 (--$__fail@W4reason@_tip_StartMenuInvokeTest@@@-$test_data_base@U_tip_StartMenuInvokeTest_id@@@ti.c)
 *     ??$__ignore@W4reason@_tip_StartMenuInvokeTest@@@?$test_data_base@U_tip_StartMenuInvokeTest_id@@@tip2@@IEBAXW4reason@_tip_StartMenuInvokeTest@@PEBD@Z @ 0x1801FB76C (--$__ignore@W4reason@_tip_StartMenuInvokeTest@@@-$test_data_base@U_tip_StartMenuInvokeTest_id@@@.c)
 *     ??$__succeed@W4reason@_tip_StartMenuInvokeTest@@@?$test_data_base@U_tip_StartMenuInvokeTest_id@@@tip2@@IEBAXW4reason@_tip_StartMenuInvokeTest@@PEBD@Z @ 0x1801FB79C (--$__succeed@W4reason@_tip_StartMenuInvokeTest@@@-$test_data_base@U_tip_StartMenuInvokeTest_id@@.c)
 *     ??$__warn@W4reason@_tip_StartMenuInvokeTest@@@?$test_data_base@U_tip_StartMenuInvokeTest_id@@@tip2@@IEBAXW4reason@_tip_StartMenuInvokeTest@@PEBD@Z @ 0x1801FB7F8 (--$__warn@W4reason@_tip_StartMenuInvokeTest@@@-$test_data_base@U_tip_StartMenuInvokeTest_id@@@ti.c)
 *     ?__fail_if_complete_not_called@?$test_data_base@U_tip_GuidedSnapAssistTest_id@@@tip2@@IEBA_NXZ @ 0x180201550 (-__fail_if_complete_not_called@-$test_data_base@U_tip_GuidedSnapAssistTest_id@@@tip2@@IEBA_NXZ.c)
 *     ?__succeed@?$test_data_base@U_tip_ColumnSmartFillTest_id@@@tip2@@IEBAXXZ @ 0x180201660 (-__succeed@-$test_data_base@U_tip_ColumnSmartFillTest_id@@@tip2@@IEBAXXZ.c)
 */

void __fastcall _tip_StartMenuInvokeTest::evaluate(_tip_StartMenuInvokeTest *this)
{
  const char *v2; // rdx
  int v3; // eax
  const char *v4; // rax
  __int64 v5; // rdx
  const char *v6; // rax
  __int64 v7; // rdx
  char v8; // cl
  _BYTE *v9; // rax
  const char *v10; // rax
  __int64 v11; // rdx
  const char *v12; // rax
  __int64 v13; // rdx

  if ( *((_BYTE *)this + 56) )
    *(_DWORD *)(*((_QWORD *)this + 1) + 172LL) = 38522498;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_FullTrustStartMenu>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_FullTrustStartMenu>::GetImpl'::`2'::impl) )
    *((_BYTE *)this + 64) = 1;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_49402389>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_49402389>::GetImpl'::`2'::impl) )
    *((_BYTE *)this + 67) = 1;
  v3 = *((_DWORD *)this + 8);
  if ( v3 == -2144927148 || v3 == -2147009295 )
  {
    v4 = tip::details::reason_string((tip::details *)"reason::critical_start_dialog", v2);
    v5 = 9LL;
    goto LABEL_70;
  }
  if ( *((int *)this + 10) < 0 )
  {
    v4 = tip::details::reason_string((tip::details *)"reason::utm_initialization_failure", v2);
    v5 = 10LL;
LABEL_70:
    tip2::test_data_base<_tip_StartMenuInvokeTest_id>::__fail<enum _tip_StartMenuInvokeTest::reason>(this, v5, v4);
    return;
  }
  if ( *((int *)this + 11) < 0 )
  {
    v4 = tip::details::reason_string((tip::details *)"reason::root_frame_initialization_failure", v2);
    v5 = 11LL;
    goto LABEL_70;
  }
  if ( *((_BYTE *)this + 57) )
  {
    v4 = tip::details::reason_string((tip::details *)"reason::undocked_content_missing", v2);
    v5 = 22LL;
    goto LABEL_70;
  }
  if ( *((_DWORD *)this + 15) != -1 )
  {
    v4 = tip::details::reason_string((tip::details *)"reason::undocked_content_error", v2);
    v5 = 23LL;
    goto LABEL_70;
  }
  if ( v3 < 0 )
  {
    if ( (v3 & 0x1FFF0000) == 0x70000 && (unsigned int)(unsigned __int16)v3 - 15600 <= 0x63 )
    {
      v4 = tip::details::reason_string((tip::details *)"reason::activation_failure_package_error", v2);
      v5 = 24LL;
    }
    else
    {
      v4 = tip::details::reason_string((tip::details *)"reason::activation_failure", v2);
      v5 = 8LL;
    }
    goto LABEL_70;
  }
  if ( *((_BYTE *)this + 21) )
  {
    v4 = tip::details::reason_string((tip::details *)"reason::start_crashed_during_invoke", v2);
    v5 = 4LL;
    goto LABEL_70;
  }
  if ( *((_BYTE *)this + 25) )
  {
    v4 = tip::details::reason_string((tip::details *)"reason::invalid_state_transition_during_show", v2);
    v5 = 12LL;
    goto LABEL_70;
  }
  if ( *((_BYTE *)this + 19) )
  {
    v6 = tip::details::reason_string((tip::details *)"reason::canceled_device_locked", v2);
    tip2::test_data_base<_tip_StartMenuInvokeTest_id>::__ignore<enum _tip_StartMenuInvokeTest::reason>(this, v7, v6);
    return;
  }
  if ( *((_BYTE *)this + 20) )
  {
    if ( !*((_BYTE *)this + 22) && !*((_BYTE *)this + 23) )
    {
      if ( *((_BYTE *)this + 56) )
      {
        v4 = tip::details::reason_string((tip::details *)"reason::autoinvoke_timed_out_after_five_seconds", v2);
        v5 = 21LL;
      }
      else
      {
        v4 = tip::details::reason_string((tip::details *)"reason::timed_out_after_five_seconds", v2);
        v5 = 3LL;
      }
      goto LABEL_70;
    }
    goto LABEL_30;
  }
  v8 = *((_BYTE *)this + 17);
  if ( v8 )
  {
    if ( *((_DWORD *)this + 12) == -2147467261 )
    {
      v4 = tip::details::reason_string((tip::details *)"reason::search_null_hwnd_foreground_error", v2);
      v5 = 19LL;
      goto LABEL_70;
    }
    if ( *((_DWORD *)this + 12) == -2147023496 )
    {
      v4 = tip::details::reason_string((tip::details *)"reason::search_invalid_hwnd_foreground_error", v2);
      v5 = 20LL;
      goto LABEL_70;
    }
    v9 = (char *)this + 18;
  }
  else
  {
    v9 = (char *)this + 18;
    if ( !*((_BYTE *)this + 18) )
      goto LABEL_43;
  }
  if ( *((_BYTE *)this + 22) )
    goto LABEL_30;
LABEL_43:
  if ( !v8 && !*v9 )
    goto LABEL_53;
  if ( *((_BYTE *)this + 23) )
    goto LABEL_30;
  if ( !v8 && !*v9 )
    goto LABEL_53;
  if ( *((_BYTE *)this + 24) )
  {
LABEL_30:
    v4 = tip::details::reason_string((tip::details *)"reason::search_failed_unable_to_recover", v2);
    v5 = 13LL;
    goto LABEL_70;
  }
  if ( v8 )
  {
    v4 = tip::details::reason_string((tip::details *)"reason::foreground_could_not_be_claimed", v2);
    v5 = 17LL;
    goto LABEL_70;
  }
  if ( *v9 )
  {
    v4 = tip::details::reason_string((tip::details *)"reason::foreground_lost_invoke_abort", v2);
    v5 = 18LL;
    goto LABEL_70;
  }
LABEL_53:
  if ( *((_BYTE *)this + 22) )
  {
    v10 = tip::details::reason_string((tip::details *)"reason::search_crashed_during_invoke", v2);
    v11 = 5LL;
LABEL_55:
    tip2::test_data_base<_tip_StartMenuInvokeTest_id>::__warn<enum _tip_StartMenuInvokeTest::reason>(this, v11, v10);
    return;
  }
  if ( *((_BYTE *)this + 23) )
  {
    v10 = tip::details::reason_string((tip::details *)"reason::search_activation_failed", v2);
    v11 = 6LL;
    goto LABEL_55;
  }
  if ( *((_BYTE *)this + 24) )
  {
    v10 = tip::details::reason_string((tip::details *)"reason::start_shown_without_search_after_cutoff_timer", v2);
    v11 = 7LL;
    goto LABEL_55;
  }
  if ( *((_BYTE *)this + 26) )
  {
    if ( *((_BYTE *)this + 27) )
    {
      v12 = tip::details::reason_string((tip::details *)"reason::start_and_search_launched_during_invoke", v2);
      v13 = 16LL;
    }
    else
    {
      v12 = tip::details::reason_string((tip::details *)"reason::start_launched_during_invoke", v2);
      v13 = 14LL;
    }
    goto LABEL_63;
  }
  if ( *((_BYTE *)this + 27) )
  {
    v12 = tip::details::reason_string((tip::details *)"reason::search_launched_during_invoke", v2);
    v13 = 15LL;
LABEL_63:
    tip2::test_data_base<_tip_StartMenuInvokeTest_id>::__succeed<enum _tip_StartMenuInvokeTest::reason>(this, v13, v12);
    return;
  }
  if ( !(unsigned __int8)tip2::test_data_base<_tip_GuidedSnapAssistTest_id>::__fail_if_complete_not_called(this) )
    tip2::test_data_base<_tip_ColumnSmartFillTest_id>::__succeed(this);
}
