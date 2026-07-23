/*
 * XREFs of NtSetSystemPowerState @ 0x140AA66C0
 * Callers:
 *     NtShutdownSystem @ 0x140606DF0 (NtShutdownSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA8F60 (PopTransitionSystemPowerStateEx.c)
 */

NTSTATUS __cdecl NtSetSystemPowerState(POWER_ACTION SystemAction, SYSTEM_POWER_STATE LightestSystemState, ULONG Flags)
{
  _DWORD v7[96]; // [rsp+20h] [rbp-1A8h] BYREF

  memset(&v7[3], 0, 0x174uLL);
  v7[0] = SystemAction;
  v7[1] = LightestSystemState;
  v7[2] = Flags;
  return PopTransitionSystemPowerStateEx(v7);
}
