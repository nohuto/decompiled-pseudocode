/*
 * XREFs of ?QueryInterface@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14005A7B0
 * Callers:
 *     ?QueryInterface@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002FFD0 (-QueryInterface@-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@.c)
 *     ?QueryInterface@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002FFF0 (-QueryInterface@-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEA.c)
 *     ?QueryInterface@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140030010 (-QueryInterface@-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBCI@EAAJAEBU_GUID@@PEAPE.c)
 *     ?QueryInterface@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140030030 (-QueryInterface@-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBDA@EAAJAEBU_GUID@@PEAPE.c)
 *     ?QueryInterface@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140030050 (-QueryInterface@-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEA.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComContainedObject<CSystemAudioDeviceShared>::QueryInterface(__int64 a1)
{
  return (***(__int64 (__fastcall ****)(_QWORD))(a1 + 368))(*(_QWORD *)(a1 + 368));
}
