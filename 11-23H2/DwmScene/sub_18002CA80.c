/*
 * XREFs of sub_18002CA80 @ 0x18002CA80
 * Callers:
 *     sub_18002B4A4 @ 0x18002B4A4 (sub_18002B4A4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18002CA80(__int64 a1, int a2, int a3)
{
  __int64 result; // rax

  result = a2;
  *(_DWORD *)(a1 + 4LL * a2 + 224) = a3;
  return result;
}
