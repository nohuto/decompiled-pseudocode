/*
 * XREFs of ?SetRenderState@Material@Engine@Spectre@@QEAAXW4BlendMode@23@W4DepthMode@23@W4CullMode@23@@Z @ 0x180044718
 * Callers:
 *     ?FillBackground@ViewerEngine@Engine@Spectre@@MEAAXAEAVShaderManager@23@AEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x1800666A0 (-FillBackground@ViewerEngine@Engine@Spectre@@MEAAXAEAVShaderManager@23@AEBV-$shared_ptr@VScene@E.c)
 *     ?Display@ImageProcessingManager@Engine@Spectre@@IEAAXAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@AEBV?$shared_ptr@VTexture@Engine@Spectre@@@5@@Z @ 0x180072F50 (-Display@ImageProcessingManager@Engine@Spectre@@IEAAXAEBV-$shared_ptr@VIRenderOutput@Engine@Spec.c)
 *     ?ApplyBloom@ImageProcessingEffectBloom@Engine@Spectre@@MEAAXPEAVRenderDevice@23@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@V?$shared_ptr@VTexture@Engine@Spectre@@@6@2@Z @ 0x180095DA0 (-ApplyBloom@ImageProcessingEffectBloom@Engine@Spectre@@MEAAXPEAVRenderDevice@23@AEBV-$shared_ptr.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?GetTexture@FrameBuffer@Engine@Spectre@@QEBA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@XZ @ 0x180026A84 (-GetTexture@FrameBuffer@Engine@Spectre@@QEBA-AV-$shared_ptr@VTexture@Engine@Spectre@@@std@@XZ.c)
 *     ??$CreateResource@VRenderState@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VRenderState@Engine@Spectre@@@std@@XZ @ 0x180043528 (--$CreateResource@VRenderState@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ea_180043528.c)
 *     ??8RenderStateDesc@Engine@Spectre@@QEBA_NAEBU012@@Z @ 0x180043B4C (--8RenderStateDesc@Engine@Spectre@@QEBA_NAEBU012@@Z.c)
 *     ?GetEngine@ShaderManager@Engine@Spectre@@QEBAPEAV223@XZ @ 0x18004FA78 (-GetEngine@ShaderManager@Engine@Spectre@@QEBAPEAV223@XZ.c)
 *     ?GetShaderManager@ShaderFamily@Engine@Spectre@@QEBA?AV?$shared_ptr@VShaderManager@Engine@Spectre@@@std@@XZ @ 0x180060D1C (-GetShaderManager@ShaderFamily@Engine@Spectre@@QEBA-AV-$shared_ptr@VShaderManager@Engine@Spectre.c)
 *     ?Create@RenderState@Engine@Spectre@@UEAAXAEBURenderStateDesc@23@PEAVRenderDevice@23@@Z @ 0x180088360 (-Create@RenderState@Engine@Spectre@@UEAAXAEBURenderStateDesc@23@PEAVRenderDevice@23@@Z.c)
 */

void __fastcall Spectre::Engine::Material::SetRenderState(__int64 a1, int a2, int a3, int a4)
{
  _QWORD *Texture; // rax
  Spectre::Engine::ShaderManager **ShaderManager; // rax
  __int64 *Engine; // r15
  __int64 v11; // rcx
  __int64 *v12; // rax
  _BYTE v13[8]; // [rsp+28h] [rbp-39h] BYREF
  std::_Ref_count_base *v14; // [rsp+30h] [rbp-31h]
  __int64 v15; // [rsp+38h] [rbp-29h] BYREF
  std::_Ref_count_base *v16; // [rsp+40h] [rbp-21h]
  _BYTE v17[8]; // [rsp+48h] [rbp-19h] BYREF
  std::_Ref_count_base *v18; // [rsp+50h] [rbp-11h]
  _DWORD v19[6]; // [rsp+58h] [rbp-9h] BYREF
  char v20; // [rsp+70h] [rbp+Fh]
  __int128 v21; // [rsp+74h] [rbp+13h]
  __int128 v22; // [rsp+84h] [rbp+23h]
  char v23; // [rsp+94h] [rbp+33h]
  bool v24; // [rsp+95h] [rbp+34h]
  char v25; // [rsp+96h] [rbp+35h]
  __int16 v26; // [rsp+97h] [rbp+36h]
  int v27; // [rsp+9Ch] [rbp+3Bh]

  Texture = (_QWORD *)Spectre::Engine::FrameBuffer::GetTexture(a1, &v15);
  ShaderManager = (Spectre::Engine::ShaderManager **)Spectre::Engine::ShaderFamily::GetShaderManager(*Texture, v13);
  Engine = (__int64 *)Spectre::Engine::ShaderManager::GetEngine(*ShaderManager);
  if ( v14 )
    std::_Ref_count_base::_Decref(v14);
  if ( v16 )
    std::_Ref_count_base::_Decref(v16);
  v19[0] = 0;
  v19[3] = 0;
  v19[4] = 0;
  v19[5] = 0;
  v11 = *(_QWORD *)(a1 + 168);
  v20 = 0;
  v24 = a3 == 1;
  v23 = 1;
  v26 = 256;
  v27 = 3;
  v25 = 0;
  v19[2] = a2;
  v19[1] = a4;
  v21 = 0LL;
  v22 = 0LL;
  if ( !v11 || !Spectre::Engine::RenderStateDesc::operator==(*(_QWORD *)(v11 + 112), (__int64)v19) )
  {
    v12 = (__int64 *)Spectre::Engine::Engine::CreateResource<Spectre::Engine::RenderState,>(Engine, (__int64)v17);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)(a1 + 168), v12);
    if ( v18 )
      std::_Ref_count_base::_Decref(v18);
    Spectre::Engine::RenderState::Create(
      *(Spectre::Engine::RenderState **)(a1 + 168),
      (const struct Spectre::Engine::RenderStateDesc *)v19,
      0LL);
  }
}
