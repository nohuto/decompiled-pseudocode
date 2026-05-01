/*
 * XREFs of ?IsWebSearchProviderInstalled@@YA_NXZ @ 0x1801ED8E8
 * Callers:
 *     ?TrySetWebSearchEnabledStateOnUpdate@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1801EFCC4 (-TrySetWebSearchEnabledStateOnUpdate@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?InstallWebSearchPackage@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0V?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@tip2@@@Z @ 0x1804682C8 (-InstallWebSearchPackage@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0V.c)
 *     ?ShouldInstallDefaultWebSearchProvider@UndockedSearchAppExperienceManager@@AEAA_NXZ @ 0x18046A628 (-ShouldInstallDefaultWebSearchProvider@UndockedSearchAppExperienceManager@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

char IsWebSearchProviderInstalled(void)
{
  int v0; // ebx
  LSTATUS ValueW; // eax
  char v2; // dl
  int v3; // ecx
  bool v4; // zf
  bool v5; // sf
  unsigned int v7; // [rsp+50h] [rbp+8h] BYREF
  DWORD v8; // [rsp+58h] [rbp+10h] BYREF
  DWORD v9; // [rsp+60h] [rbp+18h] BYREF

  v9 = 4;
  v0 = 0;
  v8 = 0;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings",
             L"WebSearchInstalled",
             0x10000012u,
             &v8,
             &v7,
             &v9);
  v2 = 1;
  v3 = ValueW;
  if ( ValueW )
  {
    if ( ValueW == 234 )
      goto LABEL_10;
  }
  else
  {
    if ( v8 == 4 )
    {
      if ( v7 > 1 )
      {
LABEL_10:
        v5 = 1;
        goto LABEL_11;
      }
      v3 = 0;
      v4 = v7 == 1;
    }
    else
    {
      if ( v9 != 4 || (unsigned __int16)(v7 - 48) > 1u )
        goto LABEL_10;
      v3 = 0;
      v4 = (_WORD)v7 == 49;
    }
    LOBYTE(v0) = v4;
  }
  v5 = v3 < 0;
  if ( v3 > 0 )
    goto LABEL_10;
LABEL_11:
  if ( v5 || !v0 )
    return 0;
  return v2;
}
