/*
 * XREFs of ?IsExclusiveModeDisabled@@YAHPEBG@Z @ 0x18011E4F4
 * Callers:
 *     ?RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x18003E018 (-RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVE.c)
 * Callees:
 *     WPP_SF_d @ 0x1800DDE94 (WPP_SF_d.c)
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180116198 (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z.c)
 *     WPP_SF_l @ 0x180126338 (WPP_SF_l.c)
 */

__int64 __fastcall IsExclusiveModeDisabled(const unsigned __int16 *a1, __int64 a2, const struct _tagpropertykey *a3)
{
  unsigned int v3; // ebx
  int PropertyStoreProperty; // eax
  struct tagPROPVARIANT pvar; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0;
  memset(&pvar, 0, sizeof(pvar));
  PropertyStoreProperty = CPolicyConfig::GetPropertyStoreProperty(a1, a2, a3, &pvar);
  if ( PropertyStoreProperty >= 0 )
  {
    if ( pvar.vt )
      LOBYTE(v3) = pvar.iVal == 0;
  }
  else if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x18u,
      (__int64)&WPP_09ae8f41bb453bc35d3b802f4338d8f9_Traceguids,
      PropertyStoreProperty);
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_l(*((_QWORD *)WPP_GLOBAL_Control + 2), 25LL, &WPP_09ae8f41bb453bc35d3b802f4338d8f9_Traceguids, v3);
  }
  return v3;
}
