/*
 * XREFs of ?Attach@?$ComPtr@VAmbientLight@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVAmbientLight@Composition@UI@Windows@@@Z @ 0x18008E248
 * Callers:
 *     ??$MakeAndInitialize2@VAmbientLight@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVAmbientLight@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x1800163C0 (--$MakeAndInitialize2@VAmbientLight@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WR.c)
 *     ??$MakeAndInitialize2@VAmbientLight@Composition@UI@Windows@@V1234@PEAVCompositor@234@_N@Details@WRL2@Microsoft@@YAJPEAPEAVAmbientLight@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEA_N@Z @ 0x180092A7C (--$MakeAndInitialize2@VAmbientLight@Composition@UI@Windows@@V1234@PEAVCompositor@234@_N@Details@.c)
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::AmbientLight>::Attach(
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
