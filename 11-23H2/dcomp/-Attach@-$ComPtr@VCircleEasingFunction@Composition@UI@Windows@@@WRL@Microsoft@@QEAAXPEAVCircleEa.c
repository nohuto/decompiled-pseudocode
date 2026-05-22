/*
 * XREFs of ?Attach@?$ComPtr@VCircleEasingFunction@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVCircleEasingFunction@Composition@UI@Windows@@@Z @ 0x1801249EC
 * Callers:
 *     ??$MakeAndInitialize2@VCircleEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4CompositionEasingFunctionMode@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCircleEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAW4CompositionEasingFunctionMode@456@@Z @ 0x18011FE14 (--$MakeAndInitialize2@VCircleEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4C.c)
 *     ??$MakeAndInitialize2@VCircleEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAW4CompositionEasingFunctionMode@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCircleEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAW4CompositionEasingFunctionMode@456@@Z @ 0x18012DF80 (--$MakeAndInitialize2@VCircleEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEA.c)
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::CircleEasingFunction>::Attach(
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
