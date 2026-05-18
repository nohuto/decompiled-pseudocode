/*
 * XREFs of sub_180059694 @ 0x180059694
 * Callers:
 *     sub_180071988 @ 0x180071988 (sub_180071988.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180059694(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  a1[23] = *a2;
  a1[24] = a2[1];
  a1[25] = a2[2];
  result = (unsigned int)a2[3];
  a1[26] = result;
  return result;
}
