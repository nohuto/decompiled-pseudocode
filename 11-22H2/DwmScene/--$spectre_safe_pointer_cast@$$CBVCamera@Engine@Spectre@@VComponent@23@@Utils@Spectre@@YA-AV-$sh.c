/*
 * XREFs of ??$spectre_safe_pointer_cast@$$CBVCamera@Engine@Spectre@@VComponent@23@@Utils@Spectre@@YA?AV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@std@@V?$shared_ptr@VComponent@Engine@Spectre@@@3@@Z @ 0x180097888
 * Callers:
 *     ?RenderMesh@ImageProcessingCamera@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@AEBV?$shared_ptr@VMeshInstance@Engine@Spectre@@@5@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z @ 0x180097A20 (-RenderMesh@ImageProcessingCamera@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spe.c)
 *     ?Create@RenderTargetD3D11@D3D11@Engine@Spectre@@UEAAXIIW4Format@34@I@Z @ 0x1800CB930 (-Create@RenderTargetD3D11@D3D11@Engine@Spectre@@UEAAXIIW4Format@34@I@Z.c)
 *     ?GetDeviceBuffer@TextureD3D11@D3D11@Engine@Spectre@@UEBA?AUTextureImageSet@34@XZ @ 0x1800CE110 (-GetDeviceBuffer@TextureD3D11@D3D11@Engine@Spectre@@UEBA-AUTextureImageSet@34@XZ.c)
 *     ?Create@CommandListD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVState@34@@Z @ 0x1800CFED0 (-Create@CommandListD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVState@34@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$static_pointer_cast@IX@std@@YA?AV?$shared_ptr@I@0@AEBV?$shared_ptr@X@0@@Z @ 0x180047A7C (--$static_pointer_cast@IX@std@@YA-AV-$shared_ptr@I@0@AEBV-$shared_ptr@X@0@@Z.c)
 */

_QWORD *__fastcall Spectre::Utils::spectre_safe_pointer_cast<Spectre::Engine::Camera const,Spectre::Engine::Component>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v3; // rdx
  std::_Ref_count_base *v4; // rcx

  std::static_pointer_cast<unsigned int,void>(a1, a2);
  v4 = *(std::_Ref_count_base **)(v3 + 8);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  return a1;
}
