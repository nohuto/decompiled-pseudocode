/*
 * XREFs of ?GetMobilityValue@MobilityExperienceSettings@CreativeFramework@@YAJPEBG0PEAE@Z @ 0x180035DA0
 * Callers:
 *     ??R_lambda_3a3b929e5d63e7f37c8f1fb2c9733fad_@@QEBA@XZ @ 0x18002CEE0 (--R_lambda_3a3b929e5d63e7f37c8f1fb2c9733fad_@@QEBA@XZ.c)
 *     ?get_SuggestionsDisabled@MobilityExperienceSettings@ContentManagement@@UEAAJPEAE@Z @ 0x180044A20 (-get_SuggestionsDisabled@MobilityExperienceSettings@ContentManagement@@UEAAJPEAE@Z.c)
 *     ?get_YourPhoneTaskbarIconCreated@MobilityExperienceSettings@ContentManagement@@UEAAJPEAE@Z @ 0x180044B40 (-get_YourPhoneTaskbarIconCreated@MobilityExperienceSettings@ContentManagement@@UEAAJPEAE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CreativeFramework::MobilityExperienceSettings::GetMobilityValue(
        LPCWSTR lpSubKey,
        LPCWSTR lpValue,
        unsigned __int16 *a3,
        unsigned __int8 *a4)
{
  LSTATUS ValueW; // eax
  bool v6; // sf
  DWORD v8; // [rsp+60h] [rbp+18h] BYREF
  int v9; // [rsp+68h] [rbp+20h] BYREF

  *(_BYTE *)a3 = 0;
  v8 = 4;
  ValueW = RegGetValueW(HKEY_CURRENT_USER, lpSubKey, lpValue, 0x20000010u, 0LL, &v9, &v8);
  v6 = ValueW < 0;
  if ( ValueW > 0 )
    v6 = 1;
  if ( !v6 )
    *(_BYTE *)a3 = v9 != 0;
  return 0LL;
}
