/*
 * XREFs of ??_EMaterialLoadedFnc@MeshInstance@Engine@Spectre@@UEAAPEAXI@Z @ 0x18004B090
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1MaterialLoadedFnc@MeshInstance@Engine@Spectre@@UEAA@XZ @ 0x18004AE9C (--1MaterialLoadedFnc@MeshInstance@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::MeshInstance::MaterialLoadedFnc *__fastcall Spectre::Engine::MeshInstance::MaterialLoadedFnc::`vector deleting destructor'(
        Spectre::Engine::MeshInstance::MaterialLoadedFnc *this,
        char a2)
{
  Spectre::Engine::MeshInstance::MaterialLoadedFnc::~MaterialLoadedFnc(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
