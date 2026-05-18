/*
 * XREFs of sub_18002A5F8 @ 0x18002A5F8
 * Callers:
 *     sub_18002A2E0 @ 0x18002A2E0 (sub_18002A2E0.c)
 *     sub_18002A334 @ 0x18002A334 (sub_18002A334.c)
 *     sub_18002A5B8 @ 0x18002A5B8 (sub_18002A5B8.c)
 * Callees:
 *     sub_18002A018 @ 0x18002A018 (sub_18002A018.c)
 *     sub_18002A1BC @ 0x18002A1BC (sub_18002A1BC.c)
 */

bool __fastcall sub_18002A5F8(__int64 a1, char a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v2 = sub_18002A018(a1, &v4, a2);
  return *v2 != sub_18002A1BC()[1];
}
