/*
 * XREFs of sub_140788E8C @ 0x140788E8C
 * Callers:
 *     sub_14076341C @ 0x14076341C (sub_14076341C.c)
 *     sub_1407635A4 @ 0x1407635A4 (sub_1407635A4.c)
 *     sub_140769C24 @ 0x140769C24 (sub_140769C24.c)
 *     sub_1407879A8 @ 0x1407879A8 (sub_1407879A8.c)
 *     sub_14078BF98 @ 0x14078BF98 (sub_14078BF98.c)
 *     sub_14078C7F4 @ 0x14078C7F4 (sub_14078C7F4.c)
 * Callees:
 *     sub_14077F150 @ 0x14077F150 (sub_14077F150.c)
 */

int __fastcall sub_140788E8C(__int64 a1, __int64 *a2, char a3)
{
  int result; // eax
  __int64 v6; // rcx

  result = sub_14077F150(a1, (__int64)a2);
  if ( result >= 0 )
  {
    v6 = 0x5C003F005C005CLL;
    if ( a3 )
      v6 = 0x5C003F003F005CLL;
    *a2 = v6;
  }
  return result;
}
