/*
 * XREFs of sub_180084D80 @ 0x180084D80
 * Callers:
 *     sub_180084738 @ 0x180084738 (sub_180084738.c)
 *     sub_180084A30 @ 0x180084A30 (sub_180084A30.c)
 * Callees:
 *     sub_180085F38 @ 0x180085F38 (sub_180085F38.c)
 */

bool __fastcall sub_180084D80(__int64 a1, int a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = (_QWORD *)(a1 + 112);
  v5 = a2;
  sub_180085F38(a1 + 112, &v4, &v5);
  return v4 != *v2;
}
