/*
 * XREFs of ?Attach@?$ComPtr@VInteropVisualReferenceController@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVInteropVisualReferenceController@Composition@UI@Windows@@@Z @ 0x18015C3EC
 * Callers:
 *     ??$MakeAndInitialize2@VInteropVisualReferenceController@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVInteropVisualReferenceController@Composition@UI@Windows@@$$QEAPEAVInteropCompositor@456@@Z @ 0x18015C164 (--$MakeAndInitialize2@VInteropVisualReferenceController@Composition@UI@Windows@@V1234@PEAVIntero.c)
 *     ??$MakeAndInitialize2@VInteropVisualReferenceController@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@_N@Details@WRL2@Microsoft@@YAJPEAPEAVInteropVisualReferenceController@Composition@UI@Windows@@$$QEAPEAVInteropCompositor@456@$$QEA_N@Z @ 0x18015C228 (--$MakeAndInitialize2@VInteropVisualReferenceController@Composition@UI@Windows@@V12_ea_18015C228.c)
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::InteropVisualReferenceController>::Attach(
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
