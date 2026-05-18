/*
 * XREFs of ?GetResourceOption@Engine@1Spectre@@QEBA_NW4EType@RendererResource@12@W4EResourceOption@412@@Z @ 0x180034764
 * Callers:
 *     ?AttachDevice@Mesh@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180047E90 (-AttachDevice@Mesh@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 *     ?AttachDevice@Texture@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180055980 (-AttachDevice@Texture@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall Spectre::Engine::Engine::GetResourceOption(__int64 a1, int a2)
{
  return (*(_DWORD *)(a1 + 4LL * a2 + 748) & 8) != 0;
}
