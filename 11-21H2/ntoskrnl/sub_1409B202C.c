/*
 * XREFs of sub_1409B202C @ 0x1409B202C
 * Callers:
 *     sub_1405E1600 @ 0x1405E1600 (sub_1405E1600.c)
 *     sub_1406593C0 @ 0x1406593C0 (sub_1406593C0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1409B202C(__int64 a1, __int64 a2)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1;
  sub_14042A5E0(&v4, a2);
  return *(_QWORD *)(a1 + 48);
}
