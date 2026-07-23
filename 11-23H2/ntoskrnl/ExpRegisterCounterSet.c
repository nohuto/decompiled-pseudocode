/*
 * XREFs of ExpRegisterCounterSet @ 0x1408590A0
 * Callers:
 *     EtwRegisterCounters @ 0x140858DBC (EtwRegisterCounters.c)
 *     ExpPcwHostCallback @ 0x140858E90 (ExpPcwHostCallback.c)
 * Callees:
 *     PcwRegister @ 0x140873FC0 (PcwRegister.c)
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
