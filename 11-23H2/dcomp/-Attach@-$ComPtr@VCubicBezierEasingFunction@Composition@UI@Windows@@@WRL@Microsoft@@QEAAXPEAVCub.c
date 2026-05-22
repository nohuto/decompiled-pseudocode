/*
 * XREFs of ?Attach@?$ComPtr@VCubicBezierEasingFunction@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVCubicBezierEasingFunction@Composition@UI@Windows@@@Z @ 0x180079ECC
 * Callers:
 *     ??$MakeAndInitialize2@VCubicBezierEasingFunction@Composition@UI@Windows@@VCompositionEasingFunction@234@PEAVCompositor@234@MMMM@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAM222@Z @ 0x180079440 (--$MakeAndInitialize2@VCubicBezierEasingFunction@Composition@UI@Windows@@VCompositionEasingFunct.c)
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

unsigned int __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::CubicBezierEasingFunction>::Attach(
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
