/*
 * XREFs of ?AttachDeviceConstantBuffer@ConstantBuffer@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VDeviceConstantBuffer@Engine@Spectre@@@std@@@Z @ 0x180084B94
 * Callers:
 *     ?AttachDevice@ShaderPropertyBlock@Engine@Spectre@@UEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x1800849B0 (-AttachDevice@ShaderPropertyBlock@Engine@Spectre@@UEAAXV-$shared_ptr@VRenderDevice@Engine@Spectr.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?shared_from_this@?$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA?AV?$shared_ptr@VScene@Engine@Spectre@@@2@XZ @ 0x180011D4C (-shared_from_this@-$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA-AV-$shared_ptr@VSc.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$?4VTexture@Engine@Spectre@@@?$weak_ptr@VTexture@Engine@Spectre@@@std@@QEAAAEAV01@AEBV?$shared_ptr@VTexture@Engine@Spectre@@@1@@Z @ 0x180015630 (--$-4VTexture@Engine@Spectre@@@-$weak_ptr@VTexture@Engine@Spectre@@@std@@QEAAAEAV01@AEBV-$shared.c)
 *     ??$_Try_emplace@AEBW4RenderDeviceID@Engine@Spectre@@$$V@?$map@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@@std@@PEAX@std@@_N@1@AEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x1800541F0 (--$_Try_emplace@AEBW4RenderDeviceID@Engine@Spectre@@$$V@-$map@W4RenderDeviceID@Engi_ea_1800541F0.c)
 */

void __fastcall Spectre::Engine::ConstantBuffer::AttachDeviceConstantBuffer(__int64 a1, _QWORD *a2)
{
  __int64 *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rdx
  std::_Ref_count_base *v8; // rcx
  __int64 *v9; // rax
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = *(_DWORD *)(*a2 + 88LL);
  std::map<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceShader>>::_Try_emplace<enum Spectre::Engine::RenderDeviceID const &,>(
    (__int64 *)(a1 + 112),
    (__int64)&v12,
    &v13);
  v4 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         &v10,
         a2);
  v6 = *v4;
  *v4 = *(_QWORD *)(v5 + 40);
  *(_QWORD *)(v5 + 40) = v6;
  v7 = v4[1];
  v4[1] = *(_QWORD *)(v5 + 48);
  v8 = v11;
  *(_QWORD *)(v5 + 48) = v7;
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  v9 = (__int64 *)std::enable_shared_from_this<Spectre::Engine::Scene>::shared_from_this(a1 + 96, &v10);
  std::weak_ptr<Spectre::Engine::Texture>::operator=<Spectre::Engine::Texture>((_QWORD *)(*a2 + 104LL), v9);
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
}
