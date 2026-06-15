/*
 * XREFs of ?Release@?$CComContainedObject@VCVpoContext@@@ATL@@UEAAKXZ @ 0x140066AC0
 * Callers:
 *     ?Release@?$CComContainedObject@VCVpoContext@@@ATL@@W7EAAKXZ @ 0x140030950 (-Release@-$CComContainedObject@VCVpoContext@@@ATL@@W7EAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComContainedObject<CVpoContext>::Release(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 16LL))(*(_QWORD *)(a1 + 16));
}
