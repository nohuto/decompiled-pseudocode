/*
 * XREFs of ?QueryInterface@?$CComContainedObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14004D830
 * Callers:
 *     ?QueryInterface@?$CComContainedObject@VCStreamInstance@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002F390 (-QueryInterface@-$CComContainedObject@VCStreamInstance@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComContainedObject@VCStreamInstance@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002F3B0 (-QueryInterface@-$CComContainedObject@VCStreamInstance@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComContainedObject<CAudioDeviceGraph>::QueryInterface(__int64 a1)
{
  return (***(__int64 (__fastcall ****)(_QWORD))(a1 + 24))(*(_QWORD *)(a1 + 24));
}
