/*
 * XREFs of sub_140599764 @ 0x140599764
 * Callers:
 *     sub_140599D58 @ 0x140599D58 (sub_140599D58.c)
 *     sub_14059A35C @ 0x14059A35C (sub_14059A35C.c)
 *     sub_14096E06C @ 0x14096E06C (sub_14096E06C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140599764(_DWORD *a1, __int64 a2)
{
  if ( *a1 <= *(_DWORD *)(a2 + 28) )
    return (unsigned int)-(*a1 < *(_DWORD *)(a2 + 24));
  else
    return 1LL;
}
