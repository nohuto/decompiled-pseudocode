/*
 * XREFs of ?CalcAverageIsmLatency@CTouchFrameStats@@IEBAMXZ @ 0x1801A7808
 * Callers:
 *     ?SendTelemetry@CInteractionFrameStats@@MEAAXXZ @ 0x1801A59E0 (-SendTelemetry@CInteractionFrameStats@@MEAAXXZ.c)
 *     ?SendTelemetry@CTouchFrameStats@@MEAAXXZ @ 0x1801A8B60 (-SendTelemetry@CTouchFrameStats@@MEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBM@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z @ 0x18016FC80 (--$_Emplace_reallocate@AEBM@-$vector@MV-$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z.c)
 *     ?IsmUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z @ 0x1801A8888 (-IsmUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z.c)
 */

float __fastcall CTouchFrameStats::CalcAverageIsmLatency(CTouchFrameStats::CInteractionInfo **this)
{
  unsigned __int64 v2; // r14
  double v3; // xmm6_8
  double v4; // xmm7_8
  float *v5; // r11
  CTouchFrameStats::CInteractionInfo *v6; // rbx
  CTouchFrameStats::CInteractionInfo *v7; // rsi
  _BYTE *v8; // r10
  CTouchFrameStats::CInteractionInfo *v9; // rax
  float *v10; // r10
  float v11; // xmm0_4
  __int64 v12; // r10
  double v13; // xmm0_8
  float v14; // xmm6_4
  __int128 v16; // [rsp+20h] [rbp-40h] BYREF
  float *v17; // [rsp+30h] [rbp-30h]
  float v18; // [rsp+80h] [rbp+20h] BYREF

  v2 = (*((__int64 (__fastcall **)(CTouchFrameStats::CInteractionInfo **))*this + 6))(this);
  v3 = 0.0;
  v4 = 0.0;
  v16 = 0LL;
  v5 = 0LL;
  v17 = 0LL;
  v6 = this[30];
  v7 = this[31];
  v8 = 0LL;
  if ( v6 != v7 )
  {
    v9 = this[30];
    do
    {
      if ( v6 != v9 )
      {
        v11 = (float)(int)CTouchFrameStats::CInteractionInfo::IsmUs(v6, v2);
        v18 = v11;
        if ( v10 == v5 )
        {
          std::vector<float>::_Emplace_reallocate<float const &>((__int64)&v16, v10, &v18);
          v5 = v17;
          v8 = (_BYTE *)*((_QWORD *)&v16 + 1);
          v11 = v18;
        }
        else
        {
          *v10 = v11;
          v8 = v10 + 1;
          *((_QWORD *)&v16 + 1) = v8;
        }
        v4 = v4 + v11;
        v9 = this[30];
      }
      v6 = (CTouchFrameStats::CInteractionInfo *)((char *)v6 + 224);
    }
    while ( v6 != v7 );
  }
  v12 = (__int64)&v8[-v16] >> 2;
  if ( v12 )
  {
    if ( v12 < 0 )
      v13 = (double)(int)(v12 & 1 | ((unsigned __int64)v12 >> 1))
          + (double)(int)(v12 & 1 | ((unsigned __int64)v12 >> 1));
    else
      v13 = (double)(int)v12;
    v3 = v4 / v13;
  }
  v14 = v3;
  if ( (_QWORD)v16 )
    std::_Deallocate<16,0>((void *)v16, ((unsigned __int64)v5 - v16) & 0xFFFFFFFFFFFFFFFCuLL);
  return v14;
}
