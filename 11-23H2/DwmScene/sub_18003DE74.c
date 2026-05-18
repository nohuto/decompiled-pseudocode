/*
 * XREFs of sub_18003DE74 @ 0x18003DE74
 * Callers:
 *     sub_180096C00 @ 0x180096C00 (sub_180096C00.c)
 * Callees:
 *     sub_18003C72C @ 0x18003C72C (sub_18003C72C.c)
 *     sub_18003DD74 @ 0x18003DD74 (sub_18003DD74.c)
 */

__int64 __fastcall sub_18003DE74(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  __m128 *v5; // rax
  __m128 v6; // xmm1
  __m128 v7; // xmm0
  __m128 v8; // xmm1
  __m128 v10[4]; // [rsp+20h] [rbp-88h] BYREF
  _OWORD v11[4]; // [rsp+60h] [rbp-48h] BYREF

  v5 = (__m128 *)sub_18003C72C(a1, v11);
  v6 = v5[1];
  v10[0] = *v5;
  v7 = v5[2];
  v10[1] = v6;
  v8 = v5[3];
  v10[2] = v7;
  v10[3] = v8;
  sub_18003DD74(a2, a3, v10);
  return a2;
}
