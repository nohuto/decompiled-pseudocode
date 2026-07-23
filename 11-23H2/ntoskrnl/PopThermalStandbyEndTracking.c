/*
 * XREFs of PopThermalStandbyEndTracking @ 0x140590088
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x1403A1A34 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalCsEntry @ 0x14058FD3C (PopThermalCsEntry.c)
 *     PopThermalCsExit @ 0x14058FDBC (PopThermalCsExit.c)
 *     PopThermalSxEntry @ 0x140590138 (PopThermalSxEntry.c)
 *     PopThermalStateTransitionWorker @ 0x140865420 (PopThermalStateTransitionWorker.c)
 * Callees:
 *     PopTraceThermalStandbyComplete @ 0x1405960D0 (PopTraceThermalStandbyComplete.c)
 */

__int64 __fastcall PopThermalStandbyEndTracking(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  LOBYTE(a3) = byte_140C3C77C;
  result = 0LL;
  byte_140C3C77C = 0;
  if ( byte_140C3C77D )
  {
    byte_140C3C77D = 0;
    return PopTraceThermalStandbyComplete(a1, (MEMORY[0xFFFFF78000000008] - qword_140C3C780) / 0x989680uLL, a3);
  }
  return result;
}
