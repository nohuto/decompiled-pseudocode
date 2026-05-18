/*
 * XREFs of ?SetDepthPrePass@Camera@Engine@Spectre@@QEAAXH@Z @ 0x18005D150
 * Callers:
 *     ?UpdateGeneralSettings@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x18006A614 (-UpdateGeneralSettings@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::Camera::SetDepthPrePass(Spectre::Engine::Camera *this)
{
  *((_DWORD *)this + 42) = 0;
}
