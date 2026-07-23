/*
 * XREFs of KiCustomAccessRoutine5 @ 0x14042BCA0
 * Callers:
 *     CmpLazyFlushDpcRoutine @ 0x140365F90 (CmpLazyFlushDpcRoutine.c)
 * Callees:
 *     KiCustomRecurseRoutine5 @ 0x14042BC80 (KiCustomRecurseRoutine5.c)
 */

__int64 __fastcall KiCustomAccessRoutine5(unsigned int *a1)
{
  return KiCustomRecurseRoutine5(((unsigned __int8)a1 & 3u) + 1, a1);
}
