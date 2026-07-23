/*
 * XREFs of KeSetTimer @ 0x1402E2C40
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402E2D20 @ 0x1402E2D20 (sub_1402E2D20.c)
 */

BOOLEAN __stdcall KeSetTimer(PKTIMER Timer, LARGE_INTEGER DueTime, PKDPC Dpc)
{
  return sub_1402E2D20((_DWORD)Timer, DueTime.LowPart, 0, 0, (__int64)Dpc);
}
