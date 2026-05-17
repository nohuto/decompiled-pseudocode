/*
 * XREFs of LdrpInitializeSmtDelayedSleep @ 0x18007F134
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpInitializeSmtDelayedSleepQueryRegistry @ 0x18007F1EC (LdrpInitializeSmtDelayedSleepQueryRegistry.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtOpenKey @ 0x18009F030 (NtOpenKey.c)
 */

NTSTATUS LdrpInitializeSmtDelayedSleep()
{
  NTSTATUS result; // eax
  HANDLE Handle; // [rsp+30h] [rbp+8h] BYREF

  Handle = 0LL;
  result = NtOpenKey(&Handle, 1LL, &unk_180131930);
  if ( result >= 0 )
  {
    LdrpInitializeSmtDelayedSleepQueryRegistry(Handle, L"68", &SmtDelayedConfiguration);
    LdrpInitializeSmtDelayedSleepQueryRegistry(Handle, L"46", &dword_180182F84);
    LdrpInitializeSmtDelayedSleepQueryRegistry(Handle, L"\"$", &dword_180182F88);
    LdrpInitializeSmtDelayedSleepQueryRegistry(Handle, &unk_180131910, &dword_180182F8C);
    result = LdrpInitializeSmtDelayedSleepQueryRegistry(Handle, L" \"", &dword_180182F90);
  }
  if ( Handle )
    return NtClose(Handle);
  return result;
}
