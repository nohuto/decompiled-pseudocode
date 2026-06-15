/*
 * XREFs of ?SetMetadata@CSystemEffectWrapper@@UEAAJPEBUAMBISONICS_PARAMS@@@Z @ 0x14006D950
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x14006CF68 (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 */

__int64 __fastcall CSystemEffectWrapper::SetMetadata(CSystemEffectWrapper *this, const struct AMBISONICS_PARAMS *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, const struct AMBISONICS_PARAMS *))(**((_QWORD **)this + 22) + 24LL))(
           *((_QWORD *)this + 22),
           a2);
}
