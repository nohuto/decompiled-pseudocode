/*
 * XREFs of sub_1402A45A8 @ 0x1402A45A8
 * Callers:
 *     sub_140383ABC @ 0x140383ABC (sub_140383ABC.c)
 *     sub_140722B40 @ 0x140722B40 (sub_140722B40.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402A45A8(_DWORD *a1, int a2)
{
  unsigned int v2; // edx

  v2 = a2 & 0xFDFFFFFF;
  if ( a1[2] && (v2 & *a1) != v2 )
    return 3221225506LL;
  else
    return 0LL;
}
