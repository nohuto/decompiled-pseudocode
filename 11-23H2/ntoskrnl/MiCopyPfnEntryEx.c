/*
 * XREFs of MiCopyPfnEntryEx @ 0x140219D60
 * Callers:
 *     MiMigratePfn @ 0x140263370 (MiMigratePfn.c)
 *     MiTradeActivePage @ 0x1402EB0B4 (MiTradeActivePage.c)
 *     MiCombineInitialInstance @ 0x1402EC920 (MiCombineInitialInstance.c)
 *     MiReplaceTransitionPage @ 0x140330900 (MiReplaceTransitionPage.c)
 *     MiSwapStackPageNoDpc @ 0x14039A4AC (MiSwapStackPageNoDpc.c)
 *     MiStealPage @ 0x1403BC5BC (MiStealPage.c)
 *     MiSwitchKstackPages @ 0x14062DBC8 (MiSwitchKstackPages.c)
 *     MiSplitDirectMapPage @ 0x14063F7B4 (MiSplitDirectMapPage.c)
 *     MiSwapNumaStandbyPage @ 0x140652320 (MiSwapNumaStandbyPage.c)
 *     MiSwapHardFaultPage @ 0x14066CEC8 (MiSwapHardFaultPage.c)
 *     MiTradeBootImagePage @ 0x140B46E5C (MiTradeBootImagePage.c)
 *     MxSwapPages @ 0x140B58AF8 (MxSwapPages.c)
 * Callees:
 *     MiSetPfnIdentity @ 0x140219488 (MiSetPfnIdentity.c)
 *     MiUpdatePageFileHighInPte @ 0x1402858CC (MiUpdatePageFileHighInPte.c)
 */

char __fastcall MiCopyPfnEntryEx(__int64 a1, __int128 *a2)
{
  __int128 v3; // xmm2
  char v4; // r8
  __int128 v6; // xmm0
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int128 v12; // xmm0
  __m128i v13; // xmm1
  __int128 v15; // [rsp+20h] [rbp-30h] BYREF
  __int128 v16; // [rsp+30h] [rbp-20h]
  __m128i v17; // [rsp+40h] [rbp-10h]

  v3 = *a2;
  v4 = *(_BYTE *)(a1 + 35) & 0x40;
  v6 = a2[1];
  v17 = (__m128i)a2[2];
  v7 = v17.m128i_i64[1];
  v15 = v3;
  v17.m128i_i8[3] = _mm_cvtsi128_si32(_mm_srli_si128(v17, 3)) & 0x3F | v4;
  v16 = v6;
  if ( (((unsigned __int64)v17.m128i_i64[1] >> 60) & 7) == 3 )
  {
    MiSetPfnIdentity((__int64)&v15, 0);
    v7 = v17.m128i_i64[1];
    v3 = v15;
  }
  v8 = *(_QWORD *)(a1 + 40);
  v17.m128i_i8[2] = *(_BYTE *)(a1 + 34) ^ (*(_BYTE *)(a1 + 34) ^ v17.m128i_i8[2]) & 0x3F;
  v9 = v8 >> 43;
  v10 = *((_QWORD *)a2 + 5) >> 43;
  v17.m128i_i64[1] = ((v9 & 0x3FF) << 43) | v7 & 0xFFE007FFFFFFFFFFuLL;
  if ( (((unsigned __int16)v9 ^ (unsigned __int16)v10) & 0x3FF) != 0
    && (*(_DWORD *)(*(_QWORD *)(qword_140C673C8 + 8 * (v9 & 0x3FF)) + 4LL) & 0x80u) == 0
    && (*(_DWORD *)(*(_QWORD *)(qword_140C673C8 + 8 * (v10 & 0x3FF)) + 4LL) & 0x80u) == 0
    && (a2[1] & 0x400) == 0 )
  {
    *(_QWORD *)&v16 = MiUpdatePageFileHighInPte(v16, 0LL) & 0xFFFFFFFFFFFF0FFFuLL;
  }
  LOBYTE(v11) = v17.m128i_i8[2] & 7;
  if ( (v17.m128i_i8[2] & 7) != 6 )
  {
    v11 = (*((_QWORD *)&v16 + 1) ^ *(_QWORD *)(a1 + 24)) & 0x3800000000000000LL ^ *((_QWORD *)&v16 + 1);
    *((_QWORD *)&v16 + 1) = v11;
  }
  v12 = v16;
  v13 = v17;
  *(_OWORD *)a1 = v3;
  *(_OWORD *)(a1 + 16) = v12;
  *(__m128i *)(a1 + 32) = v13;
  return v11;
}
