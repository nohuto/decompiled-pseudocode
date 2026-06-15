/*
 * XREFs of _CMonitorManager::EnableAudioMirroringOnEndpointIfAppropriate_::_1_::dtor$1 @ 0x18011B4EF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall CMonitorManager::EnableAudioMirroringOnEndpointIfAppropriate_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::unique_struct<tagPROPVARIANT,long (*)(tagPROPVARIANT *),&long PropVariantClear(tagPROPVARIANT *),void (*)(tagPROPVARIANT *),&void PropVariantInit(tagPROPVARIANT *)>::~unique_struct<tagPROPVARIANT,long (*)(tagPROPVARIANT *),&long PropVariantClear(tagPROPVARIANT *),void (*)(tagPROPVARIANT *),&void PropVariantInit(tagPROPVARIANT *)>((PROPVARIANT *)(a2 + 32));
}
