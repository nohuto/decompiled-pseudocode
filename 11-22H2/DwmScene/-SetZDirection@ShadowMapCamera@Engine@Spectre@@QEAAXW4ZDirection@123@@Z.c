/*
 * XREFs of ?SetZDirection@ShadowMapCamera@Engine@Spectre@@QEAAXW4ZDirection@123@@Z @ 0x18008ECAC
 * Callers:
 *     ?CreateStandardLights@ViewerEngine@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180065C40 (-CreateStandardLights@ViewerEngine@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@.c)
 *     ?UpdateShadowingFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x18006DDB4 (-UpdateShadowingFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engi.c)
 * Callees:
 *     ?RecreateDepthSampler@ShadowMapCamera@Engine@Spectre@@AEAAXXZ @ 0x18008E8DC (-RecreateDepthSampler@ShadowMapCamera@Engine@Spectre@@AEAAXXZ.c)
 */

void __fastcall Spectre::Engine::ShadowMapCamera::SetZDirection(Spectre::Engine::ShadowMapCamera *a1, int a2)
{
  int v2; // eax

  v2 = *((_DWORD *)a1 + 486);
  *((_DWORD *)a1 + 486) = a2;
  if ( v2 != a2 )
    Spectre::Engine::ShadowMapCamera::RecreateDepthSampler(a1);
}
