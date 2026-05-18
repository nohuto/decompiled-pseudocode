/*
 * XREFs of sub_180057484 @ 0x180057484
 * Callers:
 *     sub_180018FC0 @ 0x180018FC0 (sub_180018FC0.c)
 *     sub_180032D40 @ 0x180032D40 (sub_180032D40.c)
 * Callees:
 *     sub_1800574F0 @ 0x1800574F0 (sub_1800574F0.c)
 *     sub_18005BC90 @ 0x18005BC90 (sub_18005BC90.c)
 *     sub_18005BCA8 @ 0x18005BCA8 (sub_18005BCA8.c)
 *     sub_18005BCC0 @ 0x18005BCC0 (sub_18005BCC0.c)
 */

__int64 __fastcall sub_180057484(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // eax
  __int64 v3; // rcx
  unsigned int *v4; // rax
  __m128 v5; // xmm1
  __m128 v6; // xmm3
  __int64 v7; // rcx
  unsigned int *v8; // rax
  int v9; // r8d
  int v10; // r10d
  int v11; // r11d
  char v13; // [rsp+48h] [rbp+10h] BYREF
  char v14; // [rsp+50h] [rbp+18h] BYREF

  v2 = sub_18005BCC0(*a2);
  v4 = (unsigned int *)sub_18005BC90(v3, &v13, v2);
  v5 = (__m128)*v4;
  v6 = (__m128)v4[1];
  v8 = (unsigned int *)sub_18005BCA8(v7, &v14);
  return sub_1800574F0(
           v11,
           v10,
           _mm_unpacklo_ps((__m128)*v8, (__m128)v8[1]).m128_u32[0],
           _mm_unpacklo_ps(v5, v6).m128_u32[0],
           v9);
}
