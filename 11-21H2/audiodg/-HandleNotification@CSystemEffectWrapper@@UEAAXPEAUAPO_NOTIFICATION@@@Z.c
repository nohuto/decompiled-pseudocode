/*
 * XREFs of ?HandleNotification@CSystemEffectWrapper@@UEAAXPEAUAPO_NOTIFICATION@@@Z @ 0x14006D510
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x14006CF68 (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 */

void __fastcall CSystemEffectWrapper::HandleNotification(CSystemEffectWrapper *this, struct APO_NOTIFICATION *a2)
{
  (*(void (__fastcall **)(_QWORD, struct APO_NOTIFICATION *))(**((_QWORD **)this + 20) + 32LL))(
    *((_QWORD *)this + 20),
    a2);
}
