/*
 * XREFs of ?Attach@?$ComPtr@VVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVVisual@Composition@UI@Windows@@@Z @ 0x180086B2C
 * Callers:
 *     ??$MakeAndInitialize2@VVisual@Composition@UI@Windows@@V1234@AEAPEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVVisual@Composition@UI@Windows@@AEAPEAVCompositor@456@@Z @ 0x180086A74 (--$MakeAndInitialize2@VVisual@Composition@UI@Windows@@V1234@AEAPEAVCompositor@234@@Details@WRL2@.c)
 *     ??$MakeAndInitialize2@VVisual@Composition@UI@Windows@@V1234@AEAPEAVCompositor@234@W4MIL_RESOURCE_TYPE@@_N@Details@WRL2@Microsoft@@YAJPEAPEAVVisual@Composition@UI@Windows@@AEAPEAVCompositor@456@$$QEAW4MIL_RESOURCE_TYPE@@$$QEA_N@Z @ 0x180111584 (--$MakeAndInitialize2@VVisual@Composition@UI@Windows@@V1234@AEAPEAVCompositor@234@W4MIL_RESOURCE.c)
 *     ??$MakeAndInitialize2@VVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4MIL_RESOURCE_TYPE@@_N@Details@WRL2@Microsoft@@YAJPEAPEAVVisual@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAW4MIL_RESOURCE_TYPE@@$$QEA_N@Z @ 0x180121E0C (--$MakeAndInitialize2@VVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4MIL_RESOURCE_TY.c)
 *     ??$MakeAndInitialize2@VVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4MIL_RESOURCE_TYPE@@_NAEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVVisual@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAW4MIL_RESOURCE_TYPE@@$$QEA_NAEAPEAX@Z @ 0x180121EE4 (--$MakeAndInitialize2@VVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4MI_ea_180121EE4.c)
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::Visual>::Attach(
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
