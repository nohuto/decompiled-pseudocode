/*
 * XREFs of ?CalcAverageVSyncsMissed@CTouchFrameStats@@IEBAMXZ @ 0x1801A7EF0
 * Callers:
 *     ?SendTelemetry@CInteractionFrameStats@@MEAAXXZ @ 0x1801A59E0 (-SendTelemetry@CInteractionFrameStats@@MEAAXXZ.c)
 *     ?SendTelemetry@CTouchFrameStats@@MEAAXXZ @ 0x1801A8B60 (-SendTelemetry@CTouchFrameStats@@MEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@AEBM@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z @ 0x18016FC80 (--$_Emplace_reallocate@AEBM@-$vector@MV-$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z.c)
 *     ?Presented@CInteractionInfo@CTouchFrameStats@@QEBA_NXZ @ 0x1801A88F0 (-Presented@CInteractionInfo@CTouchFrameStats@@QEBA_NXZ.c)
 *     ?VSyncsMissed@CInteractionInfo@CTouchFrameStats@@QEBAGXZ @ 0x1801A954C (-VSyncsMissed@CInteractionInfo@CTouchFrameStats@@QEBAGXZ.c)
 */

// Hidden C++ exception states: #wind=1
float __fastcall CTouchFrameStats::CalcAverageVSyncsMissed(CTouchFrameStats *this)
{
  double v2; // xmm6_8
  double v3; // xmm7_8
  float *v4; // r11
  CTouchFrameStats::CInteractionInfo *v5; // rbx
  CTouchFrameStats::CInteractionInfo *v6; // rsi
  _BYTE *v7; // r10
  CTouchFrameStats::CInteractionInfo *v8; // r8
  CTouchFrameStats::CInteractionInfo *v9; // rcx
  float *v10; // r10
  float v11; // xmm0_4
  __int64 v12; // r10
  double v13; // xmm0_8
  float v14; // xmm6_4
  __int128 v16; // [rsp+20h] [rbp-40h] BYREF
  float *v17; // [rsp+30h] [rbp-30h]
  float v18; // [rsp+70h] [rbp+10h] BYREF

  v2 = 0.0;
  v3 = 0.0;
  v16 = 0LL;
  v4 = 0LL;
  v17 = 0LL;
  v5 = (CTouchFrameStats::CInteractionInfo *)*((_QWORD *)this + 30);
  v6 = (CTouchFrameStats::CInteractionInfo *)*((_QWORD *)this + 31);
  v7 = 0LL;
  if ( v5 != v6 )
  {
    v8 = (CTouchFrameStats::CInteractionInfo *)*((_QWORD *)this + 30);
    do
    {
      if ( v5 != v8 && CTouchFrameStats::CInteractionInfo::Presented(v5) )
      {
        v11 = (float)CTouchFrameStats::CInteractionInfo::VSyncsMissed(v9);
        v18 = v11;
        if ( v10 == v4 )
        {
          std::vector<float>::_Emplace_reallocate<float const &>((__int64)&v16, v10, &v18);
          v4 = v17;
          v7 = (_BYTE *)*((_QWORD *)&v16 + 1);
          v11 = v18;
        }
        else
        {
          *v10 = v11;
          v7 = v10 + 1;
          *((_QWORD *)&v16 + 1) = v7;
        }
        v3 = v3 + v11;
        v8 = (CTouchFrameStats::CInteractionInfo *)*((_QWORD *)this + 30);
      }
      v5 = (CTouchFrameStats::CInteractionInfo *)((char *)v5 + 224);
    }
    while ( v5 != v6 );
  }
  v12 = (__int64)&v7[-v16] >> 2;
  if ( v12 )
  {
    if ( v12 < 0 )
      v13 = (double)(int)(v12 & 1 | ((unsigned __int64)v12 >> 1))
          + (double)(int)(v12 & 1 | ((unsigned __int64)v12 >> 1));
    else
      v13 = (double)(int)v12;
    v2 = v3 / v13;
  }
  v14 = v2;
  if ( (_QWORD)v16 )
    std::_Deallocate<16,0>((void *)v16, ((unsigned __int64)v4 - v16) & 0xFFFFFFFFFFFFFFFCuLL);
  return v14;
}
