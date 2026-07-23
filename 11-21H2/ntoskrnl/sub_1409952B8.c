/*
 * XREFs of sub_1409952B8 @ 0x1409952B8
 * Callers:
 *     sub_1407EDFC0 @ 0x1407EDFC0 (sub_1407EDFC0.c)
 * Callees:
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     sub_1408193F4 @ 0x1408193F4 (sub_1408193F4.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 sub_1409952B8()
{
  __int64 v0; // rcx
  __m128i v1; // xmm2
  __int32 v2; // edx
  __int32 v3; // r9d
  unsigned int v4; // r10d
  __int32 v5; // r8d
  unsigned int v6; // r11d
  unsigned __int32 v7; // ebx
  int v8; // eax
  int v9; // eax
  unsigned int v10; // eax
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __m128i v15; // [rsp+50h] [rbp-30h]
  __m128i v16; // [rsp+60h] [rbp-20h]

  v0 = qword_140C229D0;
  v1 = 0LL;
  v15 = 0LL;
  v2 = 0;
  v3 = 0;
  v16 = 0LL;
  v4 = 0;
  v5 = 0;
  if ( (__int64 *)qword_140C229D0 != &qword_140C229D0 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      v3 |= *(_DWORD *)(v0 + 48);
      v8 = *(_DWORD *)(v0 + 60);
      if ( v8 != -1 )
        v2 += v8;
      v9 = *(_DWORD *)(v0 + 64);
      if ( v9 != -1 )
        v5 += v9;
      if ( v7 < *(_DWORD *)(v0 + 68) )
        v7 = *(_DWORD *)(v0 + 68);
      if ( v4 < *(_DWORD *)(v0 + 72) )
        v4 = *(_DWORD *)(v0 + 72);
      v10 = *(_DWORD *)(v0 + 76);
      v0 = *(_QWORD *)v0;
      if ( v6 < v10 )
        v6 = v10;
    }
    while ( (__int64 *)v0 != &qword_140C229D0 );
    v15.m128i_i32[3] = v2;
    v15.m128i_i32[0] = v3;
    v1 = v15;
    v16.m128i_i64[1] = __PAIR64__(v6, v4);
    v16.m128i_i32[1] = v7;
  }
  dword_140C22A14 = 0;
  unk_140C229F4 = v1;
  if ( !v5 )
    v5 = v2;
  v16.m128i_i32[0] = v5;
  *(__m128i *)((char *)&qword_140C22A00 + 4) = v16;
  DbgPrintEx(
    0x92u,
    2u,
    "\n"
    "Composite Information\n"
    "|-- Capabilities        = 0x%08x\n"
    "|-- DesignedCapacity    = %u\n"
    "|-- FullChargedCapacity = %u\n"
    "|-- DefaultAlert1       = %u\n"
    "|-- DefaultAlert2       = %u\n"
    "|-- CriticalBias        = %u\n",
    v3,
    _mm_srli_si128(v1, 8).m128i_i32[1],
    v5,
    v16.m128i_i32[1],
    v4,
    _mm_srli_si128(v16, 8).m128i_i32[1]);
  sub_140A48330(v11);
  if ( byte_140C2341F )
  {
    byte_140C2341F = 0;
    sub_1408193F4();
  }
  return sub_140A47CF8(v13, v12);
}
