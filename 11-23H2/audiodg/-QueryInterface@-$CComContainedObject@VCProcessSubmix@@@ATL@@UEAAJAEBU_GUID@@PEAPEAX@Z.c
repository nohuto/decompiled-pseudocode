/*
 * XREFs of ?QueryInterface@?$CComContainedObject@VCProcessSubmix@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140069450
 * Callers:
 *     ?QueryInterface@?$CComContainedObject@VCProcessSubmix@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140030B10 (-QueryInterface@-$CComContainedObject@VCProcessSubmix@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComContainedObject@VCProcessSubmix@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140030B30 (-QueryInterface@-$CComContainedObject@VCProcessSubmix@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComContainedObject<CProcessSubmix>::QueryInterface(__int64 a1)
{
  return (***(__int64 (__fastcall ****)(_QWORD))(a1 + 336))(*(_QWORD *)(a1 + 336));
}
