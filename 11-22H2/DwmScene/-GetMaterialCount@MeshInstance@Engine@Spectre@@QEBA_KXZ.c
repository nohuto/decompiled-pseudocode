/*
 * XREFs of ?GetMaterialCount@MeshInstance@Engine@Spectre@@QEBA_KXZ @ 0x18004BA58
 * Callers:
 *     ?AttachDevice@MeshInstance@Engine@Spectre@@UEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18004B100 (-AttachDevice@MeshInstance@Engine@Spectre@@UEAAXV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std.c)
 *     ?PostUpdate@MeshInstance@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z @ 0x18004C270 (-PostUpdate@MeshInstance@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z.c)
 *     ?Render@MeshInstance@Engine@Spectre@@UEBAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@@Z @ 0x18004C400 (-Render@MeshInstance@Engine@Spectre@@UEBAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::MeshInstance::GetMaterialCount(Spectre::Engine::MeshInstance *this)
{
  return 0x2E8BA2E8BA2E8BA3LL * ((__int64)(*((_QWORD *)this + 14) - *((_QWORD *)this + 13)) >> 3);
}
