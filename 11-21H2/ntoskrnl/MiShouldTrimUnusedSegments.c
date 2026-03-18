/*
 * XREFs of MiShouldTrimUnusedSegments @ 0x14058C2E4
 * Callers:
 *     MiFreeExcessSegments @ 0x1402878F0 (MiFreeExcessSegments.c)
 *     MiRemoveUnusedSegments @ 0x14058BEE4 (MiRemoveUnusedSegments.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiShouldTrimUnusedSegments()
{
  return qword_140C4F118 && (unsigned __int64)qword_140C4F118 >> 12 > 3 * (qword_140C593D8 / 0x64uLL);
}
