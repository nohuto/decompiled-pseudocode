/*
 * XREFs of ??$make_shared@VMaterialLoadedFnc@MeshInstance@Engine@Spectre@@PEAV234@AEAPEAVRenderDevice@34@@std@@YA?AV?$shared_ptr@VMaterialLoadedFnc@MeshInstance@Engine@Spectre@@@0@$$QEAPEAVMeshInstance@Engine@Spectre@@AEAPEAVRenderDevice@34@@Z @ 0x18004AB3C
 * Callers:
 *     ?LoadMesh@MeshInstance@Engine@Spectre@@AEAA?AV?$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@PEAVRenderDevice@23@IV?$shared_ptr@VMesh@Engine@Spectre@@@5@IIPEBM22_N@Z @ 0x18004BD40 (-LoadMesh@MeshInstance@Engine@Spectre@@AEAA-AV-$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??0MaterialLoadedFnc@MeshInstance@Engine@Spectre@@QEAA@PEAV123@PEAVRenderDevice@23@@Z @ 0x18004AD0C (--0MaterialLoadedFnc@MeshInstance@Engine@Spectre@@QEAA@PEAV123@PEAVRenderDevice@23@@Z.c)
 */

_QWORD *__fastcall std::make_shared<Spectre::Engine::MeshInstance::MaterialLoadedFnc,Spectre::Engine::MeshInstance *,Spectre::Engine::RenderDevice * &>(
        _QWORD *a1,
        struct Spectre::Engine::MeshInstance **a2,
        struct Spectre::Engine::RenderDevice **a3)
{
  _DWORD *v6; // rax
  __int64 v7; // r9
  _QWORD *result; // rax

  v6 = operator new(0x28uLL);
  if ( v6 )
  {
    v6[2] = 1;
    v6[3] = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj2<Spectre::Engine::MeshInstance::MaterialLoadedFnc>::`vftable';
    Spectre::Engine::MeshInstance::MaterialLoadedFnc::MaterialLoadedFnc(
      (Spectre::Engine::MeshInstance::MaterialLoadedFnc *)(v6 + 4),
      *a2,
      *a3);
  }
  else
  {
    v7 = 0LL;
  }
  *a1 = v7 + 16;
  result = a1;
  a1[1] = v7;
  return result;
}
