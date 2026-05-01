/*
 * XREFs of ?GetPropertyFromIDList@?$CItemIDFactory@UAPPITEM@@$0FDFAFAEB@@@SAJPEFBU_ITEMIDLIST@@AEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180755F10
 * Callers:
 *     ?GetPropertyFromPidl@Impl@TaskbarPinHelper@@YAJPEFBU_ITEMIDLIST@@AEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180755FB0 (-GetPropertyFromPidl@Impl@TaskbarPinHelper@@YAJPEFBU_ITEMIDLIST@@AEBU_tagpropertykey@@PEAUtagPRO.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CItemIDFactory<APPITEM,1397772353>::GetPropertyFromIDList(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3)
{
  HRESULT v4; // r9d

  v4 = -2147024809;
  *(_OWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  if ( a1 )
  {
    if ( *a1 >= 0x16u && *(_DWORD *)(a1 + 3) == 1397772353 && *a1 >= (unsigned __int64)a1[5] + 22 )
    {
      if ( a1[5] )
      {
        if ( a1 != (unsigned __int16 *)-22LL )
        {
          v4 = PSGetPropertyFromPropertyStorage((PCUSERIALIZEDPROPSTORAGE)(a1 + 11), a1[5], &rpkey, (PROPVARIANT *)a3);
          if ( v4 >= 0 && !*(_WORD *)a3 )
            return (unsigned int)-2147023288;
        }
      }
    }
  }
  return (unsigned int)v4;
}
