/*
 * XREFs of ??0MaterialLoadedFnc@MeshInstance@Engine@Spectre@@QEAA@PEAV123@PEAVRenderDevice@23@@Z @ 0x18004AD0C
 * Callers:
 *     ??$make_shared@VMaterialLoadedFnc@MeshInstance@Engine@Spectre@@PEAV234@AEAPEAVRenderDevice@34@@std@@YA?AV?$shared_ptr@VMaterialLoadedFnc@MeshInstance@Engine@Spectre@@@0@$$QEAPEAVMeshInstance@Engine@Spectre@@AEAPEAVRenderDevice@34@@Z @ 0x18004AB3C (--$make_shared@VMaterialLoadedFnc@MeshInstance@Engine@Spectre@@PEAV234@AEAPEAVRenderDevice@34@@s.c)
 * Callees:
 *     <none>
 */

Spectre::Engine::MeshInstance::MaterialLoadedFnc *__fastcall Spectre::Engine::MeshInstance::MaterialLoadedFnc::MaterialLoadedFnc(
        Spectre::Engine::MeshInstance::MaterialLoadedFnc *this,
        struct Spectre::Engine::MeshInstance *a2,
        struct Spectre::Engine::RenderDevice *a3)
{
  Spectre::Engine::MeshInstance::MaterialLoadedFnc *result; // rax

  *((_QWORD *)this + 1) = a2;
  *(_QWORD *)this = &Spectre::Engine::MeshInstance::MaterialLoadedFnc::`vftable';
  result = this;
  *((_QWORD *)this + 2) = a3;
  return result;
}
