/*
 * XREFs of ?Attach@?$ComPtr@VVisualCollection@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVVisualCollection@Composition@UI@Windows@@@Z @ 0x18008A15C
 * Callers:
 *     ??$MakeAndInitialize2@VVisualCollection@Composition@UI@Windows@@V1234@PEAVVisual@234@@Details@WRL2@Microsoft@@YAJPEAPEAVVisualCollection@Composition@UI@Windows@@$$QEAPEAVVisual@456@@Z @ 0x18008A02C (--$MakeAndInitialize2@VVisualCollection@Composition@UI@Windows@@V1234@PEAVVisual@234@@Details@WR.c)
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::VisualCollection>::Attach(
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
