/*
 * XREFs of sub_1403A2FD0 @ 0x1403A2FD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A3038 @ 0x1403A3038 (sub_1403A3038.c)
 *     sub_1403A3060 @ 0x1403A3060 (sub_1403A3060.c)
 *     sub_1403A30B4 @ 0x1403A30B4 (sub_1403A30B4.c)
 *     sub_1403A346C @ 0x1403A346C (sub_1403A346C.c)
 */

__int64 __fastcall sub_1403A2FD0(_DWORD *a1)
{
  __int64 v2; // rbx
  __int64 result; // rax
  int v4; // r8d
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  sub_1403A346C();
  v2 = sub_1403A30B4(a1, &v5);
  sub_1403A3060(a1, a1[28] & 2);
  sub_1403A3038(a1, v2);
  a1[31] += v5;
  result = 1LL;
  a1[27] = v4;
  return result;
}
