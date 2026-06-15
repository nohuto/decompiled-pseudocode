/*
 * XREFs of _CVolumeSoftware::LoadVolumeState_::_1_::dtor$2 @ 0x1800CCFB3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall CVolumeSoftware::LoadVolumeState_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::unique_struct<tagPROPVARIANT,long (*)(tagPROPVARIANT *),&long PropVariantClear(tagPROPVARIANT *),void (*)(tagPROPVARIANT *),&void PropVariantInit(tagPROPVARIANT *)>::~unique_struct<tagPROPVARIANT,long (*)(tagPROPVARIANT *),&long PropVariantClear(tagPROPVARIANT *),void (*)(tagPROPVARIANT *),&void PropVariantInit(tagPROPVARIANT *)>((PROPVARIANT *)(a2 + 72));
}
