/*
 * XREFs of sub_18000B908 @ 0x18000B908
 * Callers:
 *     sub_18000B0C0 @ 0x18000B0C0 (sub_18000B0C0.c)
 * Callees:
 *     sub_18000CAA0 @ 0x18000CAA0 (sub_18000CAA0.c)
 */

char __fastcall sub_18000B908(__int64 a1, char a2)
{
  char v2; // bl
  __int64 v3; // rcx

  v2 = a1;
  if ( !byte_1801F72D1 || !a2 )
  {
    sub_18000CAA0(a1);
    LOBYTE(v3) = v2;
    sub_18000CAA0(v3);
  }
  return 1;
}
