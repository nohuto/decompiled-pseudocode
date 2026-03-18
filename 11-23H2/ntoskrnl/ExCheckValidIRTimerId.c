/*
 * XREFs of ExCheckValidIRTimerId @ 0x14036F64C
 * Callers:
 *     KeInitializeIRTimer @ 0x14036F5F8 (KeInitializeIRTimer.c)
 *     ExpCheckIRTimerAccess @ 0x1407EBA64 (ExpCheckIRTimerAccess.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExCheckValidIRTimerId(unsigned __int16 a1, unsigned __int16 a2)
{
  return a1 < 0x11u && a2 < LOBYTE(qword_140002600[3 * a1]);
}
