/*
 * XREFs of ?SetFrustumEdgeFalloff@ShadowMapCamera@Engine@Spectre@@QEAAXM@Z @ 0x18008EC60
 * Callers:
 *     ?UpdateShadowingFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x18006DDB4 (-UpdateShadowingFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engi.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::ShadowMapCamera::SetFrustumEdgeFalloff(
        Spectre::Engine::ShadowMapCamera *this,
        float a2)
{
  *((float *)this + 489) = a2;
}
