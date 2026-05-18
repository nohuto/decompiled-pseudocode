/*
 * XREFs of sub_18002EF40 @ 0x18002EF40
 * Callers:
 *     sub_18002D0B8 @ 0x18002D0B8 (sub_18002D0B8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18002EF40(__int64 a1, int a2, int a3)
{
  __int64 result; // rax

  result = a2;
  *(_DWORD *)(a1 + 4LL * a2 + 224) = a3;
  return result;
}
