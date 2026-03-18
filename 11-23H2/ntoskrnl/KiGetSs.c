/*
 * XREFs of KiGetSs @ 0x140B133F0
 * Callers:
 *     sub_1403E5840 @ 0x1403E5840 (sub_1403E5840.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140AFA010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     <none>
 */

__int16 KiGetSs()
{
  return __SS__;
}
