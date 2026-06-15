/*
 * XREFs of _CEndpointCharacteristics::RediscoverProcessingModeCharacteristics_::_1_::dtor$0 @ 0x18014BA91
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall CEndpointCharacteristics::RediscoverProcessingModeCharacteristics_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  return wil::unique_struct<tagPROPVARIANT,long (*)(tagPROPVARIANT *),&long PropVariantClear(tagPROPVARIANT *),void (*)(tagPROPVARIANT *),&void PropVariantInit(tagPROPVARIANT *)>::~unique_struct<tagPROPVARIANT,long (*)(tagPROPVARIANT *),&long PropVariantClear(tagPROPVARIANT *),void (*)(tagPROPVARIANT *),&void PropVariantInit(tagPROPVARIANT *)>((PROPVARIANT *)(a2 + 32));
}
