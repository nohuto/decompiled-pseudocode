/*
 * XREFs of KiCustomAccessRoutine4 @ 0x14042BBE0
 * Callers:
 *     CmpEnableLazyFlushDpcRoutine @ 0x1403C6C20 (CmpEnableLazyFlushDpcRoutine.c)
 * Callees:
 *     KiCustomRecurseRoutine4 @ 0x14042BBC0 (KiCustomRecurseRoutine4.c)
 */

__int64 __fastcall KiCustomAccessRoutine4(unsigned int *a1)
{
  return KiCustomRecurseRoutine4(((unsigned __int8)a1 & 3u) + 1, a1);
}
