/*
 * XREFs of ?Attach@?$ComPtr@VManipulationTransform@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVManipulationTransform@Composition@UI@Windows@@@Z @ 0x180082330
 * Callers:
 *     ??$MakeAndInitialize2@VManipulationTransform@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVManipulationTransform@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAPEAX@Z @ 0x180081FA4 (--$MakeAndInitialize2@VManipulationTransform@Composition@UI@Windows@@V1234@PEAVCompositor@234@AE.c)
 *     ??$MakeAndInitialize2@VManipulationTransform@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@AEAPEAUIDCompositionTransform@@@Details@WRL2@Microsoft@@YAJPEAPEAVManipulationTransform@Composition@UI@Windows@@$$QEAPEAVInteropCompositor@456@AEAPEAUIDCompositionTransform@@@Z @ 0x180082180 (--$MakeAndInitialize2@VManipulationTransform@Composition@UI@Windows@@V1234@PEAVInteropCompositor.c)
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::ManipulationTransform>::Attach(
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
