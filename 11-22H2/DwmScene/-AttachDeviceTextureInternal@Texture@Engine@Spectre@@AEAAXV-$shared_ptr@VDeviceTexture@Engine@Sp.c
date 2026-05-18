/*
 * XREFs of ?AttachDeviceTextureInternal@Texture@Engine@Spectre@@AEAAXV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@@Z @ 0x180055C68
 * Callers:
 *     ?AttachDeviceTexture@Texture@Engine@Spectre@@QEAAXV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@@Z @ 0x180055A68 (-AttachDeviceTexture@Texture@Engine@Spectre@@QEAAXV-$shared_ptr@VDeviceTexture@Engine@Spectre@@@.c)
 *     ?CreateDeviceTextureHelper@Texture@Engine@Spectre@@AEAAXAEBUTextureImageSetView@23@PEAVRenderDevice@23@@Z @ 0x180056368 (-CreateDeviceTextureHelper@Texture@Engine@Spectre@@AEAAXAEBUTextureImageSetView@23@PEAVRenderDev.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?shared_from_this@?$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA?AV?$shared_ptr@VScene@Engine@Spectre@@@2@XZ @ 0x180011D4C (-shared_from_this@-$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA-AV-$shared_ptr@VSc.c)
 *     ??$?4VTexture@Engine@Spectre@@@?$weak_ptr@VTexture@Engine@Spectre@@@std@@QEAAAEAV01@AEBV?$shared_ptr@VTexture@Engine@Spectre@@@1@@Z @ 0x180015630 (--$-4VTexture@Engine@Spectre@@@-$weak_ptr@VTexture@Engine@Spectre@@@std@@QEAAAEAV01@AEBV-$shared.c)
 *     ??$_Try_emplace@AEBW4RenderDeviceID@Engine@Spectre@@$$V@?$map@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@@std@@PEAX@std@@_N@1@AEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x1800541F0 (--$_Try_emplace@AEBW4RenderDeviceID@Engine@Spectre@@$$V@-$map@W4RenderDeviceID@Engi_ea_1800541F0.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::Texture::AttachDeviceTextureInternal(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 *v6; // rax
  std::_Ref_count_base *v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v9; // [rsp+28h] [rbp-10h]
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v11; // [rsp+48h] [rbp+10h]

  v11 = a2;
  v4 = *a2;
  v10 = *(_DWORD *)(*a2 + 88);
  v5 = std::map<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceShader>>::_Try_emplace<enum Spectre::Engine::RenderDeviceID const &,>(
         (__int64 *)(a1 + 112),
         (__int64)&v8,
         &v10);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)(*(_QWORD *)v5 + 40LL), a2);
  v6 = (__int64 *)std::enable_shared_from_this<Spectre::Engine::Scene>::shared_from_this(a1 + 96, &v8);
  std::weak_ptr<Spectre::Engine::Texture>::operator=<Spectre::Engine::Texture>((_QWORD *)(v4 + 96), v6);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  v7 = (std::_Ref_count_base *)a2[1];
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
}
