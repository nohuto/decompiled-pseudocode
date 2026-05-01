/*
 * XREFs of ?GetAsBoolean@PropVariant@wil@@QEBAJPEA_N@Z @ 0x18064D404
 * Callers:
 *     ??$GetAsBoolean@U_tagpropertykey@@@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpropertykey@@PEA_N@Z @ 0x18064C648 (--$GetAsBoolean@U_tagpropertykey@@@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpr.c)
 *     ?IsPlaceholderPin@TaskbarPinHelper@@YA_NPEFBU_ITEMIDLIST@@@Z @ 0x18075882C (-IsPlaceholderPin@TaskbarPinHelper@@YA_NPEFBU_ITEMIDLIST@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall wil::PropVariant::GetAsBoolean(const PROPVARIANT *this, bool *a2)
{
  HRESULT result; // eax
  BOOL pfRet; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0;
  pfRet = 0;
  if ( !*(_WORD *)this )
    return -2147023728;
  result = PropVariantToBoolean(this, &pfRet);
  if ( result >= 0 )
    *a2 = pfRet;
  return result;
}
