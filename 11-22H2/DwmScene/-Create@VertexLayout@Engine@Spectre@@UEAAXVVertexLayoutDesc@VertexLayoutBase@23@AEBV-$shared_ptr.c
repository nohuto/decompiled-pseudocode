/*
 * XREFs of ?Create@VertexLayout@Engine@Spectre@@UEAAXVVertexLayoutDesc@VertexLayoutBase@23@AEBV?$shared_ptr@VShaderProgram@Engine@Spectre@@@std@@@Z @ 0x18008C1B0
 * Callers:
 *     ?AttachDevice@ShaderPipeline@Engine@Spectre@@QEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180086B60 (-AttachDevice@ShaderPipeline@Engine@Spectre@@QEAAXV-$shared_ptr@VRenderDevice@Engine@Spectre@@@s.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy@?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@std@@AEAAXXZ @ 0x180013300 (-_Tidy@-$vector@V-$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VLigh.c)
 *     ??$?4VTexture@Engine@Spectre@@@?$weak_ptr@VTexture@Engine@Spectre@@@std@@QEAAAEAV01@AEBV?$shared_ptr@VTexture@Engine@Spectre@@@1@@Z @ 0x180015630 (--$-4VTexture@Engine@Spectre@@@-$weak_ptr@VTexture@Engine@Spectre@@@std@@QEAAAEAV01@AEBV-$shared.c)
 *     ?GetEngine@SharedResource@Engine@Spectre@@UEBAPEAV223@XZ @ 0x1800295B0 (-GetEngine@SharedResource@Engine@Spectre@@UEBAPEAV223@XZ.c)
 *     ?GetOption@RendererResource@Engine@Spectre@@QEBA_NW4EResourceOption@123@@Z @ 0x1800295E4 (-GetOption@RendererResource@Engine@Spectre@@QEBA_NW4EResourceOption@123@@Z.c)
 *     ?SafeGetDeviceList@Engine@1Spectre@@QEAA?AV?$vector@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@2@@std@@XZ @ 0x1800364DC (-SafeGetDeviceList@Engine@1Spectre@@QEAA-AV-$vector@V-$shared_ptr@VRenderDevice@Engine@Spectre@@.c)
 *     ??4?$vector@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18008693C (--4-$vector@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V-$allocator@UVertexElementDesc@.c)
 *     ?AttachDevice@VertexLayout@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18008BE40 (-AttachDevice@VertexLayout@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::VertexLayout::Create(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // r14
  Spectre::Engine::SharedResource *v7; // rcx
  struct Spectre::Engine::Engine *Engine; // rax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // [rsp+20h] [rbp-30h] BYREF
  std::_Ref_count_base *v13; // [rsp+28h] [rbp-28h]
  __int64 v14; // [rsp+30h] [rbp-20h] BYREF
  __int64 v15; // [rsp+38h] [rbp-18h]

  *(_DWORD *)(a1 + 96) = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 8);
  v6 = a2 + 16;
  std::vector<Spectre::Engine::VertexLayoutBase::VertexElementDesc>::operator=(
    (_QWORD *)(a1 + 112),
    (_QWORD *)(a2 + 16));
  *(_QWORD *)(a1 + 136) = *(_QWORD *)(a2 + 40);
  std::weak_ptr<Spectre::Engine::Texture>::operator=<Spectre::Engine::Texture>((_QWORD *)(a1 + 160), a3);
  if ( Spectre::Engine::RendererResource::GetOption(a1, 1) )
  {
    Engine = Spectre::Engine::SharedResource::GetEngine(v7);
    Spectre::Engine::Engine::SafeGetDeviceList((__int64)Engine, &v14);
    v9 = 0;
    v10 = v14;
    if ( (v15 - v14) >> 4 )
    {
      v11 = 0LL;
      do
      {
        std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          &v12,
          (_QWORD *)(v10 + 16 * v11));
        if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL))(v12) )
          Spectre::Engine::VertexLayout::AttachDevice(a1, &v12);
        if ( v13 )
          std::_Ref_count_base::_Decref(v13);
        ++v9;
        v10 = v14;
        v11 = v9;
      }
      while ( v9 < (unsigned __int64)((v15 - v14) >> 4) );
    }
    std::vector<std::shared_ptr<Spectre::Engine::LightProbe>>::_Tidy((__int64)&v14);
  }
  std::vector<Spectre::Engine::VertexLayoutBase::VertexElementDesc>::_Tidy(v6);
}
