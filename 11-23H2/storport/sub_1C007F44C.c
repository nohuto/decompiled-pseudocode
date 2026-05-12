/*
 * XREFs of sub_1C007F44C @ 0x1C007F44C
 * Callers:
 *     sub_1C0079980 @ 0x1C0079980 (sub_1C0079980.c)
 *     sub_1C0079AD4 @ 0x1C0079AD4 (sub_1C0079AD4.c)
 *     sub_1C0079D34 @ 0x1C0079D34 (sub_1C0079D34.c)
 *     sub_1C0079ED4 @ 0x1C0079ED4 (sub_1C0079ED4.c)
 *     sub_1C007A558 @ 0x1C007A558 (sub_1C007A558.c)
 *     sub_1C007A6B8 @ 0x1C007A6B8 (sub_1C007A6B8.c)
 *     sub_1C007A7F0 @ 0x1C007A7F0 (sub_1C007A7F0.c)
 *     sub_1C007A9C8 @ 0x1C007A9C8 (sub_1C007A9C8.c)
 *     sub_1C007AB88 @ 0x1C007AB88 (sub_1C007AB88.c)
 *     sub_1C007ACDC @ 0x1C007ACDC (sub_1C007ACDC.c)
 *     sub_1C007AE2C @ 0x1C007AE2C (sub_1C007AE2C.c)
 *     sub_1C007E890 @ 0x1C007E890 (sub_1C007E890.c)
 * Callees:
 *     sub_1C0055B8C @ 0x1C0055B8C (sub_1C0055B8C.c)
 *     sub_1C007CF64 @ 0x1C007CF64 (sub_1C007CF64.c)
 */

__int64 __fastcall sub_1C007F44C(int **a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  bool v4; // cc
  __int64 result; // rax
  int *v8; // rcx
  _QWORD v9[3]; // [rsp+50h] [rbp-18h] BYREF
  char v10; // [rsp+88h] [rbp+20h] BYREF

  v4 = *a4 <= 0x20u;
  v10 = 0;
  if ( !v4 )
    return 3221225485LL;
  v8 = *a1;
  v9[0] = a3;
  v9[1] = a4;
  sub_1C0055B8C(v8, "AuthenticateSession", 1, 28, a3, 0LL);
  result = sub_1C007CF64(
             (__int64)a1,
             a2,
             1LL,
             0x60000001CLL,
             (__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64))sub_1C007E9A0,
             (__int64)v9,
             0LL,
             0LL,
             (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_1C007EC90,
             (__int64)&v10);
  if ( (int)result >= 0 )
    return v10 == 0 ? 0xC0000022 : 0;
  return result;
}
