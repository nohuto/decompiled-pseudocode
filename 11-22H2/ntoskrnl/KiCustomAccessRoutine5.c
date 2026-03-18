/*
 * XREFs of KiCustomAccessRoutine5 @ 0x14042B250
 * Callers:
 *     CmpLazyFlushDpcRoutine @ 0x1403657A0 (CmpLazyFlushDpcRoutine.c)
 * Callees:
 *     KiCustomRecurseRoutine5 @ 0x14042B230 (KiCustomRecurseRoutine5.c)
 */

__int64 __fastcall KiCustomAccessRoutine5(unsigned int *a1)
{
  return KiCustomRecurseRoutine5(((unsigned __int8)a1 & 3u) + 1, a1);
}
