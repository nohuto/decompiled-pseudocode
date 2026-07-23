/*
 * XREFs of sub_140A9D650 @ 0x140A9D650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A9D650(_RTL_AVL_TABLE *a1, _QWORD *a2, _QWORD *a3)
{
  if ( *a3 <= *a2 )
    return 2 - (unsigned int)(*a3 < *a2);
  else
    return 0LL;
}
