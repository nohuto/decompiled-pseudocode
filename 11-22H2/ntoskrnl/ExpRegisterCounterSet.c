/*
 * XREFs of ExpRegisterCounterSet @ 0x140859ED0
 * Callers:
 *     EtwRegisterCounters @ 0x140859BEC (EtwRegisterCounters.c)
 *     ExpPcwHostCallback @ 0x140859CC0 (ExpPcwHostCallback.c)
 * Callees:
 *     PcwRegister @ 0x140874250 (PcwRegister.c)
 */

NTSTATUS __fastcall ExpRegisterCounterSet(PPCW_REGISTRATION *Registration, PPCW_REGISTRATION_INFORMATION Info)
{
  NTSTATUS result; // eax

  result = PcwRegister(Registration, Info);
  if ( result == -1073741584 )
  {
    Info->Version = 256;
    return PcwRegister(Registration, Info);
  }
  return result;
}
