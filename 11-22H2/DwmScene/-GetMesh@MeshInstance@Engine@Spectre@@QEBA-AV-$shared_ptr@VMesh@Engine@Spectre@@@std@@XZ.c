/*
 * XREFs of ?GetMesh@MeshInstance@Engine@Spectre@@QEBA?AV?$shared_ptr@VMesh@Engine@Spectre@@@std@@XZ @ 0x18004BA7C
 * Callers:
 *     ?OnMeshAttach@StandardShaderExtension@Engine@Spectre@@UEAAXPEBVMeshInstance@23@PEAVRenderDevice@23@@Z @ 0x18007E3F0 (-OnMeshAttach@StandardShaderExtension@Engine@Spectre@@UEAAXPEBVMeshInstance@23@PEAVRenderDevice@.c)
 *     ?OnMeshRender@BackgroundUnlitShaderExtension@Engine@Spectre@@UEAAXPEBVMeshInstance@23@_K@Z @ 0x180080EF0 (-OnMeshRender@BackgroundUnlitShaderExtension@Engine@Spectre@@UEAAXPEBVMeshInstance@23@_K@Z.c)
 *     ?OnMeshAttach@BaseShaderExtension@Engine@Spectre@@UEAAXPEBVMeshInstance@23@PEAVRenderDevice@23@@Z @ 0x18009B300 (-OnMeshAttach@BaseShaderExtension@Engine@Spectre@@UEAAXPEBVMeshInstance@23@PEAVRenderDevice@23@@.c)
 *     ?OnMeshRender@BaseShaderExtension@Engine@Spectre@@UEAAXPEBVMeshInstance@23@_K@Z @ 0x18009B340 (-OnMeshRender@BaseShaderExtension@Engine@Spectre@@UEAAXPEBVMeshInstance@23@_K@Z.c)
 * Callees:
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall Spectre::Engine::MeshInstance::GetMesh(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8

  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    a2,
    (_QWORD *)(a1 + 88));
  return v2;
}
