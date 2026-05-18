/*
 * XREFs of ?SetBufferSize@ShadowMapCamera@Engine@Spectre@@QEAAXI@Z @ 0x18008EC28
 * Callers:
 *     ?UpdateShadowingFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x18006DDB4 (-UpdateShadowingFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engi.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::ShadowMapCamera::SetBufferSize(
        Spectre::Engine::ShadowMapCamera *this,
        unsigned int a2)
{
  int v2; // eax
  int v4; // ecx

  v2 = 16;
  if ( a2 < 0x10 || (v4 = 2048, v2 = a2, a2 <= 0x800) )
    v4 = v2;
  *((_DWORD *)this + 485) = v4;
}
