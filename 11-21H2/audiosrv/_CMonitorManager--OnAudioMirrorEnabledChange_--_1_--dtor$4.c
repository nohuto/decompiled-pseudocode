/*
 * XREFs of _CMonitorManager::OnAudioMirrorEnabledChange_::_1_::dtor$4 @ 0x18011CEEA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall CMonitorManager::OnAudioMirrorEnabledChange_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return wil::unique_struct<tagPROPVARIANT,long (*)(tagPROPVARIANT *),&long PropVariantClear(tagPROPVARIANT *),void (*)(tagPROPVARIANT *),&void PropVariantInit(tagPROPVARIANT *)>::~unique_struct<tagPROPVARIANT,long (*)(tagPROPVARIANT *),&long PropVariantClear(tagPROPVARIANT *),void (*)(tagPROPVARIANT *),&void PropVariantInit(tagPROPVARIANT *)>((PROPVARIANT *)(a2 + 80));
}
