/*
 * XREFs of ?Attach@?$ComPtr@VCompositionSwapChain@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVCompositionSwapChain@Composition@UI@Windows@@@Z @ 0x180124A20
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionSwapChain@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionSwapChain@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAPEAX@Z @ 0x180120774 (--$MakeAndInitialize2@VCompositionSwapChain@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEA.c)
 *     ??$MakeAndInitialize2@VCompositionSwapChain@Composition@UI@Windows@@V1234@PEAVCompositor@234@PEAUIDXGISwapChain1@@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionSwapChain@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAPEAUIDXGISwapChain1@@@Z @ 0x180120834 (--$MakeAndInitialize2@VCompositionSwapChain@Composition@UI@Windows@@V1234@PEAVCompositor@234@PEA.c)
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::CompositionSwapChain>::Attach(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        Microsoft::WRL2::NestableRuntimeClass *a2)
{
  Microsoft::WRL2::NestableRuntimeClass *v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v4);
  *a1 = a2;
  return result;
}
