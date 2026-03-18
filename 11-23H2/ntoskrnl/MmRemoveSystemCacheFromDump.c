/*
 * XREFs of MmRemoveSystemCacheFromDump @ 0x1406306DC
 * Callers:
 *     MmGetDumpRange @ 0x140630380 (MmGetDumpRange.c)
 *     IopLiveDumpRemoveSystemCacheFromDump @ 0x140A9C484 (IopLiveDumpRemoveSystemCacheFromDump.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetShared @ 0x14023C500 (MiUnlockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x14025BD00 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x140283C90 (MiLockWorkingSetShared.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     memset @ 0x140435A00 (memset.c)
 *     MiSystemInSingleProcessorMode @ 0x14061C398 (MiSystemInSingleProcessorMode.c)
 */

__int64 __fastcall MmRemoveSystemCacheFromDump(__int64 a1)
{
  int v2; // eax
  __int64 v4; // rbx
  _QWORD v5[2]; // [rsp+20h] [rbp-79h] BYREF
  __m128i v6[11]; // [rsp+30h] [rbp-69h] BYREF

  memset(v6, 0, sizeof(v6));
  v5[1] = 0LL;
  v6[9].m128i_i64[1] = (__int64)MiCrashdumpRemovePte;
  v6[10].m128i_i64[1] = (__int64)v5;
  v6[2] = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffff800000000000);
  v5[0] = a1;
  LOBYTE(v2) = MiSystemInSingleProcessorMode();
  if ( v2 )
  {
    v6[0].m128i_i32[0] = 67584;
    return MiWalkPageTables(v6);
  }
  else
  {
    v6[1].m128i_i64[1] = (__int64)MiGetAnyMultiplexedVm(0);
    v4 = v6[1].m128i_i64[1];
    v6[0].m128i_i32[0] = 6;
    v6[0].m128i_i8[7] = MiLockWorkingSetShared(v6[1].m128i_i64[1]);
    MiWalkPageTables(v6);
    return MiUnlockWorkingSetShared(v4, v6[0].m128i_u8[7]);
  }
}
