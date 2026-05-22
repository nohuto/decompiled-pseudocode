/*
 * XREFs of ?Attach@?$ComPtr@VPowerEasingFunction@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVPowerEasingFunction@Composition@UI@Windows@@@Z @ 0x180079E98
 * Callers:
 *     ??$MakeAndInitialize2@VPowerEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4CompositionEasingFunctionMode@234@AEAM@Details@WRL2@Microsoft@@YAJPEAPEAVPowerEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAW4CompositionEasingFunctionMode@456@AEAM@Z @ 0x1800796D8 (--$MakeAndInitialize2@VPowerEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4Co.c)
 *     ??$MakeAndInitialize2@VPowerEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAW4CompositionEasingFunctionMode@234@AEAM@Details@WRL2@Microsoft@@YAJPEAPEAVPowerEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAW4CompositionEasingFunctionMode@456@AEAM@Z @ 0x18012E1F8 (--$MakeAndInitialize2@VPowerEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAW.c)
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

unsigned int __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::PowerEasingFunction>::Attach(
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
