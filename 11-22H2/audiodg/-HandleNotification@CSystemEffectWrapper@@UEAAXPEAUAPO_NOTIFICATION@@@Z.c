/*
 * XREFs of ?HandleNotification@CSystemEffectWrapper@@UEAAXPEAUAPO_NOTIFICATION@@@Z @ 0x140039580
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x14007575C (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 */

void __fastcall CSystemEffectWrapper::HandleNotification(CSystemEffectWrapper *this, struct APO_NOTIFICATION *a2)
{
  (*(void (__fastcall **)(_QWORD, struct APO_NOTIFICATION *))(**((_QWORD **)this + 22) + 32LL))(
    *((_QWORD *)this + 22),
    a2);
}
