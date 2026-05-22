/*
 * XREFs of ?Attach@?$ComPtr@VDistantLight@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVDistantLight@Composition@UI@Windows@@@Z @ 0x180091C9C
 * Callers:
 *     ??$MakeAndInitialize2@VDistantLight@Composition@UI@Windows@@V1234@PEAVCompositor@234@_N@Details@WRL2@Microsoft@@YAJPEAPEAVDistantLight@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEA_N@Z @ 0x180091B2C (--$MakeAndInitialize2@VDistantLight@Composition@UI@Windows@@V1234@PEAVCompositor@234@_N@Details@.c)
 *     ??$MakeAndInitialize2@VDistantLight@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVDistantLight@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180120D34 (--$MakeAndInitialize2@VDistantLight@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WR.c)
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::DistantLight>::Attach(
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
