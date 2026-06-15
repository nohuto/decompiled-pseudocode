/*
 * XREFs of ?IsExclusiveModeDisabled@@YAHPEAUIMMDevice@@@Z @ 0x18011E420
 * Callers:
 *     AudioServerIsFormatSupported @ 0x180123880 (AudioServerIsFormatSupported.c)
 * Callees:
 *     WPP_SF_d @ 0x1800DDE94 (WPP_SF_d.c)
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1801160E8 (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARI.c)
 *     WPP_SF_l @ 0x180126338 (WPP_SF_l.c)
 */

__int64 __fastcall IsExclusiveModeDisabled(struct IUnknown *a1)
{
  unsigned int v1; // ebx
  int PropertyStoreProperty; // eax
  struct tagPROPVARIANT pvar; // [rsp+20h] [rbp-28h] BYREF

  memset(&pvar, 0, sizeof(pvar));
  v1 = 0;
  PropertyStoreProperty = CPolicyConfig::GetPropertyStoreProperty(a1, 0, &PKEY_Endpoint_AllowExclusive, &pvar);
  if ( PropertyStoreProperty >= 0 )
  {
    if ( pvar.vt )
      LOBYTE(v1) = pvar.iVal == 0;
  }
  else if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Au,
      (__int64)&WPP_09ae8f41bb453bc35d3b802f4338d8f9_Traceguids,
      PropertyStoreProperty);
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_l(*((_QWORD *)WPP_GLOBAL_Control + 2), 27LL, &WPP_09ae8f41bb453bc35d3b802f4338d8f9_Traceguids, v1);
  }
  return v1;
}
