/*
 * XREFs of ?ResetScissorRect@Camera@Engine@Spectre@@QEAAXXZ @ 0x18005CD18
 * Callers:
 *     ?Display@ImageProcessingManager@Engine@Spectre@@IEAAXAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@AEBV?$shared_ptr@VTexture@Engine@Spectre@@@5@@Z @ 0x180072F50 (-Display@ImageProcessingManager@Engine@Spectre@@IEAAXAEBV-$shared_ptr@VIRenderOutput@Engine@Spec.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::Camera::ResetScissorRect(Spectre::Engine::Camera *this)
{
  if ( *((_BYTE *)this + 388) )
    *((_BYTE *)this + 388) = 0;
}
