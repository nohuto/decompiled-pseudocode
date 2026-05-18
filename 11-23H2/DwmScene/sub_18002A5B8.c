/*
 * XREFs of sub_18002A5B8 @ 0x18002A5B8
 * Callers:
 *     sub_180029B1C @ 0x180029B1C (sub_180029B1C.c)
 *     sub_180029BDC @ 0x180029BDC (sub_180029BDC.c)
 *     sub_180029C9C @ 0x180029C9C (sub_180029C9C.c)
 *     sub_180029D6C @ 0x180029D6C (sub_180029D6C.c)
 * Callees:
 *     sub_18002A5F8 @ 0x18002A5F8 (sub_18002A5F8.c)
 */

char __fastcall sub_18002A5B8(__int64 a1, __int64 a2)
{
  char v3; // bl

  LOBYTE(a2) = 1;
  v3 = 0;
  if ( (unsigned __int8)sub_18002A5F8(a1, a2) || (unsigned __int8)sub_18002A5F8(a1, 0LL) )
    return 1;
  return v3;
}
