/*
 * XREFs of LdrpInitializeSmtDelayedSleep @ 0x180083288
 * Callers:
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpInitializeSmtDelayedSleepQueryRegistry @ 0x180083340 (LdrpInitializeSmtDelayedSleepQueryRegistry.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtOpenKey @ 0x1800A42B0 (NtOpenKey.c)
 */

int LdrpInitializeSmtDelayedSleep()
{
  int result; // eax
  HANDLE KeyHandle; // [rsp+30h] [rbp+8h] BYREF

  KeyHandle = 0LL;
  result = NtOpenKey(&KeyHandle, 1u, (POBJECT_ATTRIBUTES)&stru_18012C820);
  if ( result >= 0 )
  {
    LdrpInitializeSmtDelayedSleepQueryRegistry(KeyHandle, L"68", &SmtDelayedConfiguration);
    LdrpInitializeSmtDelayedSleepQueryRegistry(KeyHandle, L"46", &dword_180178D04);
    LdrpInitializeSmtDelayedSleepQueryRegistry(KeyHandle, L"\"$", &dword_180178D08);
    LdrpInitializeSmtDelayedSleepQueryRegistry(KeyHandle, &unk_18012C7E0, &dword_180178D0C);
    result = LdrpInitializeSmtDelayedSleepQueryRegistry(KeyHandle, L" \"", &dword_180178D10);
  }
  if ( KeyHandle )
    return NtClose(KeyHandle);
  return result;
}
