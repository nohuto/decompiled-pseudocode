/*
 * XREFs of ExpRegisterCounterSet @ 0x140858E60
 * Callers:
 *     EtwRegisterCounters @ 0x140858B7C (EtwRegisterCounters.c)
 *     ExpPcwHostCallback @ 0x140858C50 (ExpPcwHostCallback.c)
 * Callees:
 *     PcwRegister @ 0x140873D80 (PcwRegister.c)
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
