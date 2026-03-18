/*
 * XREFs of KiCustomAccessRoutine0 @ 0x14042B790
 * Callers:
 *     ExpTimerDpcRoutine @ 0x140369EC0 (ExpTimerDpcRoutine.c)
 *     FsRtlTruncateSmallMcb @ 0x14066CF90 (FsRtlTruncateSmallMcb.c)
 * Callees:
 *     KiCustomRecurseRoutine0 @ 0x14042B770 (KiCustomRecurseRoutine0.c)
 */

__int64 __fastcall KiCustomAccessRoutine0(unsigned int *a1)
{
  return KiCustomRecurseRoutine0(((unsigned __int8)a1 & 3u) + 1, a1);
}
