/*
 * XREFs of sub_18004C5C4 @ 0x18004C5C4
 * Callers:
 *     sub_18008A4C0 @ 0x18008A4C0 (sub_18008A4C0.c)
 *     sub_18008C990 @ 0x18008C990 (sub_18008C990.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180056524 @ 0x180056524 (sub_180056524.c)
 *     sub_180069D0C @ 0x180069D0C (sub_180069D0C.c)
 *     sub_18008F6BC @ 0x18008F6BC (sub_18008F6BC.c)
 *     sub_180090304 @ 0x180090304 (sub_180090304.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18004C5C4(__int64 a1, __int64 *a2)
{
  __int64 v3; // rcx
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF

  sub_180056524(a1, &v5, 8LL);
  sub_18008F6BC(v5, &qword_1801F5AF8, 7LL, 256LL);
  sub_180090304(v5);
  v3 = *a2;
  v6 = 0LL;
  if ( *((_QWORD *)&v5 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v5 + 1) + 8LL));
  v6 = v5;
  sub_180069D0C(v3, &v6);
  sub_180010910((__int64)&v5);
  return sub_180010910((__int64)a2);
}
