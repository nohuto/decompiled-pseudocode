/*
 * XREFs of sub_180048B00 @ 0x180048B00
 * Callers:
 *     sub_18004BCA0 @ 0x18004BCA0 (sub_18004BCA0.c)
 * Callees:
 *     sub_18001DB68 @ 0x18001DB68 (sub_18001DB68.c)
 *     sub_180048BA4 @ 0x180048BA4 (sub_180048BA4.c)
 *     sub_180048EE8 @ 0x180048EE8 (sub_180048EE8.c)
 */

__int64 __fastcall sub_180048B00(__int64 a1, __int64 a2)
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
  sub_18001DB68(&stru_1801C82E8, 3, "Mesh of type %d loaded with %lu vertices and %lu indices", v2, v5, v6);
  result = *(unsigned int *)(a2 + 28);
  if ( (result & 0x800) != 0 )
    result = sub_180048EE8(a1, *(_DWORD *)(a1 + 116), *(_DWORD *)(a1 + 124), v7, *(_DWORD *)(a2 + 28));
  if ( *(_DWORD *)(a1 + 120) )
    return sub_180048BA4(a1, a2);
  return result;
}
