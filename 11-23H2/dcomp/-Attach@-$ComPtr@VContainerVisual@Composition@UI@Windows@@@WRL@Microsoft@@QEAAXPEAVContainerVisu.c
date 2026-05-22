/*
 * XREFs of ?Attach@?$ComPtr@VContainerVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVContainerVisual@Composition@UI@Windows@@@Z @ 0x18006D054
 * Callers:
 *     ??$MakeAndInitialize2@VContainerVisual@Composition@UI@Windows@@V1234@AEBQEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVContainerVisual@Composition@UI@Windows@@AEBQEAVCompositor@456@@Z @ 0x180016088 (--$MakeAndInitialize2@VContainerVisual@Composition@UI@Windows@@V1234@AEBQEAVCompositor@234@@Deta.c)
 *     ??$MakeAndInitialize2@VContainerVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVContainerVisual@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18006CD9C (--$MakeAndInitialize2@VContainerVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details.c)
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

unsigned int __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::ContainerVisual>::Attach(
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
