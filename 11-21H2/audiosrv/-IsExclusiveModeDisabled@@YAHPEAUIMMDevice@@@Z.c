/*
 * XREFs of ?IsExclusiveModeDisabled@@YAHPEAUIMMDevice@@@Z @ 0x18000E7BC
 * Callers:
 *     AudioServerIsFormatSupported @ 0x180021540 (AudioServerIsFormatSupported.c)
 * Callees:
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18000E8CC (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARI.c)
 *     WPP_SF_d @ 0x1800C6278 (WPP_SF_d.c)
 *     WPP_SF_l @ 0x1800F51CC (WPP_SF_l.c)
 */

__int64 __fastcall IsExclusiveModeDisabled(struct IMMDevice *a1)
{
  unsigned int v1; // ebx
  int PropertyStoreProperty; // eax
  struct tagPROPVARIANT pvar; // [rsp+20h] [rbp-28h] BYREF

  memset(&pvar, 0, sizeof(pvar));
  v1 = 0;
  PropertyStoreProperty = CPolicyConfig::GetPropertyStoreProperty(a1, 0, &PKEY_Endpoint_AllowExclusive, &pvar);
  if ( PropertyStoreProperty < 0 )
  {
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        35LL,
        &WPP_862f1ccbb3a43028c75406f124deb6be_Traceguids,
        (unsigned int)PropertyStoreProperty);
    }
  }
  else if ( pvar.vt )
  {
    LOBYTE(v1) = pvar.iVal == 0;
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_l(*((_QWORD *)WPP_GLOBAL_Control + 2), 36LL, &WPP_862f1ccbb3a43028c75406f124deb6be_Traceguids, v1);
  }
  return v1;
}
