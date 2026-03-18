/*
 * XREFs of PopBatteryUpdateCompositeInformation @ 0x1409959B8
 * Callers:
 *     PopBatteryWorker @ 0x14086FD60 (PopBatteryWorker.c)
 * Callees:
 *     DbgPrintEx @ 0x14032A740 (DbgPrintEx.c)
 *     PopResetCurrentPolicies @ 0x1408240F8 (PopResetCurrentPolicies.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

__int64 PopBatteryUpdateCompositeInformation()
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
  __int64 v14; // r8
  __m128i v16; // [rsp+50h] [rbp-30h]
  __m128i v17; // [rsp+60h] [rbp-20h]

  v0 = qword_140C3CED0;
  v1 = 0LL;
  v16 = 0LL;
  v2 = 0;
  v3 = 0;
  v17 = 0LL;
  v4 = 0;
  v5 = 0;
  if ( (__int64 *)qword_140C3CED0 != &qword_140C3CED0 )
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
    while ( (__int64 *)v0 != &qword_140C3CED0 );
    v16.m128i_i32[3] = v2;
    v16.m128i_i32[0] = v3;
    v1 = v16;
    v17.m128i_i64[1] = __PAIR64__(v6, v4);
    v17.m128i_i32[1] = v7;
  }
  dword_140C3CF14 = 0;
  unk_140C3CEF4 = v1;
  if ( !v5 )
    v5 = v2;
  v17.m128i_i32[0] = v5;
  *(__m128i *)((char *)&qword_140C3CF00 + 4) = v17;
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
    v17.m128i_i32[1],
    v4,
    _mm_srli_si128(v17, 8).m128i_i32[1]);
  PopAcquirePolicyLock(v11);
  if ( byte_140C3DA3F )
  {
    byte_140C3DA3F = 0;
    PopResetCurrentPolicies();
  }
  return PopReleasePolicyLock(v13, v12, v14);
}
