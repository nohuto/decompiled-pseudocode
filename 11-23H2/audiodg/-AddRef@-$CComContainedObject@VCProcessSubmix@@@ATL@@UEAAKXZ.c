/*
 * XREFs of ?AddRef@?$CComContainedObject@VCProcessSubmix@@@ATL@@UEAAKXZ @ 0x140069130
 * Callers:
 *     ?AddRef@?$CComContainedObject@VCProcessSubmix@@@ATL@@W7EAAKXZ @ 0x140030990 (-AddRef@-$CComContainedObject@VCProcessSubmix@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCProcessSubmix@@@ATL@@WBA@EAAKXZ @ 0x1400309B0 (-AddRef@-$CComContainedObject@VCProcessSubmix@@@ATL@@WBA@EAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComContainedObject<CProcessSubmix>::AddRef(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 336) + 8LL))(*(_QWORD *)(a1 + 336));
}
