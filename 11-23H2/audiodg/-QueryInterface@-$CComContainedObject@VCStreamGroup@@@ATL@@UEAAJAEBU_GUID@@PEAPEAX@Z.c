/*
 * XREFs of ?QueryInterface@?$CComContainedObject@VCStreamGroup@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140051C10
 * Callers:
 *     ?QueryInterface@?$CComContainedObject@VCStreamGroup@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002F7F0 (-QueryInterface@-$CComContainedObject@VCStreamGroup@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComContainedObject@VCStreamGroup@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002F810 (-QueryInterface@-$CComContainedObject@VCStreamGroup@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComContainedObject@VCStreamGroup@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002F830 (-QueryInterface@-$CComContainedObject@VCStreamGroup@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComContainedObject<CStreamGroup>::QueryInterface(__int64 a1)
{
  return (***(__int64 (__fastcall ****)(_QWORD))(a1 + 344))(*(_QWORD *)(a1 + 344));
}
