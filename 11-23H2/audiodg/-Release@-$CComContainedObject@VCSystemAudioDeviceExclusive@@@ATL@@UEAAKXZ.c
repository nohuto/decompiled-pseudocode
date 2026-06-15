/*
 * XREFs of ?Release@?$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAKXZ @ 0x1400583B0
 * Callers:
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@W7EAAKXZ @ 0x14002FCB0 (-Release@-$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@WBA@EAAKXZ @ 0x14002FCD0 (-Release@-$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@WBA@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@WBI@EAAKXZ @ 0x14002FCF0 (-Release@-$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@WBI@EAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComContainedObject<CSystemAudioDeviceExclusive>::Release(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 296) + 16LL))(*(_QWORD *)(a1 + 296));
}
