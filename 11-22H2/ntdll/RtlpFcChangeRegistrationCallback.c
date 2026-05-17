/*
 * XREFs of RtlpFcChangeRegistrationCallback @ 0x1800AED50
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 */

signed __int64 __fastcall RtlpFcChangeRegistrationCallback(__int64 a1, __int64 a2)
{
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a2 + 32));
  (*(void (__fastcall **)(_QWORD))(a2 + 16))(*(_QWORD *)(a2 + 24));
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 32));
}
