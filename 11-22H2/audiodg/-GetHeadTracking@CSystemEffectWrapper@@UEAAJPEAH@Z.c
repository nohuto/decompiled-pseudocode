/*
 * XREFs of ?GetHeadTracking@CSystemEffectWrapper@@UEAAJPEAH@Z @ 0x140075CB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x14007575C (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 */

__int64 __fastcall CSystemEffectWrapper::GetHeadTracking(CSystemEffectWrapper *this, int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 24) + 40LL))(*((_QWORD *)this + 24), a2);
}
