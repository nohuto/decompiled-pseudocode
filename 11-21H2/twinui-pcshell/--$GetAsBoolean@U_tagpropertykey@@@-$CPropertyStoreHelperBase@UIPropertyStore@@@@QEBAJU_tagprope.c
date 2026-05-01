/*
 * XREFs of ??$GetAsBoolean@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@PEA_N@Z @ 0x18002E688
 * Callers:
 *     ?_IsViewManaged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x180098E54 (-_IsViewManaged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 * Callees:
 *     ??$GetFailIfEmpty@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18002E6F8 (--$GetFailIfEmpty@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpro.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPropertyStoreHelperBase<IPropertyStore>::GetAsBoolean<_tagpropertykey>(
        __int64 a1,
        __int128 *a2,
        _BYTE *a3)
{
  HRESULT FailIf; // ebx
  __int128 v6; // [rsp+20h] [rbp-48h] BYREF
  int v7; // [rsp+30h] [rbp-38h]
  PROPVARIANT pvar[4]; // [rsp+40h] [rbp-28h] BYREF
  BOOL pfRet; // [rsp+78h] [rbp+10h] BYREF

  *a3 = 0;
  LOWORD(pvar[0]) = 0;
  v6 = *a2;
  v7 = *((_DWORD *)a2 + 4);
  FailIf = CPropertyStoreHelperBase<IPropertyStore>::GetFailIfEmpty<_tagpropertykey>(a1, &v6, pvar);
  if ( FailIf >= 0 )
  {
    *a3 = 0;
    pfRet = 0;
    if ( LOWORD(pvar[0]) )
    {
      FailIf = PropVariantToBoolean(pvar, &pfRet);
      if ( FailIf >= 0 )
        *a3 = pfRet;
    }
    else
    {
      FailIf = -2147023728;
    }
  }
  PropVariantClear(pvar);
  return (unsigned int)FailIf;
}
