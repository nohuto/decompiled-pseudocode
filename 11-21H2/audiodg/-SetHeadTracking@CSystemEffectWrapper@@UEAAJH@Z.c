/*
 * XREFs of ?SetHeadTracking@CSystemEffectWrapper@@UEAAJH@Z @ 0x14006D890
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x14006CF68 (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 */

__int64 __fastcall CSystemEffectWrapper::SetHeadTracking(CSystemEffectWrapper *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 22) + 32LL))(*((_QWORD *)this + 22));
}
