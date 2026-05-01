/*
 * XREFs of ?evaluate@_tip_WidgetsAppInstallTIP@@QEAAXXZ @ 0x180698D20
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@EEAAXXZ @ 0x18024A2F0 (-evaluate@-$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 *     ?__succeed@?$test_data_base@U_tip_ColumnSmartFillTest_id@@@tip2@@IEBAXXZ @ 0x180201660 (-__succeed@-$test_data_base@U_tip_ColumnSmartFillTest_id@@@tip2@@IEBAXXZ.c)
 */

void __fastcall _tip_WidgetsAppInstallTIP::evaluate(_tip_WidgetsAppInstallTIP *this, const char *a2)
{
  __int64 v2; // rax
  const char *v3; // rax
  __int64 v4; // r9
  __int16 v5; // dx
  const char *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r9

  v2 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v2 + 56) & 0x200) == 0 )
  {
    if ( !*(_BYTE *)(v2 + 152) )
    {
      *(_QWORD *)(v2 + 160) = 0LL;
      *(_WORD *)(v2 + 154) = 16385;
      *(_BYTE *)(v2 + 152) = 3;
    }
    return;
  }
  if ( *((_DWORD *)this + 22) != 6 )
  {
    v3 = tip::details::reason_string((tip::details *)"reason::app_install_not_completed", a2);
    v5 = 4;
LABEL_6:
    tip2::test_data_base<_tip_WidgetsAppInstallTIP_id>::__fail<enum _tip_WidgetsAppInstallTIP::reason>(
      v4,
      v5,
      (__int64)v3);
    return;
  }
  if ( *((int *)this + 23) < 0 )
  {
    v3 = tip::details::reason_string((tip::details *)"reason::app_install_error", a2);
    v5 = 3;
    goto LABEL_6;
  }
  if ( !*((_QWORD *)this + 8) )
  {
    v3 = tip::details::reason_string((tip::details *)"reason::invalid_package_version", a2);
    v5 = 2;
    goto LABEL_6;
  }
  if ( *((__int64 *)this + 10) <= 600000 )
  {
    tip2::test_data_base<_tip_ColumnSmartFillTest_id>::__succeed((__int64)this);
  }
  else
  {
    v6 = tip::details::reason_string((tip::details *)"reason::delay_unexpectedly_long", a2);
    tip2::test_data_base<_tip_WidgetsAppInstallTIP_id>::__warn<enum _tip_WidgetsAppInstallTIP::reason>(
      v8,
      v7,
      (__int64)v6);
  }
}
