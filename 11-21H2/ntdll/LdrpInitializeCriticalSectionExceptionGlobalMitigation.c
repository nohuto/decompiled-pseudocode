/*
 * XREFs of LdrpInitializeCriticalSectionExceptionGlobalMitigation @ 0x1800DD130
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800DD27C (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtOpenKey @ 0x1800A42B0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A4350 (NtQueryValueKey.c)
 */

void LdrpInitializeCriticalSectionExceptionGlobalMitigation()
{
  int ValueKey; // ebx
  HANDLE Handle; // [rsp+30h] [rbp-78h]
  int v2; // [rsp+44h] [rbp-64h]
  int v3; // [rsp+48h] [rbp-60h]
  int v4; // [rsp+4Ch] [rbp-5Ch]

  if ( LdrpIsSecureProcess
    || (RtlpRaiseExceptionOnPossibleDeadlock = 0, (int)NtOpenKey() >= 0)
    && (ValueKey = NtQueryValueKey(), NtClose(Handle), ValueKey >= 0)
    && v2 == 4
    && v3 == 4
    && v4 )
  {
    RtlpRaiseExceptionOnPossibleDeadlock = 1;
  }
}
