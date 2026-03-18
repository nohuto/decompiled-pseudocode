/*
 * XREFs of MiCopyPfnEntryEx @ 0x1402E8154
 * Callers:
 *     MiConvertStandbyToProto @ 0x140227490 (MiConvertStandbyToProto.c)
 *     MiSwapStackPageNoDpc @ 0x14024A0FC (MiSwapStackPageNoDpc.c)
 *     MiConvertPrivateToProto @ 0x140272A10 (MiConvertPrivateToProto.c)
 *     MiReplaceTransitionPage @ 0x1402E7704 (MiReplaceTransitionPage.c)
 *     MiStealPage @ 0x1402E97D4 (MiStealPage.c)
 *     MiTradeActivePage @ 0x1402EA95C (MiTradeActivePage.c)
 *     MiMigratePfn @ 0x140327C60 (MiMigratePfn.c)
 *     MiSwitchKstackPages @ 0x140591040 (MiSwitchKstackPages.c)
 *     MiSplitDirectMapPage @ 0x1405A0B10 (MiSplitDirectMapPage.c)
 *     MiSwapNumaStandbyPage @ 0x1405B4024 (MiSwapNumaStandbyPage.c)
 *     MiSwapHardFaultPage @ 0x1405C4C94 (MiSwapHardFaultPage.c)
 *     MxSwapPages @ 0x140AF3FFC (MxSwapPages.c)
 *     MiTradeBootImagePage @ 0x140B05434 (MiTradeBootImagePage.c)
 * Callees:
 *     MiSetPfnIdentity @ 0x14033C300 (MiSetPfnIdentity.c)
 */

char __fastcall MiCopyPfnEntryEx(__m128i *a1, __m128i *a2)
{
  __m128i v2; // xmm1
  __m128i v4; // xmm2
  __m128i v5; // xmm0
  char v6; // dl
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __m128i v10; // xmm0
  __m128i v11; // xmm1
  __m128i v13; // [rsp+20h] [rbp-30h] BYREF
  __m128i v14; // [rsp+30h] [rbp-20h]
  __m128i v15; // [rsp+40h] [rbp-10h]

  v2 = a2[2];
  v4 = *a2;
  v5 = a2[1];
  v6 = a1[2].m128i_i8[3];
  v15 = v2;
  v13 = v4;
  v15.m128i_i8[3] = _mm_cvtsi128_si32(_mm_srli_si128(v2, 3)) & 0x3F | v6 & 0x40;
  v7 = v2.m128i_i64[1];
  v14 = v5;
  if ( (((unsigned __int64)v2.m128i_i64[1] >> 60) & 7) == 3 )
  {
    MiSetPfnIdentity(&v13, 0LL);
    v7 = v15.m128i_i64[1];
    v4 = v13;
  }
  v9 = (unsigned __int64)a1[2].m128i_i64[1] >> 43;
  v15.m128i_i8[2] = v15.m128i_i8[2] & 0x3F | a1[2].m128i_i8[2] & 0xC0;
  v8 = (unsigned __int16)v9;
  LOBYTE(v9) = v15.m128i_i8[2] & 7;
  v15.m128i_i64[1] = (v7 ^ (v8 << 43)) & 0x1FF80000000000LL ^ v7;
  if ( (v15.m128i_i8[2] & 7) != 6 )
  {
    v9 = (v14.m128i_i64[1] ^ a1[1].m128i_i64[1]) & 0x3800000000000000LL ^ v14.m128i_i64[1];
    v14.m128i_i64[1] = v9;
  }
  v10 = v14;
  v11 = v15;
  *a1 = v4;
  a1[1] = v10;
  a1[2] = v11;
  return v9;
}
