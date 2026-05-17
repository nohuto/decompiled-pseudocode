/*
 * XREFs of LdrpInitializeSmtDelayedSleep @ 0x18007F7A4
 * Callers:
 *     LdrpInitializeProcess @ 0x1800DDBD0 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpInitializeSmtDelayedSleepQueryRegistry @ 0x18007F85C (LdrpInitializeSmtDelayedSleepQueryRegistry.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtOpenKey @ 0x1800A10F0 (NtOpenKey.c)
 */

NTSTATUS LdrpInitializeSmtDelayedSleep()
{
  NTSTATUS result; // eax
  HANDLE Handle; // [rsp+30h] [rbp+8h] BYREF

  Handle = 0LL;
  result = NtOpenKey(&Handle, 1LL, &unk_180133920);
  if ( result >= 0 )
  {
    LdrpInitializeSmtDelayedSleepQueryRegistry(Handle, L"68", &SmtDelayedConfiguration);
    LdrpInitializeSmtDelayedSleepQueryRegistry(Handle, L"46", &dword_180186024);
    LdrpInitializeSmtDelayedSleepQueryRegistry(Handle, L"\"$", &dword_180186028);
    LdrpInitializeSmtDelayedSleepQueryRegistry(Handle, &unk_180133910, &dword_18018602C);
    result = LdrpInitializeSmtDelayedSleepQueryRegistry(Handle, L" \"", &dword_180186030);
  }
  if ( Handle )
    return NtClose(Handle);
  return result;
}
