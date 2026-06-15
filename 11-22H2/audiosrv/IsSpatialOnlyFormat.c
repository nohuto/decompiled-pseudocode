/*
 * XREFs of IsSpatialOnlyFormat @ 0x18002E870
 * Callers:
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVEffectPack@@AEBU_tagpropertykey@@PEAUSpatialAudioRelatedGlobalSettings@@PEBUtWAVEFORMATEX@@PEAH@Z @ 0x18002C994 (-ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVEffectPack@@AEBU_tagpropertykey@@PEAUSpatial.c)
 *     ?GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@_NPEBUtWAVEFORMATEX@@PEAUSpatialAudioSettings@@@Z @ 0x180060AC4 (-GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@_NPEBUtWAVEFORMATEX@@PE.c)
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@PEAUSpatialAudioRelatedGlobalSettings@@_N@Z @ 0x1800612A0 (-SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBU.c)
 *     ?GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@_NPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@3PEAUSpatialAudioRelatedGlobalSettings@@PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x1801532D4 (-GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@_NPEBUSpatialAudioSetti.c)
 * Callees:
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x18006A07C (IsGetDefaultSpatialRenderingModePresent.c)
 */

char __fastcall IsSpatialOnlyFormat(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  unsigned int v6; // edi
  unsigned int v7; // esi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned int v13; // ecx
  __int64 v14; // rax
  _QWORD v16[2]; // [rsp+20h] [rbp-40h]
  int v17; // [rsp+30h] [rbp-30h]
  int v18; // [rsp+34h] [rbp-2Ch]
  int v19; // [rsp+38h] [rbp-28h]
  int v20; // [rsp+3Ch] [rbp-24h]
  int v21; // [rsp+40h] [rbp-20h]
  int v22; // [rsp+44h] [rbp-1Ch]
  int v23; // [rsp+48h] [rbp-18h]
  int v24; // [rsp+4Ch] [rbp-14h]

  v4 = 0;
  v6 = 3;
  v17 = 268;
  v7 = 3;
  v18 = 1051882;
  v19 = -1442840448;
  v20 = 1905997824;
  v21 = 12;
  v22 = 1051882;
  v23 = -1442840448;
  v24 = 1905997824;
  if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent(
                          a1,
                          a2,
                          a3,
                          a4,
                          0x100CEA0000030CLL,
                          0x719B3800AA000080LL)
    && (unsigned int)IsDolbyMatSupportedByAudioDriver() )
  {
    v7 = 2;
  }
  LODWORD(v10) = 0;
  while ( 1 )
  {
    v11 = 2LL * (unsigned int)v10;
    v12 = v16[2 * (unsigned int)v10] - *a1;
    if ( !v12 )
      v12 = v16[2 * (unsigned int)v10 + 1] - a1[1];
    if ( !v12 )
      break;
    v10 = (unsigned int)(v10 + 1);
    if ( (unsigned int)v10 >= v7 )
    {
      v17 = 779;
      v18 = 1051882;
      v19 = -1442840448;
      v20 = 1905997824;
      v21 = 11;
      v22 = 1051882;
      v23 = -1442840448;
      v24 = 1905997824;
      if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent(
                              v10,
                              v11,
                              v8,
                              v9,
                              0x100CEA0000010BLL,
                              0x719B3800AA000080LL)
        && (unsigned int)IsDtsXSupportedByAudioDriver() )
      {
        v6 = 2;
      }
      v13 = 0;
      while ( 1 )
      {
        v14 = v16[2 * v13] - *a1;
        if ( !v14 )
          v14 = v16[2 * v13 + 1] - a1[1];
        if ( !v14 )
          break;
        if ( ++v13 >= v6 )
          return v4;
      }
      return 1;
    }
  }
  return 1;
}
