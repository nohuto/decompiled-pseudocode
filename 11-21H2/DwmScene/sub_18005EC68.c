/*
 * XREFs of sub_18005EC68 @ 0x18005EC68
 * Callers:
 *     sub_18001A2B0 @ 0x18001A2B0 (sub_18001A2B0.c)
 *     sub_180034E40 @ 0x180034E40 (sub_180034E40.c)
 * Callees:
 *     sub_18005ECD4 @ 0x18005ECD4 (sub_18005ECD4.c)
 *     sub_180063DF0 @ 0x180063DF0 (sub_180063DF0.c)
 *     sub_180063E08 @ 0x180063E08 (sub_180063E08.c)
 *     sub_180063E20 @ 0x180063E20 (sub_180063E20.c)
 */

__int64 __fastcall sub_18005EC68(__int64 a1, _QWORD *a2)
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

  v2 = sub_180063E20(*a2);
  v4 = (unsigned int *)sub_180063DF0(v3, &v13, v2);
  v5 = (__m128)*v4;
  v6 = (__m128)v4[1];
  v8 = (unsigned int *)sub_180063E08(v7, &v14);
  return sub_18005ECD4(
           v11,
           v10,
           _mm_unpacklo_ps((__m128)*v8, (__m128)v8[1]).m128_u32[0],
           _mm_unpacklo_ps(v5, v6).m128_u32[0],
           v9);
}
