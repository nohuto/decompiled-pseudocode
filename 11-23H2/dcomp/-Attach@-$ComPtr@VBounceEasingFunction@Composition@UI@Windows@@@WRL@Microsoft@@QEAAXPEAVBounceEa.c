/*
 * XREFs of ?Attach@?$ComPtr@VBounceEasingFunction@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVBounceEasingFunction@Composition@UI@Windows@@@Z @ 0x1801249B8
 * Callers:
 *     ??$MakeAndInitialize2@VBounceEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4CompositionEasingFunctionMode@234@AEAHAEAM@Details@WRL2@Microsoft@@YAJPEAPEAVBounceEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAW4CompositionEasingFunctionMode@456@AEAHAEAM@Z @ 0x18011F854 (--$MakeAndInitialize2@VBounceEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4C.c)
 *     ??$MakeAndInitialize2@VBounceEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAW4CompositionEasingFunctionMode@234@AEAHAEAM@Details@WRL2@Microsoft@@YAJPEAPEAVBounceEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAW4CompositionEasingFunctionMode@456@AEAHAEAM@Z @ 0x18012DE9C (--$MakeAndInitialize2@VBounceEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEA.c)
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::BounceEasingFunction>::Attach(
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
