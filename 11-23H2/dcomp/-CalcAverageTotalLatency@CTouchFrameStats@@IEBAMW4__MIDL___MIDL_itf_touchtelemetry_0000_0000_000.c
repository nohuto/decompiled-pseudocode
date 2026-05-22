/*
 * XREFs of ?CalcAverageTotalLatency@CTouchFrameStats@@IEBAMW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0006@@@Z @ 0x1801A7D80
 * Callers:
 *     ?SendTelemetry@CInteractionFrameStats@@MEAAXXZ @ 0x1801A59E0 (-SendTelemetry@CInteractionFrameStats@@MEAAXXZ.c)
 *     ?SendTelemetry@CTouchFrameStats@@MEAAXXZ @ 0x1801A8B60 (-SendTelemetry@CTouchFrameStats@@MEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBM@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z @ 0x18016FC80 (--$_Emplace_reallocate@AEBM@-$vector@MV-$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z.c)
 *     ?TotalLatencyMs@CInteractionInfo@CTouchFrameStats@@QEBAGW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0006@@_K@Z @ 0x1801A94E4 (-TotalLatencyMs@CInteractionInfo@CTouchFrameStats@@QEBAGW4__MIDL___MIDL_itf_touchtelemetry_0000_.c)
 */

// Hidden C++ exception states: #wind=1
__m128 __fastcall CTouchFrameStats::CalcAverageTotalLatency(_QWORD *a1, unsigned int a2)
{
  __int64 v4; // r13
  __int128 v5; // xmm6
  __int128 v6; // xmm7
  float *v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r15
  float *v10; // rbx
  __int64 v11; // rax
  float v12; // xmm0_4
  __int64 v13; // rbx
  double v14; // xmm0_8
  __int128 v16; // [rsp+20h] [rbp-40h] BYREF
  float *v17; // [rsp+30h] [rbp-30h]
  float v18; // [rsp+90h] [rbp+30h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 48LL))(a1);
  v5 = 0LL;
  v6 = 0LL;
  v16 = 0LL;
  v7 = 0LL;
  v17 = 0LL;
  v8 = a1[30];
  v9 = a1[31];
  v10 = 0LL;
  if ( v8 != v9 )
  {
    v11 = a1[30];
    do
    {
      if ( v8 != v11 )
      {
        v12 = (float)(unsigned __int16)CTouchFrameStats::CInteractionInfo::TotalLatencyMs(v8, a2, v4);
        v18 = v12;
        if ( v10 == v7 )
        {
          std::vector<float>::_Emplace_reallocate<float const &>((__int64)&v16, v10, &v18);
          v7 = v17;
          v10 = (float *)*((_QWORD *)&v16 + 1);
          v12 = v18;
        }
        else
        {
          *v10++ = v12;
          *((_QWORD *)&v16 + 1) = v10;
        }
        *(double *)&v6 = *(double *)&v6 + v12;
        v11 = a1[30];
      }
      v8 += 224LL;
    }
    while ( v8 != v9 );
  }
  v13 = (__int64)((__int64)v10 - v16) >> 2;
  if ( v13 )
  {
    if ( v13 < 0 )
      v14 = (double)(int)(v13 & 1 | ((unsigned __int64)v13 >> 1))
          + (double)(int)(v13 & 1 | ((unsigned __int64)v13 >> 1));
    else
      v14 = (double)(int)v13;
    *((_QWORD *)&v5 + 1) = *((_QWORD *)&v6 + 1);
    *(double *)&v5 = *(double *)&v6 / v14;
  }
  *(float *)&v5 = *(double *)&v5;
  if ( (_QWORD)v16 )
    std::_Deallocate<16,0>((void *)v16, ((unsigned __int64)v7 - v16) & 0xFFFFFFFFFFFFFFFCuLL);
  return (__m128)v5;
}
