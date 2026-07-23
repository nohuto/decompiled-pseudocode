/*
 * XREFs of KiCustomAccessRoutine0 @ 0x14042BB20
 * Callers:
 *     ExpTimerDpcRoutine @ 0x14036A060 (ExpTimerDpcRoutine.c)
 *     FsRtlTruncateSmallMcb @ 0x14066D4E0 (FsRtlTruncateSmallMcb.c)
 * Callees:
 *     KiCustomRecurseRoutine0 @ 0x14042BB00 (KiCustomRecurseRoutine0.c)
 */

__int64 __fastcall KiCustomAccessRoutine0(unsigned int *a1)
{
  return KiCustomRecurseRoutine0(((unsigned __int8)a1 & 3u) + 1, a1);
}
