/*
 * XREFs of ?ActivateDisplay@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEAAXIW4StereoEye@2345@@Z @ 0x1800D8EE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?SetDepthBuffer@RenderOutput@Engine@Spectre@@IEAAXV?$shared_ptr@VDepthBuffer@Engine@Spectre@@@std@@@Z @ 0x18002C9C4 (-SetDepthBuffer@RenderOutput@Engine@Spectre@@IEAAXV-$shared_ptr@VDepthBuffer@Engine@Spectre@@@st.c)
 *     ?SetRenderTarget@RenderOutput@Engine@Spectre@@IEAAXV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@Z @ 0x18002CB10 (-SetRenderTarget@RenderOutput@Engine@Spectre@@IEAAXV-$shared_ptr@VFrameBuffer@Engine@Spectre@@@s.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IV?$shared_ptr@UHolographicDisplayState@Holographic@D3D11@Engine@Spectre@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@UHolographicDisplayState@Holographic@D3D11@Engine@Spectre@@@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@UHolographicDisplayState@Holographic@D3D11@Engine@Spectre@@@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1800D8A6C (--$_Try_emplace@AEBI$$V@-$map@IV-$shared_ptr@UHolographicDisplayState@Holographic@D3D11@Engine@S.c)
 */

void __fastcall Spectre::Engine::D3D11::Holographic::RenderOutputD3D11Holographic::ActivateDisplay(
        __int64 a1,
        unsigned int a2,
        int a3)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD v9[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = a2;
  *(_DWORD *)(a1 + 568) = a2;
  v4 = a3;
  v5 = std::map<unsigned int,std::shared_ptr<Spectre::Engine::D3D11::Holographic::HolographicDisplayState>>::_Try_emplace<unsigned int const &,>(
         (__int64 *)(a1 + 552),
         (__int64)&v10,
         &v11);
  v4 *= 48LL;
  v6 = *(_QWORD *)v5;
  v7 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         v9,
         (_QWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 40LL) + v4 + 64));
  Spectre::Engine::RenderOutput::SetRenderTarget(a1, v7);
  v8 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         v9,
         (_QWORD *)(*(_QWORD *)(v6 + 40) + v4 + 80));
  Spectre::Engine::RenderOutput::SetDepthBuffer(a1, v8);
}
