/*
 * XREFs of ?QueryInterface@?$CComContainedObject@VCVpoContext@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140066960
 * Callers:
 *     ?QueryInterface@?$CComContainedObject@VCVpoContext@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140030910 (-QueryInterface@-$CComContainedObject@VCVpoContext@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComContainedObject<CVpoContext>::QueryInterface(__int64 a1)
{
  return (***(__int64 (__fastcall ****)(_QWORD))(a1 + 16))(*(_QWORD *)(a1 + 16));
}
