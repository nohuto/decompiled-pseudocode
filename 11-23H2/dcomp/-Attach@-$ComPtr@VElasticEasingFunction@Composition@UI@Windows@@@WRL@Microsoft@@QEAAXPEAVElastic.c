/*
 * XREFs of ?Attach@?$ComPtr@VElasticEasingFunction@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVElasticEasingFunction@Composition@UI@Windows@@@Z @ 0x180124A54
 * Callers:
 *     ??$MakeAndInitialize2@VElasticEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4CompositionEasingFunctionMode@234@AEAHAEAM@Details@WRL2@Microsoft@@YAJPEAPEAVElasticEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAW4CompositionEasingFunctionMode@456@AEAHAEAM@Z @ 0x180120DF8 (--$MakeAndInitialize2@VElasticEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4.c)
 *     ??$MakeAndInitialize2@VElasticEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAW4CompositionEasingFunctionMode@234@AEAHAEAM@Details@WRL2@Microsoft@@YAJPEAPEAVElasticEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAW4CompositionEasingFunctionMode@456@AEAHAEAM@Z @ 0x18012E040 (--$MakeAndInitialize2@VElasticEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AE.c)
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::ElasticEasingFunction>::Attach(
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
