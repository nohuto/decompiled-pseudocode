/*
 * XREFs of sub_1405ED0E8 @ 0x1405ED0E8
 * Callers:
 *     sub_1405ED5A4 @ 0x1405ED5A4 (sub_1405ED5A4.c)
 *     sub_1405ED624 @ 0x1405ED624 (sub_1405ED624.c)
 * Callees:
 *     sub_1405ED158 @ 0x1405ED158 (sub_1405ED158.c)
 *     sub_1405ED288 @ 0x1405ED288 (sub_1405ED288.c)
 *     sub_1405ED6E4 @ 0x1405ED6E4 (sub_1405ED6E4.c)
 *     sub_1409BD018 @ 0x1409BD018 (sub_1409BD018.c)
 */

__int64 __fastcall sub_1405ED0E8(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rcx
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // r8
  char v9; // [rsp+30h] [rbp+8h] BYREF
  char v10; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0;
  v3 = a1[14];
  v10 = 0;
  v4 = a2;
  sub_1409BD018(v3, a2, &v9, &v10);
  LOBYTE(v5) = v9;
  sub_1405ED6E4(a1, v5);
  v7 = a1[13];
  if ( v7 != a1[5] )
    return sub_1405ED288(a1, v4);
  LOBYTE(v6) = v10;
  LOBYTE(v7) = v9;
  return sub_1405ED158(a1, v4, v7, v6);
}
