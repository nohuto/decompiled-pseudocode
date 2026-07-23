/*
 * XREFs of sub_140509594 @ 0x140509594
 * Callers:
 *     sub_14052268C @ 0x14052268C (sub_14052268C.c)
 *     sub_1405226CC @ 0x1405226CC (sub_1405226CC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140509594(unsigned __int64 a1, bool *a2)
{
  bool v2; // al

  v2 = 0;
  if ( !qword_140C54AA0 || !qword_140C54AB8 )
    return 3221225473LL;
  if ( a1 >= qword_140C54AA0 )
    v2 = a1 <= qword_140C54AB8;
  *a2 = v2;
  return 0LL;
}
