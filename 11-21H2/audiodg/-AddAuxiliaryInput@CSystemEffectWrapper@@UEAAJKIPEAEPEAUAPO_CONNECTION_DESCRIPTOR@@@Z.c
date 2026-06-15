/*
 * XREFs of ?AddAuxiliaryInput@CSystemEffectWrapper@@UEAAJKIPEAEPEAUAPO_CONNECTION_DESCRIPTOR@@@Z @ 0x14006CDE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x14006CF68 (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 */

__int64 __fastcall CSystemEffectWrapper::AddAuxiliaryInput(
        CSystemEffectWrapper *this,
        unsigned int a2,
        __int64 a3,
        unsigned __int8 *a4,
        struct APO_CONNECTION_DESCRIPTOR *a5)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, unsigned __int8 *, struct APO_CONNECTION_DESCRIPTOR *))(**((_QWORD **)this + 21) + 24LL))(
           *((_QWORD *)this + 21),
           a2,
           a3,
           a4,
           a5);
}
