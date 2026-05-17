/*
 * XREFs of AVrfInternalHeapFreeNotification @ 0x1800E5910
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003B5D0 (RtlLeaveCriticalSection.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 */

struct _PEB *__fastcall AVrfInternalHeapFreeNotification(__int64 a1, __int64 a2)
{
  struct _PEB *result; // rax
  __int64 *v5; // rbx
  void (__fastcall *v6)(__int64, __int64); // rax

  result = NtCurrentPeb();
  if ( (result->NtGlobalFlag & 0x100) != 0 && AVrfpEnabled )
  {
    RtlEnterCriticalSection((__int64)&AVrfpVerifierLock);
    v5 = (__int64 *)AVrfpVerifierProvidersList;
    while ( v5 != &AVrfpVerifierProvidersList )
    {
      v6 = (void (__fastcall *)(__int64, __int64))v5[8];
      v5 = (__int64 *)*v5;
      if ( v6 )
        v6(a1, a2);
    }
    return (struct _PEB *)RtlLeaveCriticalSection((__int64)&AVrfpVerifierLock);
  }
  return result;
}
