/*
 * XREFs of ?Attach@?$ComPtr@VInteropHolographicTexture@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVInteropHolographicTexture@Composition@UI@Windows@@@Z @ 0x18015B5F8
 * Callers:
 *     ??$MakeAndInitialize2@VInteropHolographicTexture@Composition@UI@Windows@@V1234@PEAVInteropDwmCompositor@234@AEA_NAEAPEAXAEA_N@Details@WRL2@Microsoft@@YAJPEAPEAVInteropHolographicTexture@Composition@UI@Windows@@$$QEAPEAVInteropDwmCompositor@456@AEA_NAEAPEAX2@Z @ 0x18015B094 (--$MakeAndInitialize2@VInteropHolographicTexture@Composition@UI@Windows@@V1234@PEAVInteropDwmCom.c)
 *     ??$MakeAndInitialize2@VInteropHolographicTexture@Composition@UI@Windows@@V1234@AEAPEAVInteropCompositor@234@_N@Details@WRL2@Microsoft@@YAJPEAPEAVInteropHolographicTexture@Composition@UI@Windows@@AEAPEAVInteropCompositor@456@$$QEA_N@Z @ 0x18015F640 (--$MakeAndInitialize2@VInteropHolographicTexture@Composition@UI@Windows@@V1234@AEAPEAVInteropCom.c)
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::InteropHolographicTexture>::Attach(
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
