/*
 * XREFs of ?QueryInterface@?$CComContainedObject@VCAPOWrapperSrv@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14004D800
 * Callers:
 *     ?QueryInterface@?$CComContainedObject@VCAPOWrapperSrv@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002F330 (-QueryInterface@-$CComContainedObject@VCAPOWrapperSrv@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComContainedObject@VCAPOWrapperSrv@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002F350 (-QueryInterface@-$CComContainedObject@VCAPOWrapperSrv@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComContainedObject@VCAPOWrapperSrv@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002F370 (-QueryInterface@-$CComContainedObject@VCAPOWrapperSrv@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComContainedObject<CAPOWrapperSrv>::QueryInterface(__int64 a1)
{
  return (***(__int64 (__fastcall ****)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 32));
}
