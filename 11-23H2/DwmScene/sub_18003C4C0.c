/*
 * XREFs of sub_18003C4C0 @ 0x18003C4C0
 * Callers:
 *     sub_18003C4C0 @ 0x18003C4C0 (sub_18003C4C0.c)
 *     sub_18003DC28 @ 0x18003DC28 (sub_18003DC28.c)
 *     sub_180069750 @ 0x180069750 (sub_180069750.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180012624 @ 0x180012624 (sub_180012624.c)
 *     sub_18003B628 @ 0x18003B628 (sub_18003B628.c)
 *     sub_18003C4C0 @ 0x18003C4C0 (sub_18003C4C0.c)
 *     sub_18003E330 @ 0x18003E330 (sub_18003E330.c)
 */

// Hidden C++ exception states: #wind=2
__m128 *__fastcall sub_18003C4C0(__int64 a1, __m128 *a2)
{
  char v4; // di
  _QWORD *v5; // rax
  __m128 *v6; // rax
  __m128 v8; // [rsp+20h] [rbp-48h] BYREF
  __int64 v9; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+38h] [rbp-30h]
  __int64 v11; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12; // [rsp+48h] [rbp-20h]
  _BYTE v13[16]; // [rsp+50h] [rbp-18h] BYREF

  v4 = 0;
  sub_18003E330(a1);
  if ( *sub_180012624(a1, &v11) )
  {
    v5 = sub_180012624(a1, &v9);
    v4 = 1;
    v6 = (__m128 *)sub_18003C4C0(*v5, v13);
  }
  else
  {
    v8 = (__m128)xmmword_180106A28;
    v6 = &v8;
  }
  v8 = *v6;
  if ( (v4 & 1) != 0 && v10 )
    sub_180010530(v10);
  if ( v12 )
    sub_180010530(v12);
  sub_18003B628(a2, (__m128 *)(a1 + 156), &v8);
  return a2;
}
