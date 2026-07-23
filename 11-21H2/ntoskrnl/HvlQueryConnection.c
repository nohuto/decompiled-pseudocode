/*
 * XREFs of HvlQueryConnection @ 0x1403AC4C0
 * Callers:
 *     sub_140296DC0 @ 0x140296DC0 (sub_140296DC0.c)
 *     sub_140814C74 @ 0x140814C74 (sub_140814C74.c)
 *     sub_140824AA0 @ 0x140824AA0 (sub_140824AA0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlQueryConnection(_QWORD *a1)
{
  if ( !qword_140E01850 )
    return 3221225473LL;
  if ( a1 )
    *a1 = qword_140E01850;
  return 0LL;
}
