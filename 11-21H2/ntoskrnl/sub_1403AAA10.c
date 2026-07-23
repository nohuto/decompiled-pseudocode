/*
 * XREFs of sub_1403AAA10 @ 0x1403AAA10
 * Callers:
 *     sub_1403990C0 @ 0x1403990C0 (sub_1403990C0.c)
 *     sub_140A53718 @ 0x140A53718 (sub_140A53718.c)
 * Callees:
 *     sub_1403AAA5C @ 0x1403AAA5C (sub_1403AAA5C.c)
 *     sub_1403AAB1C @ 0x1403AAB1C (sub_1403AAB1C.c)
 *     sub_1403AAE50 @ 0x1403AAE50 (sub_1403AAE50.c)
 *     sub_140509960 @ 0x140509960 (sub_140509960.c)
 */

__int64 __fastcall sub_1403AAA10(__int64 a1)
{
  char v2; // di
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6; // rdx

  v2 = sub_1403AAE50();
  v3 = sub_1403AAB1C(a1);
  LOBYTE(v4) = 1;
  result = sub_1403AAA5C(*(_QWORD *)(v3 + 16), v4, a1, v3);
  if ( v2 == 1 )
  {
    LOBYTE(v6) = 1;
    return sub_140509960(qword_140C54978, v6, a1);
  }
  return result;
}
