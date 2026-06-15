/*
 * XREFs of ?GetApoNotificationRegistrationInfo2@CSystemEffectWrapper@@UEAAJW4APO_NOTIFICATION_TYPE@@PEAPEAUAPO_NOTIFICATION_DESCRIPTOR@@PEAK@Z @ 0x140075890
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x14007570C (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 */

__int64 __fastcall CSystemEffectWrapper::GetApoNotificationRegistrationInfo2(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 184) + 40LL))(*(_QWORD *)(a1 + 184));
}
