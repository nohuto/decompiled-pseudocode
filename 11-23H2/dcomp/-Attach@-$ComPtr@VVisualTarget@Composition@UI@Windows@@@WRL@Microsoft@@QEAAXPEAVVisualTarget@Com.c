/*
 * XREFs of ?Attach@?$ComPtr@VVisualTarget@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVVisualTarget@Composition@UI@Windows@@@Z @ 0x18000B5CC
 * Callers:
 *     ??$MakeAndInitialize2@VVisualTarget@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVVisualTarget@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAPEAX@Z @ 0x18000B520 (--$MakeAndInitialize2@VVisualTarget@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAPEAX@Det.c)
 *     ??$MakeAndInitialize2@VVisualTarget@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVVisualTarget@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180122228 (--$MakeAndInitialize2@VVisualTarget@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WR.c)
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

unsigned int __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::VisualTarget>::Attach(
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
