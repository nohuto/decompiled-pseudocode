/*
 * XREFs of WINRT_IMPL_CoGetApartmentType @ 0x180189C5E
 * Callers:
 *     ?get_apartment_type@impl@winrt@@YA?AU?$pair@HH@std@@XZ @ 0x180101A10 (-get_apartment_type@impl@winrt@@YA-AU-$pair@HH@std@@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall WINRT_IMPL_CoGetApartmentType(APTTYPE *pAptType, APTTYPEQUALIFIER *pAptQualifier)
{
  return CoGetApartmentType(pAptType, pAptQualifier);
}
