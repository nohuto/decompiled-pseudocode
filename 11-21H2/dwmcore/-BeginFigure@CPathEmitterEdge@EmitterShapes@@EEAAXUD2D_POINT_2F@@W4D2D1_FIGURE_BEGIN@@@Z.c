/*
 * XREFs of ?BeginFigure@CPathEmitterEdge@EmitterShapes@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x1802590F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$vector@MV?$allocator@M@std@@@std@@AEAAXXZ @ 0x1800EAEBC (-_Tidy@-$vector@MV-$allocator@M@std@@@std@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ @ 0x180195BD0 (-_Tidy@-$vector@PEAVCDataSourceReader@@V-$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ.c)
 *     ??0?$vector@_KV?$allocator@_K@std@@@std@@QEAA@AEBV01@@Z @ 0x1801D1B40 (--0-$vector@_KV-$allocator@_K@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Emplace_reallocate@M@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAM$$QEAM@Z @ 0x18022BD54 (--$_Emplace_reallocate@M@-$vector@MV-$allocator@M@std@@@std@@QEAAPEAMQEAM$$QEAM@Z.c)
 *     ??$_Emplace_reallocate@Ufloat2@Numerics@Foundation@Windows@@@?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@QEAAPEAUfloat2@Numerics@Foundation@Windows@@QEAU2345@$$QEAU2345@@Z @ 0x18022BE40 (--$_Emplace_reallocate@Ufloat2@Numerics@Foundation@Windows@@@-$vector@Ufloat2@Numerics@Foundatio.c)
 *     ??$_Emplace_reallocate@AEBUFigure@CPathEmitterEdge@EmitterShapes@@@?$vector@UFigure@CPathEmitterEdge@EmitterShapes@@V?$allocator@UFigure@CPathEmitterEdge@EmitterShapes@@@std@@@std@@QEAAPEAUFigure@CPathEmitterEdge@EmitterShapes@@QEAU234@AEBU234@@Z @ 0x180257FFC (--$_Emplace_reallocate@AEBUFigure@CPathEmitterEdge@EmitterShapes@@@-$vector@UFigure@CPathEmitter.c)
 *     ??0?$vector@MV?$allocator@M@std@@@std@@QEAA@AEBV01@@Z @ 0x180258CB0 (--0-$vector@MV-$allocator@M@std@@@std@@QEAA@AEBV01@@Z.c)
 */

void __fastcall EmitterShapes::CPathEmitterEdge::BeginFigure(
        EmitterShapes::CPathEmitterEdge *this,
        struct D2D_POINT_2F a2,
        enum D2D1_FIGURE_BEGIN a3)
{
  __int64 v4; // rdx
  __int64 v5; // rbx
  int v6; // xmm0_4
  __int128 v7; // [rsp+20h] [rbp-40h] BYREF
  __int128 v8; // [rsp+30h] [rbp-30h] BYREF
  __int128 v9; // [rsp+40h] [rbp-20h]
  int v10; // [rsp+50h] [rbp-10h]
  struct D2D_POINT_2F v11; // [rsp+80h] [rbp+20h] BYREF
  struct D2D_POINT_2F v12; // [rsp+98h] [rbp+38h] BYREF

  v11 = a2;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v12 = a2;
  std::vector<Windows::Foundation::Numerics::float2>::_Emplace_reallocate<Windows::Foundation::Numerics::float2>(
    &v7,
    0LL,
    &v12);
  v4 = v9;
  v11.x = 0.0;
  if ( (_QWORD)v9 == *((_QWORD *)&v9 + 1) )
  {
    std::vector<float>::_Emplace_reallocate<float>((_QWORD *)&v8 + 1, (_BYTE *)v9, &v11);
  }
  else
  {
    *(_DWORD *)v9 = 0;
    *(_QWORD *)&v9 = v4 + 4;
  }
  v5 = *((_QWORD *)this + 4);
  if ( v5 == *((_QWORD *)this + 5) )
  {
    std::vector<EmitterShapes::CPathEmitterEdge::Figure>::_Emplace_reallocate<EmitterShapes::CPathEmitterEdge::Figure const &>(
      (__int64 *)this + 3,
      *((_QWORD *)this + 4),
      (__int64)&v7);
  }
  else
  {
    std::vector<unsigned __int64>::vector<unsigned __int64>(*((_QWORD **)this + 4), (__int64)&v7);
    std::vector<float>::vector<float>((_QWORD *)(v5 + 24), (__int64)&v8 + 8);
    v6 = v10;
    *((_QWORD *)this + 4) += 56LL;
    *(_DWORD *)(v5 + 48) = v6;
  }
  std::vector<float>::_Tidy((__int64)&v8 + 8);
  std::vector<CDataSourceReader *>::_Tidy((__int64)&v7);
}
