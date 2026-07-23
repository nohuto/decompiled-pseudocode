/*
 * XREFs of KiCustomAccessRoutine1 @ 0x14042B5E0
 * Callers:
 *     IopTimerDispatch @ 0x140556360 (IopTimerDispatch.c)
 * Callees:
 *     KiCustomRecurseRoutine1 @ 0x14042B5C0 (KiCustomRecurseRoutine1.c)
 */

__int64 __fastcall KiCustomAccessRoutine1(unsigned int *a1)
{
  return KiCustomRecurseRoutine1(((unsigned __int8)a1 & 3u) + 1, a1);
}
