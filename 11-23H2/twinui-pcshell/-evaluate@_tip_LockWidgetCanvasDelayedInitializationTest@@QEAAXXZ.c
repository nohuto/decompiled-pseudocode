/*
 * XREFs of ?evaluate@_tip_LockWidgetCanvasDelayedInitializationTest@@QEAAXXZ @ 0x18024A5B8
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@EEAAXXZ @ 0x18024A0B0 (-evaluate@-$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@EEAAX.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55116415@@@details@wil@@QEAA_NXZ @ 0x180248838 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55116415@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55480066@@@details@wil@@QEAA_NXZ @ 0x1802488EC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55480066@@@details@wil@@QEAA_NXZ.c)
 */

void __fastcall _tip_LockWidgetCanvasDelayedInitializationTest::evaluate(
        _tip_LockWidgetCanvasDelayedInitializationTest *this,
        const char *a2)
{
  __int64 v2; // r9
  __int64 v4; // r9
  const char *v5; // r10
  __int16 v6; // cx
  const char *v7; // rdx
  const char *v8; // rax
  __int64 v9; // rcx
  const char *v10; // r9
  __int16 v11; // ax
  const char *v12; // rax
  __int64 v13; // rdx
  const char *v14; // rax
  __int64 v15; // rax

  v2 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v2 + 56) & 0x200) == 0 )
  {
    if ( !*(_BYTE *)(v2 + 152) )
    {
      *(_QWORD *)(v2 + 160) = 0LL;
      *(_BYTE *)(v2 + 152) = 3;
      *(_WORD *)(v2 + 154) = 16385;
    }
    return;
  }
  if ( !*((_BYTE *)this + 22) )
  {
    v5 = tip::details::reason_string((tip::details *)"reason::WEP_not_installed", a2);
    if ( *(_BYTE *)(v4 + 152) )
      return;
    v6 = 1;
LABEL_7:
    *(_BYTE *)(v4 + 152) = 3;
    *(_WORD *)(v4 + 154) = v6;
    goto LABEL_8;
  }
  if ( !*((_BYTE *)this + 23) )
  {
    v5 = tip::details::reason_string((tip::details *)"reason::WPR_not_installed", a2);
    if ( *(_BYTE *)(v4 + 152) )
      return;
    *(_BYTE *)(v4 + 152) = 3;
    *(_WORD *)(v4 + 154) = 2;
LABEL_8:
    *(_QWORD *)(v4 + 160) = v5;
    return;
  }
  if ( *((_DWORD *)this + 7) != -1 && *((_DWORD *)this + 7) != 6 )
  {
    v5 = tip::details::reason_string((tip::details *)"reason::package_install_failed", a2);
    if ( *(_BYTE *)(v4 + 152) )
      return;
    v6 = 4;
    goto LABEL_7;
  }
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_55116415>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_55116415>::GetImpl'::`2'::impl) )
  {
    if ( *((_DWORD *)this + 9) != -1 && *((_DWORD *)this + 9) != 6 )
    {
      v8 = tip::details::reason_string((tip::details *)"reason::fallback_package_install_failed", v7);
      v9 = *((_QWORD *)this + 1);
      v10 = v8;
      if ( *(_BYTE *)(v9 + 152) )
        return;
      *(_BYTE *)(v9 + 152) = 3;
      v11 = 5;
      goto LABEL_21;
    }
  }
  else if ( *((_DWORD *)this + 8) != -1 && *((_DWORD *)this + 8) != 6 )
  {
    goto LABEL_24;
  }
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_55480066>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_55480066>::GetImpl'::`2'::impl) )
  {
LABEL_33:
    v15 = *((_QWORD *)this + 1);
    if ( !*(_BYTE *)(v15 + 152) )
    {
      *(_QWORD *)(v15 + 160) = 0LL;
      *(_BYTE *)(v15 + 152) = 1;
      *(_WORD *)(v15 + 154) = 0x8000;
    }
    return;
  }
  if ( *((_DWORD *)this + 10) == -1 || *((_DWORD *)this + 10) == 6 )
  {
    if ( !*((_BYTE *)this + 24) && !*((_BYTE *)this + 25) )
    {
      v14 = tip::details::reason_string((tip::details *)"reason::SEA_not_installed", v7);
      v9 = *((_QWORD *)this + 1);
      v10 = v14;
      if ( *(_BYTE *)(v9 + 152) )
        return;
      v11 = 3;
      *(_BYTE *)(v9 + 152) = 3;
LABEL_21:
      *(_WORD *)(v9 + 154) = v11;
      *(_QWORD *)(v9 + 160) = v10;
      return;
    }
    goto LABEL_33;
  }
LABEL_24:
  v12 = tip::details::reason_string((tip::details *)"reason::package_install_failed", v7);
  v13 = *((_QWORD *)this + 1);
  if ( !*(_BYTE *)(v13 + 152) )
  {
    *(_BYTE *)(v13 + 152) = 3;
    *(_WORD *)(v13 + 154) = 4;
    *(_QWORD *)(v13 + 160) = v12;
  }
}
