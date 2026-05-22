/*
 * XREFs of ?Attach@?$ComPtr@VBackEasingFunction@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVBackEasingFunction@Composition@UI@Windows@@@Z @ 0x180124984
 * Callers:
 *     ??$MakeAndInitialize2@VBackEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4CompositionEasingFunctionMode@234@AEAM@Details@WRL2@Microsoft@@YAJPEAPEAVBackEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAW4CompositionEasingFunctionMode@456@AEAM@Z @ 0x18011F780 (--$MakeAndInitialize2@VBackEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4Com.c)
 *     ??$MakeAndInitialize2@VBackEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAW4CompositionEasingFunctionMode@234@AEAM@Details@WRL2@Microsoft@@YAJPEAPEAVBackEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAW4CompositionEasingFunctionMode@456@AEAM@Z @ 0x18012DDC8 (--$MakeAndInitialize2@VBackEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAW4.c)
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::BackEasingFunction>::Attach(
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
