/*
 * XREFs of ?IsExclusiveModeDisabled@@YAHPEBG@Z @ 0x1800EF07C
 * Callers:
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x180019650 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 * Callees:
 *     WPP_SF_d @ 0x1800C6278 (WPP_SF_d.c)
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1800E9B18 (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z.c)
 *     WPP_SF_l @ 0x1800F51CC (WPP_SF_l.c)
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
  else if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x21u,
      (__int64)&WPP_862f1ccbb3a43028c75406f124deb6be_Traceguids,
      PropertyStoreProperty);
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_l(*((_QWORD *)WPP_GLOBAL_Control + 2), 34LL, &WPP_862f1ccbb3a43028c75406f124deb6be_Traceguids, v3);
  }
  return v3;
}
