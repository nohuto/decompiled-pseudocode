/*
 * XREFs of LdrpInitializeSmtDelayedSleep @ 0x18007F7A4
 * Callers:
 *     LdrpInitializeProcess @ 0x1800DDBD0 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpInitializeSmtDelayedSleepQueryRegistry @ 0x18007F85C (LdrpInitializeSmtDelayedSleepQueryRegistry.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtOpenKey @ 0x1800A10F0 (NtOpenKey.c)
 */

int LdrpInitializeSmtDelayedSleep()
{
  int result; // eax
  HANDLE KeyHandle; // [rsp+30h] [rbp+8h] BYREF

  KeyHandle = 0LL;
  result = NtOpenKey(&KeyHandle, 1u, (POBJECT_ATTRIBUTES)&stru_180133920);
  if ( result >= 0 )
  {
    LdrpInitializeSmtDelayedSleepQueryRegistry(KeyHandle, L"68", &SmtDelayedConfiguration);
    LdrpInitializeSmtDelayedSleepQueryRegistry(KeyHandle, L"46", &dword_180186024);
    LdrpInitializeSmtDelayedSleepQueryRegistry(KeyHandle, L"\"$", &dword_180186028);
    LdrpInitializeSmtDelayedSleepQueryRegistry(KeyHandle, &unk_180133910, &dword_18018602C);
    result = LdrpInitializeSmtDelayedSleepQueryRegistry(KeyHandle, L" \"", &dword_180186030);
  }
  if ( KeyHandle )
    return NtClose(KeyHandle);
  return result;
}
