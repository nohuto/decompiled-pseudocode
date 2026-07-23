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
  NTSTATUS v0; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-78h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-70h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+40h] [rbp-68h] BYREF
  int v4; // [rsp+44h] [rbp-64h]
  int v5; // [rsp+48h] [rbp-60h]
  int v6; // [rsp+4Ch] [rbp-5Ch]

  if ( LdrpIsSecureProcess
    || (RtlpRaiseExceptionOnPossibleDeadlock = 0, NtOpenKey(&KeyHandle, 1u, (POBJECT_ATTRIBUTES)&stru_18012D618) >= 0)
    && (v0 = NtQueryValueKey(
               KeyHandle,
               (PUNICODE_STRING)&stru_18012D5D8,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x50u,
               &ResultLength),
        NtClose(KeyHandle),
        v0 >= 0)
    && v4 == 4
    && v5 == 4
    && v6 )
  {
    RtlpRaiseExceptionOnPossibleDeadlock = 1;
  }
}
