/*
 * XREFs of sub_1800A4554 @ 0x1800A4554
 * Callers:
 *     sub_1800A4220 @ 0x1800A4220 (sub_1800A4220.c)
 *     sub_1800A4324 @ 0x1800A4324 (sub_1800A4324.c)
 *     sub_1800A4388 @ 0x1800A4388 (sub_1800A4388.c)
 * Callees:
 *     sub_180051C00 @ 0x180051C00 (sub_180051C00.c)
 */

char __fastcall sub_1800A4554(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // r9
  char v4; // al
  __int64 v5; // rcx
  char v6; // dl

  sub_180051C00(*a3);
  v4 = sub_180051C00(v3);
  if ( v4 == v6 )
    return 0;
  else
    return sub_180051C00(v5);
}
