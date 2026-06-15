/*
 * XREFs of ?Release@?$CComContainedObject@VCProcessSubmix@@@ATL@@UEAAKXZ @ 0x1400694D0
 * Callers:
 *     ?Release@?$CComContainedObject@VCProcessSubmix@@@ATL@@W7EAAKXZ @ 0x140030BD0 (-Release@-$CComContainedObject@VCProcessSubmix@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCProcessSubmix@@@ATL@@WBA@EAAKXZ @ 0x140030BF0 (-Release@-$CComContainedObject@VCProcessSubmix@@@ATL@@WBA@EAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComContainedObject<CProcessSubmix>::Release(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 336) + 16LL))(*(_QWORD *)(a1 + 336));
}
