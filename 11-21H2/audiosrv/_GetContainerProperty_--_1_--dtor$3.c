/*
 * XREFs of _GetContainerProperty_::_1_::dtor$3 @ 0x1801006D1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall GetContainerProperty_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::unique_struct<tagPROPVARIANT,long (*)(tagPROPVARIANT *),&long PropVariantClear(tagPROPVARIANT *),void (*)(tagPROPVARIANT *),&void PropVariantInit(tagPROPVARIANT *)>::~unique_struct<tagPROPVARIANT,long (*)(tagPROPVARIANT *),&long PropVariantClear(tagPROPVARIANT *),void (*)(tagPROPVARIANT *),&void PropVariantInit(tagPROPVARIANT *)>((PROPVARIANT *)(a2 + 72));
}
