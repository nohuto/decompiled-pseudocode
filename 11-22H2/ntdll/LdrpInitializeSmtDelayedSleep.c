/*
 * XREFs of LdrpInitializeSmtDelayedSleep @ 0x18007F134
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpInitializeSmtDelayedSleepQueryRegistry @ 0x18007F1EC (LdrpInitializeSmtDelayedSleepQueryRegistry.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtOpenKey @ 0x18009F030 (NtOpenKey.c)
 */

int LdrpInitializeSmtDelayedSleep()
{
  int result; // eax
  HANDLE KeyHandle; // [rsp+30h] [rbp+8h] BYREF

  KeyHandle = 0LL;
  result = NtOpenKey(&KeyHandle, 1u, (POBJECT_ATTRIBUTES)&stru_180131930);
  if ( result >= 0 )
  {
    LdrpInitializeSmtDelayedSleepQueryRegistry(KeyHandle, L"68", &SmtDelayedConfiguration);
    LdrpInitializeSmtDelayedSleepQueryRegistry(KeyHandle, L"46", &dword_180182F84);
    LdrpInitializeSmtDelayedSleepQueryRegistry(KeyHandle, L"\"$", &dword_180182F88);
    LdrpInitializeSmtDelayedSleepQueryRegistry(KeyHandle, &unk_180131910, &dword_180182F8C);
    result = LdrpInitializeSmtDelayedSleepQueryRegistry(KeyHandle, L" \"", &dword_180182F90);
  }
  if ( KeyHandle )
    return NtClose(KeyHandle);
  return result;
}
