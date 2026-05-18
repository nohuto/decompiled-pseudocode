/*
 * XREFs of sub_18005BBB4 @ 0x18005BBB4
 * Callers:
 *     sub_18001AF40 @ 0x18001AF40 (sub_18001AF40.c)
 *     sub_18005BBFC @ 0x18005BBFC (sub_18005BBFC.c)
 *     sub_18005BCF4 @ 0x18005BCF4 (sub_18005BCF4.c)
 *     sub_18005CDB0 @ 0x18005CDB0 (sub_18005CDB0.c)
 *     sub_18008E410 @ 0x18008E410 (sub_18008E410.c)
 * Callees:
 *     sub_18005DC48 @ 0x18005DC48 (sub_18005DC48.c)
 */

__int64 __fastcall sub_18005BBB4(__int64 a1, int a2, int a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbx

  v3 = a3;
  v5 = a2;
  sub_18005DC48();
  return ((v3 + 4 * v5) << 6) + a1 + 548;
}
