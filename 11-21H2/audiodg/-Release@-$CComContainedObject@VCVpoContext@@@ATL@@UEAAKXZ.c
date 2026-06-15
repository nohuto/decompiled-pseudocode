/*
 * XREFs of ?Release@?$CComContainedObject@VCVpoContext@@@ATL@@UEAAKXZ @ 0x140061DF0
 * Callers:
 *     ?Release@?$CComContainedObject@VCVpoContext@@@ATL@@W7EAAKXZ @ 0x140033990 (-Release@-$CComContainedObject@VCVpoContext@@@ATL@@W7EAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComContainedObject<CVpoContext>::Release(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 16LL))(*(_QWORD *)(a1 + 16));
}
