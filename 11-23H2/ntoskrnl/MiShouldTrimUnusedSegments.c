/*
 * XREFs of MiShouldTrimUnusedSegments @ 0x14046BB28
 * Callers:
 *     MiCheckControlArea @ 0x14029FBC0 (MiCheckControlArea.c)
 *     MiFreeExcessSegments @ 0x140624A1C (MiFreeExcessSegments.c)
 *     MiRemoveUnusedSegments @ 0x140625B24 (MiRemoveUnusedSegments.c)
 * Callees:
 *     <none>
 */

__int64 MiShouldTrimUnusedSegments()
{
  unsigned int v0; // r9d

  v0 = 0;
  if ( !qword_140C65558 )
    return 0LL;
  LOBYTE(v0) = (unsigned __int64)qword_140C65558 >> 12 > 3 * (qword_140C6F9D8 / 0x64uLL);
  return v0;
}
