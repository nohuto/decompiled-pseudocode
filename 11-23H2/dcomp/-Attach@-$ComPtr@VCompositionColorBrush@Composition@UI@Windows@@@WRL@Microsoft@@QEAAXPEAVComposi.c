/*
 * XREFs of ?Attach@?$ComPtr@VCompositionColorBrush@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVCompositionColorBrush@Composition@UI@Windows@@@Z @ 0x180016138
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionColorBrush@Composition@UI@Windows@@V1234@AEBQEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionColorBrush@Composition@UI@Windows@@AEBQEAVCompositor@456@@Z @ 0x180015E88 (--$MakeAndInitialize2@VCompositionColorBrush@Composition@UI@Windows@@V1234@AEBQEAVCompositor@234.c)
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

unsigned int __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::CompositionColorBrush>::Attach(
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
