/*
 * XREFs of sub_140535490 @ 0x140535490
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A3060 @ 0x1403A3060 (sub_1403A3060.c)
 *     sub_1403A30B4 @ 0x1403A30B4 (sub_1403A30B4.c)
 *     sub_1403A346C @ 0x1403A346C (sub_1403A346C.c)
 */

__int64 __fastcall sub_140535490(__int64 a1)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  sub_1403A346C(a1);
  *(_QWORD *)(a1 + 88) = sub_1403A30B4(a1, &v3);
  *(_DWORD *)(a1 + 108) = sub_1403A3060(a1, 0);
  return 1LL;
}
