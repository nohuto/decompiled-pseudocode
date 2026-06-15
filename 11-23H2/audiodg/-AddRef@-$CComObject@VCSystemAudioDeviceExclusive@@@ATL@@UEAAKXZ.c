/*
 * XREFs of ?AddRef@?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAKXZ @ 0x1400573C0
 * Callers:
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@W7EAAKXZ @ 0x14002FA90 (-AddRef@-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@WBA@EAAKXZ @ 0x14002FAB0 (-AddRef@-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@WBA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@WBI@EAAKXZ @ 0x14002FAD0 (-AddRef@-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CSystemAudioDeviceExclusive>::AddRef(__int64 a1)
{
  return ATL::SafeIncrementReferenceMultiThread((int *)(a1 + 296));
}
