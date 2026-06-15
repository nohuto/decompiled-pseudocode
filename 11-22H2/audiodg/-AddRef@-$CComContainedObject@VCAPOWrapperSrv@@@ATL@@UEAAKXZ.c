/*
 * XREFs of ?AddRef@?$CComContainedObject@VCAPOWrapperSrv@@@ATL@@UEAAKXZ @ 0x14004B980
 * Callers:
 *     ?AddRef@?$CComContainedObject@VCAPOWrapperSrv@@@ATL@@W7EAAKXZ @ 0x14002F230 (-AddRef@-$CComContainedObject@VCAPOWrapperSrv@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCAPOWrapperSrv@@@ATL@@WBA@EAAKXZ @ 0x14002F250 (-AddRef@-$CComContainedObject@VCAPOWrapperSrv@@@ATL@@WBA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCAPOWrapperSrv@@@ATL@@WBI@EAAKXZ @ 0x14002F270 (-AddRef@-$CComContainedObject@VCAPOWrapperSrv@@@ATL@@WBI@EAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComContainedObject<CAPOWrapperSrv>::AddRef(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 32) + 8LL))(*(_QWORD *)(a1 + 32));
}
