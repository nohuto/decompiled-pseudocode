/*
 * XREFs of KiCustomAccessRoutine4 @ 0x14042B850
 * Callers:
 *     CmpEnableLazyFlushDpcRoutine @ 0x1403C6A40 (CmpEnableLazyFlushDpcRoutine.c)
 * Callees:
 *     KiCustomRecurseRoutine4 @ 0x14042B830 (KiCustomRecurseRoutine4.c)
 */

__int64 __fastcall KiCustomAccessRoutine4(unsigned int *a1)
{
  return KiCustomRecurseRoutine4(((unsigned __int8)a1 & 3u) + 1, a1);
}
