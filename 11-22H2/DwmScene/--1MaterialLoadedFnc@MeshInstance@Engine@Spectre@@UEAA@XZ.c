/*
 * XREFs of ??1MaterialLoadedFnc@MeshInstance@Engine@Spectre@@UEAA@XZ @ 0x18004AE9C
 * Callers:
 *     ??_EMaterialLoadedFnc@MeshInstance@Engine@Spectre@@UEAAPEAXI@Z @ 0x18004B090 (--_EMaterialLoadedFnc@MeshInstance@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::MeshInstance::MaterialLoadedFnc::~MaterialLoadedFnc(
        Spectre::Engine::MeshInstance::MaterialLoadedFnc *this)
{
  *(_QWORD *)this = &Spectre::Engine::ResourceLoadedFnc::`vftable';
}
