/*
 * XREFs of ?CalcAverageDwmPresentLatency@CTouchFrameStats@@IEBAMXZ @ 0x1801A7270
 * Callers:
 *     ?SendTelemetry@CInteractionFrameStats@@MEAAXXZ @ 0x1801A59E0 (-SendTelemetry@CInteractionFrameStats@@MEAAXXZ.c)
 *     ?SendTelemetry@CTouchFrameStats@@MEAAXXZ @ 0x1801A8B60 (-SendTelemetry@CTouchFrameStats@@MEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBM@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z @ 0x18016FC80 (--$_Emplace_reallocate@AEBM@-$vector@MV-$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z.c)
 *     ?DwmPresentUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z @ 0x1801A8488 (-DwmPresentUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z.c)
 *     ?Presented@CInteractionInfo@CTouchFrameStats@@QEBA_NXZ @ 0x1801A88F0 (-Presented@CInteractionInfo@CTouchFrameStats@@QEBA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
float __fastcall CTouchFrameStats::CalcAverageDwmPresentLatency(CTouchFrameStats::CInteractionInfo **this)
{
  unsigned __int64 v2; // r15
  double v3; // xmm6_8
  double v4; // xmm7_8
  float *v5; // rbx
  CTouchFrameStats::CInteractionInfo *v6; // rdi
  CTouchFrameStats::CInteractionInfo *v7; // r14
  _BYTE *v8; // r11
  CTouchFrameStats::CInteractionInfo *v9; // r8
  CTouchFrameStats::CInteractionInfo *v10; // rcx
  float *v11; // r11
  float v12; // xmm0_4
  __int64 v13; // r11
  double v14; // xmm0_8
  float v15; // xmm6_4
  __int128 v17; // [rsp+20h] [rbp-40h] BYREF
  float *v18; // [rsp+30h] [rbp-30h]
  float v19; // [rsp+80h] [rbp+20h] BYREF

  v2 = (*((__int64 (__fastcall **)(CTouchFrameStats::CInteractionInfo **))*this + 6))(this);
  v3 = 0.0;
  v4 = 0.0;
  v17 = 0LL;
  v5 = 0LL;
  v18 = 0LL;
  v6 = this[30];
  v7 = this[31];
  v8 = 0LL;
  if ( v6 != v7 )
  {
    v9 = this[30];
    do
    {
      if ( v6 != v9 && CTouchFrameStats::CInteractionInfo::Presented(v6) )
      {
        v12 = (float)(int)CTouchFrameStats::CInteractionInfo::DwmPresentUs(v10, v2);
        v19 = v12;
        if ( v11 == v5 )
        {
          std::vector<float>::_Emplace_reallocate<float const &>((__int64)&v17, v11, &v19);
          v5 = v18;
          v8 = (_BYTE *)*((_QWORD *)&v17 + 1);
          v12 = v19;
        }
        else
        {
          *v11 = v12;
          v8 = v11 + 1;
          *((_QWORD *)&v17 + 1) = v8;
        }
        v4 = v4 + v12;
        v9 = this[30];
      }
      v6 = (CTouchFrameStats::CInteractionInfo *)((char *)v6 + 224);
    }
    while ( v6 != v7 );
  }
  v13 = (__int64)&v8[-v17] >> 2;
  if ( v13 )
  {
    if ( v13 < 0 )
      v14 = (double)(int)(v13 & 1 | ((unsigned __int64)v13 >> 1))
          + (double)(int)(v13 & 1 | ((unsigned __int64)v13 >> 1));
    else
      v14 = (double)(int)v13;
    v3 = v4 / v14;
  }
  v15 = v3;
  if ( (_QWORD)v17 )
    std::_Deallocate<16,0>((void *)v17, ((unsigned __int64)v5 - v17) & 0xFFFFFFFFFFFFFFFCuLL);
  return v15;
}
