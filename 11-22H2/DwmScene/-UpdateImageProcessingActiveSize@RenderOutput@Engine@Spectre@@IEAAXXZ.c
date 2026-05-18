/*
 * XREFs of ?UpdateImageProcessingActiveSize@RenderOutput@Engine@Spectre@@IEAAXXZ @ 0x18002D008
 * Callers:
 *     ?UpdateRenderTarget@RenderOutput@Engine@Spectre@@UEAAXMMMM@Z @ 0x18002D130 (-UpdateRenderTarget@RenderOutput@Engine@Spectre@@UEAAXMMMM@Z.c)
 *     ?SetSwapChainScaling@RenderOutputD3D11Xaml@D3D11@Engine@Spectre@@EEAAXXZ @ 0x1800CA990 (-SetSwapChainScaling@RenderOutputD3D11Xaml@D3D11@Engine@Spectre@@EEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?SetActiveSize@FrameBuffer@Engine@Spectre@@QEAAXUVector2@Math@Utils@3@@Z @ 0x180028B1C (-SetActiveSize@FrameBuffer@Engine@Spectre@@QEAAXUVector2@Math@Utils@3@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::RenderOutput::UpdateImageProcessingActiveSize(Spectre::Engine::RenderOutput *this)
{
  __m128 v1; // xmm0
  _QWORD *v3; // rax
  __int64 v4; // rcx
  float v5; // xmm6_4
  __m128 v6; // xmm7
  float v7; // xmm6_4
  __int64 v8; // [rsp+20h] [rbp-38h] BYREF
  std::_Ref_count_base *v9; // [rsp+28h] [rbp-30h]

  v3 = (_QWORD *)(*(__int64 (__fastcall **)(Spectre::Engine::RenderOutput *))(*(_QWORD *)this + 152LL))(this);
  if ( std::operator!=<Spectre::Engine::Scene>(v3) )
  {
    std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
      &v8,
      (_QWORD *)(*(_QWORD *)v4 + 456LL));
    if ( std::operator!=<Spectre::Engine::Scene>(&v8) )
    {
      v5 = (float)(*(int (__fastcall **)(Spectre::Engine::RenderOutput *))(*(_QWORD *)this + 88LL))(this);
      *(double *)v1.m128_u64 = (*(double (__fastcall **)(Spectre::Engine::RenderOutput *))(*(_QWORD *)this + 136LL))(this);
      v6 = v1;
      v6.m128_f32[0] = v1.m128_f32[0] * v5;
      v7 = (float)(*(int (__fastcall **)(Spectre::Engine::RenderOutput *))(*(_QWORD *)this + 80LL))(this);
      *(double *)v1.m128_u64 = (*(double (__fastcall **)(Spectre::Engine::RenderOutput *))(*(_QWORD *)this + 128LL))(this);
      v1.m128_f32[0] = v1.m128_f32[0] * v7;
      Spectre::Engine::FrameBuffer::SetActiveSize(v8, _mm_unpacklo_ps(v1, v6).m128_i64[0]);
    }
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
  }
}
