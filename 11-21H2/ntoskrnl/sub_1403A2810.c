/*
 * XREFs of sub_1403A2810 @ 0x1403A2810
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A3038 @ 0x1403A3038 (sub_1403A3038.c)
 *     sub_1403A3060 @ 0x1403A3060 (sub_1403A3060.c)
 *     sub_1403A346C @ 0x1403A346C (sub_1403A346C.c)
 */

__int64 __fastcall sub_1403A2810(__int64 a1)
{
  __int64 result; // rax
  int v3; // r8d

  sub_1403A346C();
  sub_1403A3060(a1, 0LL);
  sub_1403A3038(a1, a1 + 24);
  result = 1LL;
  *(_DWORD *)(a1 + 108) = v3;
  return result;
}
