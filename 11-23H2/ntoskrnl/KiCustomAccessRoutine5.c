/*
 * XREFs of KiCustomAccessRoutine5 @ 0x14042B910
 * Callers:
 *     CmpLazyFlushDpcRoutine @ 0x140365DF0 (CmpLazyFlushDpcRoutine.c)
 * Callees:
 *     KiCustomRecurseRoutine5 @ 0x14042B8F0 (KiCustomRecurseRoutine5.c)
 */

__int64 __fastcall KiCustomAccessRoutine5(unsigned int *a1)
{
  return KiCustomRecurseRoutine5(((unsigned __int8)a1 & 3u) + 1, a1);
}
