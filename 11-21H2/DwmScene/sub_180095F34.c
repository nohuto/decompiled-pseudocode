/*
 * XREFs of sub_180095F34 @ 0x180095F34
 * Callers:
 *     sub_18008918C @ 0x18008918C (sub_18008918C.c)
 *     sub_180089950 @ 0x180089950 (sub_180089950.c)
 *     sub_18008AF50 @ 0x18008AF50 (sub_18008AF50.c)
 *     sub_18008BE10 @ 0x18008BE10 (sub_18008BE10.c)
 *     sub_18008C410 @ 0x18008C410 (sub_18008C410.c)
 *     sub_18008D920 @ 0x18008D920 (sub_18008D920.c)
 *     sub_1800A956C @ 0x1800A956C (sub_1800A956C.c)
 *     sub_1800AAA68 @ 0x1800AAA68 (sub_1800AAA68.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180088D1C @ 0x180088D1C (sub_180088D1C.c)
 *     sub_18009474C @ 0x18009474C (sub_18009474C.c)
 */

__int64 __fastcall sub_180095F34(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx

  result = sub_18009474C(a1 + 128, a2);
  v4 = *(_QWORD *)(a2 + 16);
  if ( v4 )
  {
    sub_180088D1C(v4, *(_QWORD *)(a2 + 24));
    result = sub_180010884(*(char **)(a2 + 16), 16 * ((__int64)(*(_QWORD *)(a2 + 32) - *(_QWORD *)(a2 + 16)) >> 4));
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 24) = 0LL;
    *(_QWORD *)(a2 + 32) = 0LL;
  }
  return result;
}
