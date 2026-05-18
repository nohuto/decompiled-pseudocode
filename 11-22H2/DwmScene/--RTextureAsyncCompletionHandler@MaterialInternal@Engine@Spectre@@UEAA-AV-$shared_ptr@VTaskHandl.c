/*
 * XREFs of ??RTextureAsyncCompletionHandler@MaterialInternal@Engine@Spectre@@UEAA?AV?$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@V?$shared_ptr@VRendererResource@Engine@Spectre@@@5@@Z @ 0x180043C60
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$static_pointer_cast@VTexture@Engine@Spectre@@VRendererResource@23@@std@@YA?AV?$shared_ptr@VTexture@Engine@Spectre@@@0@AEBV?$shared_ptr@VRendererResource@Engine@Spectre@@@0@@Z @ 0x180043900 (--$static_pointer_cast@VTexture@Engine@Spectre@@VRendererResource@23@@std@@YA-AV-$shared_ptr@VTe.c)
 *     ?OnTextureAsyncLoaded@Material@Engine@Spectre@@QEAAXV?$shared_ptr@VTexture@Engine@Spectre@@@std@@W4ShaderProperty@23@_K@Z @ 0x180044474 (-OnTextureAsyncLoaded@Material@Engine@Spectre@@QEAAXV-$shared_ptr@VTexture@Engine@Spectre@@@std@.c)
 *     ?GetCompletedTaskHandler@Utils@Spectre@@YA?AV?$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@XZ @ 0x1800DF714 (-GetCompletedTaskHandler@Utils@Spectre@@YA-AV-$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Spectre::Engine::MaterialInternal::TextureAsyncCompletionHandler::operator()(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v5; // r11
  __int64 v6; // rsi
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r10
  std::_Ref_count_base *v10; // rcx
  __int64 v12; // [rsp+28h] [rbp-40h] BYREF
  std::_Ref_count_base *v13; // [rsp+30h] [rbp-38h]
  __int64 v14; // [rsp+38h] [rbp-30h] BYREF
  std::_Ref_count_base *v15; // [rsp+40h] [rbp-28h]
  _QWORD v16[3]; // [rsp+48h] [rbp-20h] BYREF

  std::static_pointer_cast<Spectre::Engine::Texture,Spectre::Engine::RendererResource>(&v12, a3);
  if ( v12 )
    v6 = *(_QWORD *)(v12 + 152);
  else
    v6 = *(_QWORD *)(v5 + 32);
  if ( *(_WORD *)(v5 + 24) != 511 )
  {
    std::weak_ptr<Spectre::Engine::RenderDevice>::lock(v5 + 8, &v14);
    if ( v14 )
    {
      v7 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
             v16,
             &v12);
      Spectre::Engine::Material::OnTextureAsyncLoaded(v9, v7, v8, v6);
    }
    if ( v15 )
      std::_Ref_count_base::_Decref(v15);
  }
  Spectre::Utils::GetCompletedTaskHandler(a2);
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  v10 = (std::_Ref_count_base *)a3[1];
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  return a2;
}
