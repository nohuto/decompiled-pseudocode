/*
 * XREFs of ?SetOption@Material@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z @ 0x180044658
 * Callers:
 *     ?RuntimeClassInitialize@SpectreMaterial@@QEAAJAEBV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@@Z @ 0x180013510 (-RuntimeClassInitialize@SpectreMaterial@@QEAAJAEBV-$shared_ptr@VMaterial@Engine@Spectre@@@std@@@.c)
 *     ?Update@MeshInstance@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z @ 0x18004CB70 (-Update@MeshInstance@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z.c)
 *     ?FillBackground@ViewerEngine@Engine@Spectre@@MEAAXAEAVShaderManager@23@AEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x1800666A0 (-FillBackground@ViewerEngine@Engine@Spectre@@MEAAXAEAVShaderManager@23@AEBV-$shared_ptr@VScene@E.c)
 *     ?UpdateBackground@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@_NM@Z @ 0x180067E30 (-UpdateBackground@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std.c)
 *     ?Create@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@@Z @ 0x180072750 (-Create@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@@Z.c)
 *     ?ApplyBloom@ImageProcessingEffectBloom@Engine@Spectre@@MEAAXPEAVRenderDevice@23@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@V?$shared_ptr@VTexture@Engine@Spectre@@@6@2@Z @ 0x180095DA0 (-ApplyBloom@ImageProcessingEffectBloom@Engine@Spectre@@MEAAXPEAVRenderDevice@23@AEBV-$shared_ptr.c)
 *     ?OnMeshUpdate@BaseShaderExtension@Engine@Spectre@@UEAAXPEBVMeshInstance@23@_KAEBVFrameData@23@@Z @ 0x18009B520 (-OnMeshUpdate@BaseShaderExtension@Engine@Spectre@@UEAAXPEBVMeshInstance@23@_KAEBVFrameData@23@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetTexture@FrameBuffer@Engine@Spectre@@QEBA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@XZ @ 0x180026A84 (-GetTexture@FrameBuffer@Engine@Spectre@@QEBA-AV-$shared_ptr@VTexture@Engine@Spectre@@@std@@XZ.c)
 *     ?SetOption@Material@Engine@Spectre@@QEAAXW4ShaderOption@23@_N@Z @ 0x1800446D4 (-SetOption@Material@Engine@Spectre@@QEAAXW4ShaderOption@23@_N@Z.c)
 *     ?FindOption@ShaderManager@Engine@Spectre@@QEBA?AW4ShaderOption@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18004F988 (-FindOption@ShaderManager@Engine@Spectre@@QEBA-AW4ShaderOption@23@AEBV-$basic_string@DU-$char_tr.c)
 *     ?GetShaderManager@ShaderFamily@Engine@Spectre@@QEBA?AV?$shared_ptr@VShaderManager@Engine@Spectre@@@std@@XZ @ 0x180060D1C (-GetShaderManager@ShaderFamily@Engine@Spectre@@QEBA-AV-$shared_ptr@VShaderManager@Engine@Spectre.c)
 */

void __fastcall Spectre::Engine::Material::SetOption(__int64 a1, __int64 a2, char a3)
{
  _QWORD *ShaderManager; // rax
  __int64 v6; // r9
  unsigned int Option; // eax
  __int64 v8; // r8
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v10; // [rsp+28h] [rbp-20h]
  _BYTE v11[8]; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v12; // [rsp+38h] [rbp-10h]

  Spectre::Engine::FrameBuffer::GetTexture(a1, &v9);
  if ( v9 )
  {
    ShaderManager = (_QWORD *)Spectre::Engine::ShaderFamily::GetShaderManager(v9, v11);
    Option = Spectre::Engine::ShaderManager::FindOption(*ShaderManager, v6);
    LOBYTE(v8) = a3;
    Spectre::Engine::Material::SetOption(a1, Option, v8);
    if ( v12 )
      std::_Ref_count_base::_Decref(v12);
  }
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
}
