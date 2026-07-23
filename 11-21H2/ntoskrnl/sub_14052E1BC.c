/*
 * XREFs of sub_14052E1BC @ 0x14052E1BC
 * Callers:
 *     sub_140A63CE0 @ 0x140A63CE0 (sub_140A63CE0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14052E1BC(__int64 a1, char a2, unsigned __int16 a3, __int64 a4, __int64 *a5)
{
  __int64 result; // rax

  *a5 = 0LL;
  result = *(_DWORD *)a5 & 0xFF2;
  a5[1] = ((unsigned __int64)a3 << 8) | *(_DWORD *)(a1 + 248) & 7;
  *a5 = result | (4 * ((a4 << 10) | a2 & 3)) | 1;
  return result;
}
