/*
 * XREFs of _CEndpointCharacteristics::RefreshConnectorFormats_::_1_::dtor$1 @ 0x18014BC33
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall CEndpointCharacteristics::RefreshConnectorFormats_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::unique_struct<tagPROPVARIANT,long (*)(tagPROPVARIANT *),&long PropVariantClear(tagPROPVARIANT *),void (*)(tagPROPVARIANT *),&void PropVariantInit(tagPROPVARIANT *)>::~unique_struct<tagPROPVARIANT,long (*)(tagPROPVARIANT *),&long PropVariantClear(tagPROPVARIANT *),void (*)(tagPROPVARIANT *),&void PropVariantInit(tagPROPVARIANT *)>((PROPVARIANT *)(a2 + 48));
}
