/*
 * XREFs of ?evaluate@_tip_SearchWebProviderInstallTest@@QEAAXXZ @ 0x18046C678
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@EEAAXXZ @ 0x18046C1F0 (-evaluate@-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55370801@@@details@wil@@QEAA_NXZ @ 0x1801F0554 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55370801@@@details@wil@@QEAA_NXZ.c)
 *     ??$__fail@W4Reason@_tip_SearchWebProviderInstallTest@@@?$test_data_base@U_tip_SearchWebProviderInstallTest_id@@@tip2@@IEBAXW4Reason@_tip_SearchWebProviderInstallTest@@PEBD@Z @ 0x180462ADC (--$__fail@W4Reason@_tip_SearchWebProviderInstallTest@@@-$test_data_base@U_tip_SearchWebProviderI.c)
 *     ??$__ignore@W4Reason@_tip_SearchWebProviderInstallTest@@@?$test_data_base@U_tip_SearchWebProviderInstallTest_id@@@tip2@@IEBAXW4Reason@_tip_SearchWebProviderInstallTest@@PEBD@Z @ 0x180462B08 (--$__ignore@W4Reason@_tip_SearchWebProviderInstallTest@@@-$test_data_base@U_tip_SearchWebProvide.c)
 */

void __fastcall _tip_SearchWebProviderInstallTest::evaluate(_tip_SearchWebProviderInstallTest *this, const char *a2)
{
  const char *v3; // rax
  __int16 v4; // dx
  const char *v5; // rdx
  const char *v6; // rax
  __int16 v7; // dx
  __int64 v8; // r9
  __int16 v9; // ax
  const char *v10; // rax
  __int64 v11; // r9

  if ( *((_BYTE *)this + 20) )
  {
    v3 = tip::details::reason_string((tip::details *)"Reason::install_package_regkeys_not_set", a2);
    v4 = 1;
LABEL_3:
    tip2::test_data_base<_tip_SearchWebProviderInstallTest_id>::__ignore<enum _tip_SearchWebProviderInstallTest::Reason>(
      (__int64)this,
      v4,
      (__int64)v3);
    return;
  }
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_55370801>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_55370801>::GetImpl'::`2'::impl) )
  {
    if ( *((_BYTE *)this + 169) )
    {
      v3 = tip::details::reason_string((tip::details *)"Reason::app_uninstalled_by_user", v5);
      v4 = 6;
      goto LABEL_3;
    }
    if ( *((_BYTE *)this + 56) && !*((_BYTE *)this + 168) )
    {
LABEL_9:
      v3 = tip::details::reason_string((tip::details *)"Reason::app_already_installed", v5);
      v4 = 2;
      goto LABEL_3;
    }
    if ( !*((_BYTE *)this + 57) )
    {
      if ( *((_BYTE *)this + 168) )
      {
        v6 = tip::details::reason_string((tip::details *)"Reason::app_update_not_registered", v5);
        v7 = 5;
        goto LABEL_13;
      }
LABEL_12:
      v6 = tip::details::reason_string((tip::details *)"Reason::app_not_registered", v5);
      v7 = 3;
LABEL_13:
      tip2::test_data_base<_tip_SearchWebProviderInstallTest_id>::__fail<enum _tip_SearchWebProviderInstallTest::Reason>(
        (__int64)this,
        v7,
        (__int64)v6);
      return;
    }
  }
  else
  {
    if ( *((_BYTE *)this + 56) )
      goto LABEL_9;
    if ( !*((_BYTE *)this + 57) )
      goto LABEL_12;
  }
  v8 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v8 + 56) & 0x200) == 0 )
  {
    if ( *(_BYTE *)(v8 + 152) )
      return;
    *(_BYTE *)(v8 + 152) = 3;
    v9 = 16385;
LABEL_25:
    *(_QWORD *)(v8 + 160) = 0LL;
    *(_WORD *)(v8 + 154) = v9;
    return;
  }
  if ( *((int *)this + 24) >= 0 )
  {
    if ( *(_BYTE *)(v8 + 152) )
      return;
    *(_BYTE *)(v8 + 152) = 1;
    v9 = 0x8000;
    goto LABEL_25;
  }
  v10 = tip::details::reason_string((tip::details *)"Reason::app_installed_regkey_set_failed", v5);
  if ( !*(_BYTE *)(v11 + 152) )
  {
    *(_BYTE *)(v11 + 152) = 2;
    *(_WORD *)(v11 + 154) = 4;
    *(_QWORD *)(v11 + 160) = v10;
  }
}
