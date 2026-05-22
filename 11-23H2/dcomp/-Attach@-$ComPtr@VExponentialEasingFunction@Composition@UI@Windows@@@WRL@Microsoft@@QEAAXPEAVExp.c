/*
 * XREFs of ?Attach@?$ComPtr@VExponentialEasingFunction@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVExponentialEasingFunction@Composition@UI@Windows@@@Z @ 0x18000C580
 * Callers:
 *     ??$MakeAndInitialize2@VExponentialEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4CompositionEasingFunctionMode@234@AEAM@Details@WRL2@Microsoft@@YAJPEAPEAVExponentialEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAW4CompositionEasingFunctionMode@456@AEAM@Z @ 0x18000C3F0 (--$MakeAndInitialize2@VExponentialEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@23.c)
 *     ??$MakeAndInitialize2@VExponentialEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAW4CompositionEasingFunctionMode@234@AEAM@Details@WRL2@Microsoft@@YAJPEAPEAVExponentialEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAW4CompositionEasingFunctionMode@456@AEAM@Z @ 0x18012E124 (--$MakeAndInitialize2@VExponentialEasingFunction@Composition@UI@Windows@@V1234@PEAV_ea_18012E124.c)
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

unsigned int __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::ExponentialEasingFunction>::Attach(
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
