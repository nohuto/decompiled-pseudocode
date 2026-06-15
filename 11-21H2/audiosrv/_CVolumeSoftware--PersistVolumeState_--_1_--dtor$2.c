/*
 * XREFs of _CVolumeSoftware::PersistVolumeState_::_1_::dtor$2 @ 0x1800CD79E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall CVolumeSoftware::PersistVolumeState_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::unique_struct<tagPROPVARIANT,long (*)(tagPROPVARIANT *),&long PropVariantClear(tagPROPVARIANT *),void (*)(tagPROPVARIANT *),&void PropVariantInit(tagPROPVARIANT *)>::~unique_struct<tagPROPVARIANT,long (*)(tagPROPVARIANT *),&long PropVariantClear(tagPROPVARIANT *),void (*)(tagPROPVARIANT *),&void PropVariantInit(tagPROPVARIANT *)>((PROPVARIANT *)(a2 + 48));
}
