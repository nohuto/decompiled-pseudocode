/*
 * XREFs of ?evaluate@_tip_WidgetsAppInstallTIP@@QEAAXXZ @ 0x1801CF2A4
 * Callers:
 *     ?evaluate@?$test_merged_data@U_tip_WidgetsAppInstallTIP@@@details@tip@@EEAAXXZ @ 0x1801CF290 (-evaluate@-$test_merged_data@U_tip_WidgetsAppInstallTIP@@@details@tip@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x18014AA04 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_WidgetsAppInstallTIP::evaluate(_tip_WidgetsAppInstallTIP *this, const char *a2)
{
  _DWORD *v2; // r9
  __int16 v3; // ax
  const char *v4; // r11
  __int16 v5; // r10
  __int64 v6; // r9
  const char *v7; // r11
  char v8; // r10
  const char *v9; // rax
  __int64 v10; // r9
  char v11; // r10

  v2 = *(_DWORD **)this;
  if ( (**(_DWORD **)this & 0x200) == 0 )
  {
    if ( *((_BYTE *)v2 + 72) )
      return;
    *((_BYTE *)v2 + 72) = 3;
    v3 = 16385;
LABEL_19:
    *((_QWORD *)v2 + 10) = 0LL;
    goto LABEL_20;
  }
  if ( *((_DWORD *)this + 20) != 6 )
  {
    v4 = tip::details::reason_string((tip::details *)"reason::app_install_not_completed", a2);
    if ( *((_BYTE *)v2 + 72) )
      return;
    *((_BYTE *)v2 + 72) = 3;
    v3 = 4;
LABEL_7:
    *((_QWORD *)v2 + 10) = v4;
LABEL_20:
    *((_WORD *)v2 + 37) = v3;
    return;
  }
  if ( *((int *)this + 21) < 0 )
  {
    v4 = tip::details::reason_string((tip::details *)"reason::app_install_error", a2);
    if ( *((_BYTE *)v2 + 72) != (_BYTE)v5 )
      return;
    v3 = v5 + 3;
    *((_BYTE *)v2 + 72) = v5 + 3;
    goto LABEL_7;
  }
  if ( *((_QWORD *)this + 7) )
  {
    if ( *((__int64 *)this + 9) <= 600000 )
    {
      if ( *((_BYTE *)v2 + 72) )
        return;
      v3 = 0x8000;
      *((_BYTE *)v2 + 72) = 1;
      goto LABEL_19;
    }
    v9 = tip::details::reason_string((tip::details *)"reason::delay_unexpectedly_long", a2);
    if ( *(_BYTE *)(v10 + 72) == v11 )
    {
      *(_QWORD *)(v10 + 80) = v9;
      *(_BYTE *)(v10 + 72) = 2;
      *(_WORD *)(v10 + 74) = 1;
    }
  }
  else
  {
    v7 = tip::details::reason_string((tip::details *)"reason::invalid_package_version", a2);
    if ( *(_BYTE *)(v6 + 72) == v8 )
    {
      *(_QWORD *)(v6 + 80) = v7;
      *(_BYTE *)(v6 + 72) = 3;
      *(_WORD *)(v6 + 74) = 2;
    }
  }
}
