/*
 * XREFs of ?GetApoNotificationRegistrationInfo@CSystemEffectWrapper@@UEAAJPEAPEAUAPO_NOTIFICATION_DESCRIPTOR@@PEAK@Z @ 0x14002D2F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x14006CF68 (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 */

__int64 __fastcall CSystemEffectWrapper::GetApoNotificationRegistrationInfo(
        CSystemEffectWrapper *this,
        struct APO_NOTIFICATION_DESCRIPTOR **a2,
        unsigned int *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct APO_NOTIFICATION_DESCRIPTOR **, unsigned int *))(**((_QWORD **)this + 20)
                                                                                                  + 24LL))(
           *((_QWORD *)this + 20),
           a2,
           a3);
}
