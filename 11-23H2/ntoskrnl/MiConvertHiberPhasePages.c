/*
 * XREFs of MiConvertHiberPhasePages @ 0x140AABEDC
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x140AA347C (PopMarkComponentsBootPhase.c)
 *     PopInvokeSystemStateHandler @ 0x140AA840C (PopInvokeSystemStateHandler.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     MiWalkPageTables @ 0x14025BF90 (MiWalkPageTables.c)
 *     KeFlushCurrentTbOnly @ 0x14038CA20 (KeFlushCurrentTbOnly.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiConvertHiberPhasePages(__int64 a1)
{
  char *AnyMultiplexedVm; // rax
  __int64 result; // rax
  __m128i v4[11]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v4, 0, sizeof(v4));
  v4[0].m128i_i32[0] = 2817;
  v4[9].m128i_i64[1] = (__int64)MiConvertHiberPhasePte;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
  v4[2] = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffff800000000000);
  v4[1].m128i_i64[1] = (__int64)AnyMultiplexedVm;
  v4[0].m128i_i8[7] = 17;
  v4[10].m128i_i64[1] = a1;
  result = MiWalkPageTables(v4);
  if ( a1 )
    return KeFlushCurrentTbOnly(0);
  return result;
}
