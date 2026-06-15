/*
 * XREFs of ?Release@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@UEAAKXZ @ 0x14005A790
 * Callers:
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@W7EAAKXZ @ 0x1400300D0 (-Release@-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBA@EAAKXZ @ 0x1400300F0 (-Release@-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBA@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBCI@EAAKXZ @ 0x140030110 (-Release@-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBCI@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBDA@EAAKXZ @ 0x140030130 (-Release@-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBDA@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBI@EAAKXZ @ 0x140030150 (-Release@-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBI@EAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComContainedObject<CSystemAudioDeviceShared>::Release(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 368) + 16LL))(*(_QWORD *)(a1 + 368));
}
