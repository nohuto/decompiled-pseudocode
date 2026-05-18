/*
 * XREFs of sub_1800B6D70 @ 0x1800B6D70
 * Callers:
 *     sub_1800B687C @ 0x1800B687C (sub_1800B687C.c)
 *     sub_1800B6A04 @ 0x1800B6A04 (sub_1800B6A04.c)
 * Callees:
 *     sub_180059604 @ 0x180059604 (sub_180059604.c)
 */

char __fastcall sub_1800B6D70(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // r9
  char v4; // al
  __int64 v5; // rcx
  char v6; // dl

  sub_180059604(*a3);
  v4 = sub_180059604(v3);
  if ( v4 == v6 )
    return 0;
  else
    return sub_180059604(v5);
}
