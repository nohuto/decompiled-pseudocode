/*
 * XREFs of KiGetSs @ 0x140B133F0
 * Callers:
 *     sub_1403E5A20 @ 0x1403E5A20 (sub_1403E5A20.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140AFA010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     <none>
 */

__int16 KiGetSs()
{
  return __SS__;
}
