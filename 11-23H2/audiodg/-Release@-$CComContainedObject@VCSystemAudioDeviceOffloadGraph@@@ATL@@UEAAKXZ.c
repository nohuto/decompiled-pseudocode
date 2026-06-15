/*
 * XREFs of ?Release@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAKXZ @ 0x14005BBC0
 * Callers:
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@W7EAAKXZ @ 0x140030610 (-Release@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBA@EAAKXZ @ 0x140030630 (-Release@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBA@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBCI@EAAKXZ @ 0x140030650 (-Release@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBCI@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBDA@EAAKXZ @ 0x140030670 (-Release@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBDA@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBHA@EAAKXZ @ 0x140030690 (-Release@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBHA@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBHI@EAAKXZ @ 0x1400306B0 (-Release@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBHI@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBI@EAAKXZ @ 0x1400306D0 (-Release@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBI@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBIA@EAAKXZ @ 0x1400306F0 (-Release@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBIA@EAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComContainedObject<CSystemAudioDeviceOffloadGraph>::Release(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 392) + 16LL))(*(_QWORD *)(a1 + 392));
}
