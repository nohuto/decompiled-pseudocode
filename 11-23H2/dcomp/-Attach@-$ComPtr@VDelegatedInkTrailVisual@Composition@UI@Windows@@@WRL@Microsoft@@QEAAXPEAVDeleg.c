/*
 * XREFs of ?Attach@?$ComPtr@VDelegatedInkTrailVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVDelegatedInkTrailVisual@Composition@UI@Windows@@@Z @ 0x18011B2F0
 * Callers:
 *     ??$MakeAndInitialize2@VDelegatedInkTrailVisual@Composition@UI@Windows@@V1234@AEAPEAVCompositor@234@PEAVCompositionSwapChain@234@@Details@WRL2@Microsoft@@YAJPEAPEAVDelegatedInkTrailVisual@Composition@UI@Windows@@AEAPEAVCompositor@456@$$QEAPEAVCompositionSwapChain@456@@Z @ 0x18011AED4 (--$MakeAndInitialize2@VDelegatedInkTrailVisual@Composition@UI@Windows@@V1234@AEAPEAVCompositor@2.c)
 *     ??$MakeAndInitialize2@VDelegatedInkTrailVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@$$T@Details@WRL2@Microsoft@@YAJPEAPEAVDelegatedInkTrailVisual@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEA$$T@Z @ 0x18011AF94 (--$MakeAndInitialize2@VDelegatedInkTrailVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@.c)
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::DelegatedInkTrailVisual>::Attach(
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
