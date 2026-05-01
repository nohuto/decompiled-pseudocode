/*
 * XREFs of ?evaluate@_tip_InboxedAppInstallerTest@@QEAAXXZ @ 0x18024A304
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@EEAAXXZ @ 0x18024A090 (-evaluate@-$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_InboxedAppInstallerTest::evaluate(_tip_InboxedAppInstallerTest *this, const char *a2)
{
  __int64 v2; // r9
  __int16 v3; // ax
  const char *v4; // rax
  __int64 v5; // r9
  char v6; // r10
  int v7; // eax
  const char *v8; // r11
  char v9; // r10
  char v10; // r10
  char v11; // r10
  char v12; // r10
  char v13; // r10
  char v14; // r10
  __int64 v15; // r9
  __int16 v16; // r10
  const char *v17; // r11
  char v18; // r10
  char v19; // r10

  v2 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v2 + 56) & 0x200) == 0 )
  {
    if ( *(_BYTE *)(v2 + 152) )
      return;
    *(_BYTE *)(v2 + 152) = 3;
    v3 = 16385;
LABEL_40:
    *(_QWORD *)(v2 + 160) = 0LL;
    goto LABEL_41;
  }
  if ( !*((_BYTE *)this + 145) )
  {
    v4 = tip::details::reason_string((tip::details *)"reason::power_inadequate", a2);
    if ( *(_BYTE *)(v5 + 152) != v6 )
      return;
    *(_WORD *)(v5 + 154) = 6;
    goto LABEL_7;
  }
  v7 = *((_DWORD *)this + 5);
  switch ( v7 )
  {
    case -2145124322:
    case 1312:
      v8 = tip::details::reason_string((tip::details *)"reason::system_or_service_shutdown", a2);
      if ( *(_BYTE *)(v2 + 152) != v9 )
        return;
      *(_BYTE *)(v2 + 152) = 4;
      v3 = 3;
      break;
    case 1618:
      v4 = tip::details::reason_string((tip::details *)"reason::install_already_running", a2);
      if ( *(_BYTE *)(v5 + 152) != v10 )
        return;
      *(_WORD *)(v5 + 154) = 4;
LABEL_7:
      *(_BYTE *)(v5 + 152) = 4;
      *(_QWORD *)(v5 + 160) = v4;
      return;
    case -2147024891:
      v8 = tip::details::reason_string((tip::details *)"reason::access_denied", a2);
      if ( *(_BYTE *)(v2 + 152) != v11 )
        return;
      *(_BYTE *)(v2 + 152) = 3;
      v3 = 5;
      break;
    default:
      if ( !*((_QWORD *)this + 16) )
      {
        v8 = tip::details::reason_string((tip::details *)"reason::local_package_path_not_set", a2);
        if ( *(_BYTE *)(v2 + 152) != v12 )
          return;
        *(_BYTE *)(v2 + 152) = 3;
        v3 = 10;
        break;
      }
      if ( *((int *)this + 6) < 0 )
      {
        v8 = tip::details::reason_string((tip::details *)"reason::install_failed_with_exception", a2);
        if ( *(_BYTE *)(v2 + 152) != v13 )
          return;
        *(_BYTE *)(v2 + 152) = 3;
        v3 = 9;
        break;
      }
      if ( *((_BYTE *)this + 17) )
      {
        v8 = tip::details::reason_string((tip::details *)"reason::invalid_package_volume", a2);
        if ( *(_BYTE *)(v2 + 152) != v14 )
          return;
        *(_BYTE *)(v2 + 152) = 3;
        v3 = 8;
        break;
      }
      if ( v7 < 0 )
      {
        v17 = tip::details::reason_string((tip::details *)"reason::install_status_hr_failure", a2);
        if ( *(_BYTE *)(v15 + 152) != (_BYTE)v16 )
          return;
        *(_WORD *)(v15 + 154) = v16;
        goto LABEL_31;
      }
      if ( *((_DWORD *)this + 7) != 6 )
      {
        v17 = tip::details::reason_string((tip::details *)"reason::install_not_completed", (const char *)6);
        if ( *(_BYTE *)(v15 + 152) != v18 )
          return;
        *(_WORD *)(v15 + 154) = 1;
LABEL_31:
        *(_BYTE *)(v15 + 152) = 3;
        *(_QWORD *)(v15 + 160) = v17;
        return;
      }
      if ( *((_BYTE *)this + 16) )
      {
        if ( *(_BYTE *)(v2 + 152) )
          return;
        v3 = 0x8000;
        *(_BYTE *)(v2 + 152) = 1;
        goto LABEL_40;
      }
      v8 = tip::details::reason_string((tip::details *)"reason::not_installed", (const char *)6);
      if ( *(_BYTE *)(v2 + 152) != v19 )
        return;
      *(_BYTE *)(v2 + 152) = 3;
      v3 = 2;
      break;
  }
  *(_QWORD *)(v2 + 160) = v8;
LABEL_41:
  *(_WORD *)(v2 + 154) = v3;
}
