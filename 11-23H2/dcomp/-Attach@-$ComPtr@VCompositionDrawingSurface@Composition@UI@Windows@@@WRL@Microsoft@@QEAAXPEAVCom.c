/*
 * XREFs of ?Attach@?$ComPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVCompositionDrawingSurface@Composition@UI@Windows@@@Z @ 0x180061BCC
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionDrawingSurface@Composition@UI@Windows@@V1234@PEAVCompositor@234@PEAVCompositionGraphicsDevice@234@AEBUSizeInt32@Graphics@4@AEAW4DirectXPixelFormat@DirectX@84@AEAW4DirectXAlphaMode@DirectX@84@AEA_NAEA_N@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionDrawingSurface@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAPEAVCompositionGraphicsDevice@456@AEBUSizeInt32@Graphics@6@AEAW4DirectXPixelFormat@DirectX@Graphics@6@AEAW4DirectXAlphaMode@DirectX@Graphics@6@AEA_N6@Z @ 0x1800613E8 (--$MakeAndInitialize2@VCompositionDrawingSurface@Composition@UI@Windows@@V1234@PEAVCompositor@23.c)
 *     ??$MakeAndInitialize2@VCompositionDrawingSurface@Composition@UI@Windows@@V1234@PEAVCompositor@234@PEAVCompositionGraphicsDevice@234@AEAUSizeInt32@Graphics@4@AEAW4DirectXPixelFormat@DirectX@84@AEAW4DirectXAlphaMode@DirectX@84@_N_N@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionDrawingSurface@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAPEAVCompositionGraphicsDevice@456@AEAUSizeInt32@Graphics@6@AEAW4DirectXPixelFormat@DirectX@Graphics@6@AEAW4DirectXAlphaMode@DirectX@Graphics@6@$$QEA_N6@Z @ 0x1801938D0 (--$MakeAndInitialize2@VCompositionDrawingSurface@Composition@UI@Windows@@V1234@PEAV_ea_1801938D0.c)
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

unsigned int __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::CompositionDrawingSurface>::Attach(
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
