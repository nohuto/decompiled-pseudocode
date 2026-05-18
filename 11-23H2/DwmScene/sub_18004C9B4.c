/*
 * XREFs of sub_18004C9B4 @ 0x18004C9B4
 * Callers:
 *     sub_180095E20 @ 0x180095E20 (sub_180095E20.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18004C9B4(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  a1[43] = *a2;
  a1[44] = a2[1];
  a1[45] = a2[2];
  result = (unsigned int)a2[3];
  a1[46] = result;
  return result;
}
