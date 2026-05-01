/*
 * XREFs of ?evaluate@_tip_SettingsStoreAppInstallerTest@@QEAAXXZ @ 0x18024A7F8
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@EEAAXXZ @ 0x18024A0D0 (-evaluate@-$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 *     ComparePackageVersions @ 0x180238378 (ComparePackageVersions.c)
 */

void __fastcall _tip_SettingsStoreAppInstallerTest::evaluate(_tip_SettingsStoreAppInstallerTest *this, const char *a2)
{
  __int64 v2; // r9
  __int64 v3; // r10
  _tip_SettingsStoreAppInstallerTest *v4; // r11
  __int16 v5; // ax
  const char *v6; // rax
  __int64 v7; // r9
  char v8; // r10
  __int16 v9; // cx
  char v10; // r10
  char v11; // r10
  int v12; // eax
  char v13; // r10
  char v14; // r10
  __int64 v15; // r9
  const char *v16; // r11
  char v17; // r10
  __int16 v18; // cx
  __int16 v19; // r10
  char v20; // r10
  const char *v21; // r11
  char v22; // r10
  char v23; // r10

  v2 = *((_QWORD *)this + 1);
  v3 = 0LL;
  v4 = this;
  if ( (*(_DWORD *)(v2 + 56) & 0x200) == 0 )
  {
    if ( *(_BYTE *)(v2 + 152) )
      return;
    *(_BYTE *)(v2 + 152) = 3;
    v5 = 16385;
LABEL_43:
    *(_QWORD *)(v2 + 160) = v3;
    goto LABEL_44;
  }
  if ( !*((_BYTE *)this + 131) )
  {
    v6 = tip::details::reason_string((tip::details *)"reason::power_inadequate", a2);
    if ( *(_BYTE *)(v7 + 152) != v8 )
      return;
    *(_BYTE *)(v7 + 152) = 4;
    v9 = 7;
    goto LABEL_7;
  }
  if ( !*((_BYTE *)this + 133) )
  {
    v6 = tip::details::reason_string((tip::details *)"reason::no_network", a2);
    if ( *(_BYTE *)(v7 + 152) != v10 )
      return;
    *(_BYTE *)(v7 + 152) = 4;
    v9 = 8;
    goto LABEL_7;
  }
  if ( !*((_BYTE *)this + 129) )
  {
    v6 = tip::details::reason_string((tip::details *)"reason::store_install_not_allowed", a2);
    if ( *(_BYTE *)(v7 + 152) != v11 )
      return;
    *(_BYTE *)(v7 + 152) = 4;
    v9 = 9;
    goto LABEL_7;
  }
  v12 = *((_DWORD *)this + 8);
  switch ( v12 )
  {
    case -2145124322:
    case 1312:
      v6 = tip::details::reason_string((tip::details *)"reason::system_or_service_shutdown", a2);
      if ( *(_BYTE *)(v7 + 152) != v13 )
        return;
      v9 = 4;
      *(_BYTE *)(v7 + 152) = 4;
      goto LABEL_7;
    case 1618:
      v6 = tip::details::reason_string((tip::details *)"reason::install_already_running", a2);
      if ( *(_BYTE *)(v7 + 152) != v14 )
        return;
      *(_BYTE *)(v7 + 152) = 4;
      v9 = 5;
LABEL_7:
      *(_WORD *)(v7 + 154) = v9;
      *(_QWORD *)(v7 + 160) = v6;
      return;
    case -2147024891:
      v16 = tip::details::reason_string((tip::details *)"reason::access_denied", a2);
      if ( *(_BYTE *)(v15 + 152) != v17 )
        return;
      v18 = 6;
LABEL_24:
      *(_BYTE *)(v15 + 152) = 3;
      *(_WORD *)(v15 + 154) = v18;
      goto LABEL_25;
  }
  if ( v12 < 0 )
  {
    v16 = tip::details::reason_string((tip::details *)"reason::install_status_hr_failure", a2);
    if ( *(_BYTE *)(v15 + 152) != (_BYTE)v19 )
      return;
    *(_WORD *)(v15 + 154) = v19;
    *(_BYTE *)(v15 + 152) = 3;
LABEL_25:
    *(_QWORD *)(v15 + 160) = v16;
    return;
  }
  if ( *((_DWORD *)this + 10) != 6 )
  {
    v16 = tip::details::reason_string((tip::details *)"reason::install_not_completed", a2);
    if ( *(_BYTE *)(v15 + 152) != v20 )
      return;
    v18 = 1;
    goto LABEL_24;
  }
  if ( *((_WORD *)this + 22)
    && *((_WORD *)this + 23)
    && (int)ComparePackageVersions(*(_QWORD *)((char *)this + 44), *(_QWORD *)((char *)this + 52)) < 0 )
  {
    v21 = tip::details::reason_string((tip::details *)"reason::installed_outdated_version", a2);
    if ( *(_BYTE *)(v2 + 152) != v22 )
      return;
    *(_BYTE *)(v2 + 152) = 3;
    v5 = 2;
  }
  else
  {
    if ( *((_BYTE *)v4 + 16) != (_BYTE)v3 )
    {
      if ( *(_BYTE *)(v2 + 152) != (_BYTE)v3 )
        return;
      v5 = 0x8000;
      *(_BYTE *)(v2 + 152) = 1;
      goto LABEL_43;
    }
    v21 = tip::details::reason_string((tip::details *)"reason::not_installed", a2);
    if ( *(_BYTE *)(v2 + 152) != v23 )
      return;
    v5 = 3;
    *(_BYTE *)(v2 + 152) = 3;
  }
  *(_QWORD *)(v2 + 160) = v21;
LABEL_44:
  *(_WORD *)(v2 + 154) = v5;
}
