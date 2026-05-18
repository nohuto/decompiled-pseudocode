/*
 * XREFs of sub_1800533C0 @ 0x1800533C0
 * Callers:
 *     sub_1800A6170 @ 0x1800A6170 (sub_1800A6170.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800533C0(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  a1[43] = *a2;
  a1[44] = a2[1];
  a1[45] = a2[2];
  result = (unsigned int)a2[3];
  a1[46] = result;
  return result;
}
