/*
 * XREFs of RtlpFcChangeRegistrationCallback @ 0x1800AED50
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall RtlpFcChangeRegistrationCallback(PTP_CALLBACK_INSTANCE a1, _RTL_SRWLOCK *a2, PTP_WORK a3)
{
  RtlAcquireSRWLockExclusive(a2 + 4);
  ((void (__fastcall *)(unsigned __int64))a2[2].Value)(a2[3].Value);
  RtlReleaseSRWLockExclusive(a2 + 4);
}
