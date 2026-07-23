/*
 * XREFs of ExCheckValidIRTimerId @ 0x14036F7EC
 * Callers:
 *     KeInitializeIRTimer @ 0x14036F798 (KeInitializeIRTimer.c)
 *     ExpCheckIRTimerAccess @ 0x1407EBD34 (ExpCheckIRTimerAccess.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExCheckValidIRTimerId(unsigned __int16 a1, unsigned __int16 a2)
{
  return a1 < 0x11u && a2 < LOBYTE(qword_140002600[3 * a1]);
}
