/*
 * XREFs of sub_1800A2D48 @ 0x1800A2D48
 * Callers:
 *     sub_180075B34 @ 0x180075B34 (sub_180075B34.c)
 *     sub_1800A2DD0 @ 0x1800A2DD0 (sub_1800A2DD0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800A2D48(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  a1[450] = *a2;
  a1[451] = a2[1];
  result = (unsigned int)a2[2];
  a1[452] = result;
  return result;
}
