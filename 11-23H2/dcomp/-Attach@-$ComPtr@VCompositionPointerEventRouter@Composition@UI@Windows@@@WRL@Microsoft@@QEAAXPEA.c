/*
 * XREFs of ?Attach@?$ComPtr@VCompositionPointerEventRouter@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVCompositionPointerEventRouter@Composition@UI@Windows@@@Z @ 0x18001CC34
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionPointerEventRouter@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionPointerEventRouter@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18001CB34 (--$MakeAndInitialize2@VCompositionPointerEventRouter@Composition@UI@Windows@@V1234@PEAVComposito.c)
 *     ??$MakeAndInitialize2@VCompositionPointerEventRouter@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionPointerEventRouter@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAPEAX@Z @ 0x18008ABA4 (--$MakeAndInitialize2@VCompositionPointerEventRouter@Composition@UI@Windows@@V1234@_ea_18008ABA4.c)
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

unsigned int __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::CompositionPointerEventRouter>::Attach(
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
