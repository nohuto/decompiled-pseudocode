/*
 * XREFs of PopThermalStandbyEndTracking @ 0x14058FB98
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x1403A1854 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalCsEntry @ 0x14058F84C (PopThermalCsEntry.c)
 *     PopThermalCsExit @ 0x14058F8CC (PopThermalCsExit.c)
 *     PopThermalSxEntry @ 0x14058FC48 (PopThermalSxEntry.c)
 *     PopThermalStateTransitionWorker @ 0x1408651E0 (PopThermalStateTransitionWorker.c)
 * Callees:
 *     PopTraceThermalStandbyComplete @ 0x140595BE0 (PopTraceThermalStandbyComplete.c)
 */

__int64 __fastcall PopThermalStandbyEndTracking(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  LOBYTE(a3) = byte_140C3C6FC;
  result = 0LL;
  byte_140C3C6FC = 0;
  if ( byte_140C3C6FD )
  {
    byte_140C3C6FD = 0;
    return PopTraceThermalStandbyComplete(a1, (MEMORY[0xFFFFF78000000008] - qword_140C3C700) / 0x989680uLL, a3);
  }
  return result;
}
