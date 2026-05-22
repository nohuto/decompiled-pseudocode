/*
 * XREFs of DirectComposition::ConvertToSuperWetInkPoints_DCompositionInkTrailPoint_ @ 0x1800E5FBC
 * Callers:
 *     ?AddTrailPoints@CDelegatedInkTrailImpl@DirectComposition@@UEAAJPEBUDCompositionInkTrailPoint@@IPEAI@Z @ 0x1800E6640 (-AddTrailPoints@CDelegatedInkTrailImpl@DirectComposition@@UEAAJPEBUDCompositionInkTrailPoint@@IP.c)
 *     ?AddTrailPointsWithPrediction@CDelegatedInkTrailImpl@DirectComposition@@UEAAJPEBUDCompositionInkTrailPoint@@I0IPEAI@Z @ 0x1800E68B0 (-AddTrailPointsWithPrediction@CDelegatedInkTrailImpl@DirectComposition@@UEAAJPEBUDCompositionInk.c)
 * Callees:
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@AEBUSuperWetInkBallpointPenPoint@@@?$vector@USuperWetInkBallpointPenPoint@@V?$allocator@USuperWetInkBallpointPenPoint@@@std@@@std@@QEAAPEAUSuperWetInkBallpointPenPoint@@QEAU2@AEBU2@@Z @ 0x1800E62B0 (--$_Emplace_reallocate@AEBUSuperWetInkBallpointPenPoint@@@-$vector@USuperWetInkBallpointPenPoint.c)
 *     ?reserve@?$vector@USuperWetInkBallpointPenPoint@@V?$allocator@USuperWetInkBallpointPenPoint@@@std@@@std@@QEAAX_K@Z @ 0x1800E7514 (-reserve@-$vector@USuperWetInkBallpointPenPoint@@V-$allocator@USuperWetInkBallpointPenPoint@@@st.c)
 */

_QWORD *__fastcall DirectComposition::ConvertToSuperWetInkPoints_DCompositionInkTrailPoint_(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int8 a4)
{
  int v6; // r14d
  __int64 v8; // rsi
  __int32 *v9; // rbx
  __int64 v10; // rdx
  __int32 v11; // xmm1_4
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v15; // [rsp+20h] [rbp-40h] BYREF
  __m256i v16; // [rsp+30h] [rbp-30h] BYREF
  __int64 v17; // [rsp+50h] [rbp-10h]

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v6 = a4;
  v8 = a3;
  std::vector<SuperWetInkBallpointPenPoint>::reserve(a1, a3);
  if ( a3 )
  {
    v9 = (__int32 *)(a2 + 8);
    do
    {
      *(_QWORD *)&v15 = 0LL;
      v17 = 0LL;
      v10 = a1[1];
      v11 = *(v9 - 1);
      memset(&v16.m256i_u64[1], 0, 24);
      DWORD2(v15) = v6;
      HIDWORD(v15) = *(v9 - 2);
      v16.m256i_i32[1] = *v9;
      v16.m256i_i32[0] = v11;
      if ( v10 == a1[2] )
      {
        std::vector<SuperWetInkBallpointPenPoint>::_Emplace_reallocate<SuperWetInkBallpointPenPoint const &>(
          a1,
          v10,
          &v15);
      }
      else
      {
        v12 = *(_OWORD *)v16.m256i_i8;
        *(_OWORD *)v10 = v15;
        v13 = *(_OWORD *)&v16.m256i_u64[2];
        *(_OWORD *)(v10 + 16) = v12;
        *(_QWORD *)&v12 = v17;
        *(_OWORD *)(v10 + 32) = v13;
        *(_QWORD *)(v10 + 48) = v12;
        a1[1] += 56LL;
      }
      v9 += 3;
      --v8;
    }
    while ( v8 );
  }
  return a1;
}
