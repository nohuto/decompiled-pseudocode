/*
 * XREFs of ?Attach@?$ComPtr@VSpriteVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVSpriteVisual@Composition@UI@Windows@@@Z @ 0x180015E54
 * Callers:
 *     ??$MakeAndInitialize2@VSpriteVisual@Composition@UI@Windows@@V1234@AEBQEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVSpriteVisual@Composition@UI@Windows@@AEBQEAVCompositor@456@@Z @ 0x180015D30 (--$MakeAndInitialize2@VSpriteVisual@Composition@UI@Windows@@V1234@AEBQEAVCompositor@234@@Details.c)
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

unsigned int __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::SpriteVisual>::Attach(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        Microsoft::WRL2::NestableRuntimeClass *a2)
{
  Microsoft::WRL2::NestableRuntimeClass *v4; // rcx
  unsigned int result; // eax

  v4 = *a1;
  if ( v4 )
    result = Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v4);
  *a1 = a2;
  return result;
}
