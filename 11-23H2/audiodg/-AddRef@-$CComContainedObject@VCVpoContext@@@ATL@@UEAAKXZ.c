/*
 * XREFs of ?AddRef@?$CComContainedObject@VCVpoContext@@@ATL@@UEAAKXZ @ 0x1400663C0
 * Callers:
 *     ?AddRef@?$CComContainedObject@VCVpoContext@@@ATL@@W7EAAKXZ @ 0x1400308F0 (-AddRef@-$CComContainedObject@VCVpoContext@@@ATL@@W7EAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComContainedObject<CVpoContext>::AddRef(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 8LL))(*(_QWORD *)(a1 + 16));
}
