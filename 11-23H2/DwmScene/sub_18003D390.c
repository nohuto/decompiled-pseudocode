/*
 * XREFs of sub_18003D390 @ 0x18003D390
 * Callers:
 *     sub_18003D2E4 @ 0x18003D2E4 (sub_18003D2E4.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001265C @ 0x18001265C (sub_18001265C.c)
 *     sub_180034880 @ 0x180034880 (sub_180034880.c)
 *     sub_18003E330 @ 0x18003E330 (sub_18003E330.c)
 */

void __fastcall __noreturn sub_18003D390(__int64 a1)
{
  __int64 v2; // [rsp+20h] [rbp-18h] BYREF
  __int64 v3; // [rsp+28h] [rbp-10h]

  sub_18003E330(a1);
  sub_18001265C(a1, &v2);
  if ( v3 )
    sub_180010530(v3);
  sub_180034880();
}
