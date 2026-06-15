/*
 * XREFs of ?QueryInterface@?$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140056200
 * Callers:
 *     ?QueryInterface@?$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140032B90 (-QueryInterface@-$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@W7EAAJAEBU_GUID@@PEAPE.c)
 *     ?QueryInterface@?$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140032BB0 (-QueryInterface@-$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@WBA@EAAJAEBU_GUID@@PEA.c)
 *     ?QueryInterface@?$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140032BD0 (-QueryInterface@-$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@WBI@EAAJAEBU_GUID@@PEA.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComContainedObject<CSystemAudioDeviceExclusive>::QueryInterface(__int64 a1)
{
  return (***(__int64 (__fastcall ****)(_QWORD))(a1 + 296))(*(_QWORD *)(a1 + 296));
}
