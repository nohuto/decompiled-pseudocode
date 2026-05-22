/*
 * XREFs of ?Attach@?$ComPtr@VComponentTransform3D@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVComponentTransform3D@Composition@UI@Windows@@@Z @ 0x18010ADC0
 * Callers:
 *     ??$MakeAndInitialize2@VComponentTransform3D@Composition@UI@Windows@@V1234@PEAVCompositionSkyBoxBrush@Private@234@@Details@WRL2@Microsoft@@YAJPEAPEAVComponentTransform3D@Composition@UI@Windows@@$$QEAPEAVCompositionSkyBoxBrush@Private@456@@Z @ 0x180180CF8 (--$MakeAndInitialize2@VComponentTransform3D@Composition@UI@Windows@@V1234@PEAVCompositionSkyBoxB.c)
 *     ??$MakeAndInitialize2@VComponentTransform3D@Composition@UI@Windows@@V1234@PEAVSceneModelTransform@Scenes@234@@Details@WRL2@Microsoft@@YAJPEAPEAVComponentTransform3D@Composition@UI@Windows@@$$QEAPEAVSceneModelTransform@Scenes@456@@Z @ 0x1801929B8 (--$MakeAndInitialize2@VComponentTransform3D@Composition@UI@Windows@@V1234@PEAVSceneModelTransfor.c)
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::ComponentTransform3D>::Attach(
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
