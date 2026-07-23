/*
 * XREFs of sub_140A52FD8 @ 0x140A52FD8
 * Callers:
 *     sub_140390D20 @ 0x140390D20 (sub_140390D20.c)
 *     sub_140399040 @ 0x140399040 (sub_140399040.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140A52FD8(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx

  LOBYTE(a1) = 1;
  sub_14042A5E0(a1, a2);
  LOBYTE(v2) = 1;
  return sub_14042A5E0(v2, v3);
}
