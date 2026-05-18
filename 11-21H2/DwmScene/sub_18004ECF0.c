/*
 * XREFs of sub_18004ECF0 @ 0x18004ECF0
 * Callers:
 *     sub_1800523E0 @ 0x1800523E0 (sub_1800523E0.c)
 * Callees:
 *     sub_18001F2B4 @ 0x18001F2B4 (sub_18001F2B4.c)
 *     sub_18004ED94 @ 0x18004ED94 (sub_18004ED94.c)
 *     sub_18004F104 @ 0x18004F104 (sub_18004F104.c)
 */

__int64 __fastcall sub_18004ECF0(__int64 a1, __int64 a2)
{
  int v2; // r9d
  int v5; // r10d
  int v6; // r8d
  int v7; // r9d
  __int64 result; // rax

  v2 = *(_DWORD *)(a2 + 204);
  *(_DWORD *)(a1 + 300) = v2;
  v5 = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(a1 + 120) = v5;
  v6 = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 112) = v6;
  *(_DWORD *)(a1 + 116) = v6;
  *(_DWORD *)(a1 + 124) = v5;
  *(_WORD *)(a1 + 308) = *(_WORD *)(a2 + 112);
  sub_18001F2B4(&stru_1801EA2E8, 3, "Mesh of type %d loaded with %lu vertices and %lu indices", v2, v5, v6);
  result = *(unsigned int *)(a2 + 28);
  if ( (result & 0x800) != 0 )
    result = sub_18004F104(a1, *(_DWORD *)(a1 + 116), *(_DWORD *)(a1 + 124), v7, *(_DWORD *)(a2 + 28));
  if ( *(_DWORD *)(a1 + 120) )
    return sub_18004ED94(a1, a2);
  return result;
}
