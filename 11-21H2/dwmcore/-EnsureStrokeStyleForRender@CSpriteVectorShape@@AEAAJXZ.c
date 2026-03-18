/*
 * XREFs of ?EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ @ 0x18023F4B0
 * Callers:
 *     ?CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z @ 0x1800972E8 (-CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z.c)
 * Callees:
 *     ??$?0M$0?0$0?0$0A@@?$span@$$CBM$0?0@gsl@@QEAA@AEBV?$span@M$0?0@1@@Z @ 0x18003B958 (--$-0M$0-0$0-0$0A@@-$span@$$CBM$0-0@gsl@@QEAA@AEBV-$span@M$0-0@1@@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18003C050 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_Tidy@?$vector@MV?$allocator@M@std@@@std@@AEAAXXZ @ 0x1800EAEBC (-_Tidy@-$vector@MV-$allocator@M@std@@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 *     ?reserve@?$vector@MV?$allocator@M@std@@@std@@QEAAX_K@Z @ 0x1801A69CC (-reserve@-$vector@MV-$allocator@M@std@@@std@@QEAAX_K@Z.c)
 *     ??$_Emplace_reallocate@M@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAM$$QEAM@Z @ 0x18022BD54 (--$_Emplace_reallocate@M@-$vector@MV-$allocator@M@std@@@std@@QEAAPEAMQEAM$$QEAM@Z.c)
 */

__int64 __fastcall CSpriteVectorShape::EnsureStrokeStyleForRender(CSpriteVectorShape *this)
{
  unsigned int v1; // ebx
  __int64 *v2; // r14
  float v4; // xmm0_4
  __int64 v5; // rdx
  float v6; // xmm6_4
  float *v7; // r15
  float *v8; // rsi
  float *v9; // rbx
  float v10; // xmm0_4
  float v11; // xmm0_4
  __int64 v12; // rsi
  __int64 v13; // rcx
  gsl::details *v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  float v18; // [rsp+38h] [rbp-49h] BYREF
  __int128 v19; // [rsp+40h] [rbp-41h] BYREF
  float *v20; // [rsp+50h] [rbp-31h]
  _QWORD v21[2]; // [rsp+58h] [rbp-29h] BYREF
  _QWORD v22[2]; // [rsp+68h] [rbp-19h] BYREF
  _DWORD v23[4]; // [rsp+78h] [rbp-9h] BYREF
  int v24; // [rsp+88h] [rbp+7h]
  int v25; // [rsp+8Ch] [rbp+Bh]
  float v26; // [rsp+90h] [rbp+Fh]
  BOOL v27; // [rsp+94h] [rbp+13h]

  v1 = 0;
  v2 = (__int64 *)((char *)this + 136);
  if ( !*((_QWORD *)this + 17) )
  {
    v4 = fmaxf(0.0, *((float *)this + 52));
    v5 = *((_QWORD *)this + 21) - *((_QWORD *)this + 20);
    v20 = 0LL;
    v6 = 1.0 / v4;
    v19 = 0LL;
    std::vector<float>::reserve(&v19, v5 >> 2);
    v7 = (float *)*((_QWORD *)this + 21);
    v8 = (float *)*((_QWORD *)this + 20);
    v9 = (float *)*((_QWORD *)&v19 + 1);
    while ( v8 != v7 )
    {
      v10 = v6 * *v8;
      v18 = v10;
      if ( v9 == v20 )
      {
        std::vector<float>::_Emplace_reallocate<float>(&v19, v9, &v18);
        v9 = (float *)*((_QWORD *)&v19 + 1);
      }
      else
      {
        *v9++ = v10;
        *((_QWORD *)&v19 + 1) = v9;
      }
      ++v8;
    }
    v11 = *((float *)this + 51);
    v23[0] = *((_DWORD *)this + 47);
    v23[1] = *((_DWORD *)this + 48);
    v23[2] = *((_DWORD *)this + 46);
    v23[3] = *((_DWORD *)this + 49);
    if ( v11 >= 1.0 )
      v24 = LODWORD(v11);
    else
      v24 = 1065353216;
    v12 = v19;
    v13 = *v2;
    v26 = v6 * *((float *)this + 50);
    v25 = v9 != (float *)v19 ? 5 : 0;
    v27 = *((_BYTE *)this + 212) != 0;
    if ( v13 )
    {
      *v2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)v21, ((__int64)v9 - v12) >> 2);
    v21[1] = v12;
    if ( v21[0] == -1LL || !v12 && v21[0] )
    {
      gsl::details::terminate(v14);
      JUMPOUT(0x18023F6F7LL);
    }
    gsl::span<float const,-1>::span<float const,-1>(v22, v21);
    v15 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD, _QWORD, __int64 *))(*g_DeviceManager + 144LL))(
            g_DeviceManager,
            v23,
            v22[1],
            LODWORD(v22[0]),
            v2);
    v1 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0LL, v15, 0x1FFu);
    std::vector<float>::_Tidy((__int64)&v19);
  }
  return v1;
}
