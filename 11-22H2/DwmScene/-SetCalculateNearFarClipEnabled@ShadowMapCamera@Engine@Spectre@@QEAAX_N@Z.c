/*
 * XREFs of ?SetCalculateNearFarClipEnabled@ShadowMapCamera@Engine@Spectre@@QEAAX_N@Z @ 0x18008EC50
 * Callers:
 *     ?UpdateShadowingFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x18006DDB4 (-UpdateShadowingFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engi.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::ShadowMapCamera::SetCalculateNearFarClipEnabled(
        Spectre::Engine::ShadowMapCamera *this,
        char a2)
{
  *((_BYTE *)this + 1953) = a2;
}
