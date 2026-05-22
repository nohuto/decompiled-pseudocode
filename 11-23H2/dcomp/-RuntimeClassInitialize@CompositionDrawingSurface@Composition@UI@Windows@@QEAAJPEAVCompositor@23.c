/*
 * XREFs of ?RuntimeClassInitialize@CompositionDrawingSurface@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCompositionGraphicsDevice@234@USizeInt32@Graphics@4@W4DirectXPixelFormat@DirectX@84@W4DirectXAlphaMode@DirectX@84@_N5@Z @ 0x1800614E4
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionDrawingSurface@Composition@UI@Windows@@V1234@PEAVCompositor@234@PEAVCompositionGraphicsDevice@234@AEBUSizeInt32@Graphics@4@AEAW4DirectXPixelFormat@DirectX@84@AEAW4DirectXAlphaMode@DirectX@84@AEA_NAEA_N@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionDrawingSurface@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAPEAVCompositionGraphicsDevice@456@AEBUSizeInt32@Graphics@6@AEAW4DirectXPixelFormat@DirectX@Graphics@6@AEAW4DirectXAlphaMode@DirectX@Graphics@6@AEA_N6@Z @ 0x1800613E8 (--$MakeAndInitialize2@VCompositionDrawingSurface@Composition@UI@Windows@@V1234@PEAVCompositor@23.c)
 *     ??$MakeAndInitialize2@VCompositionDrawingSurface@Composition@UI@Windows@@V1234@PEAVCompositor@234@PEAVCompositionGraphicsDevice@234@AEAUSizeInt32@Graphics@4@AEAW4DirectXPixelFormat@DirectX@84@AEAW4DirectXAlphaMode@DirectX@84@_N_N@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionDrawingSurface@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAPEAVCompositionGraphicsDevice@456@AEAUSizeInt32@Graphics@6@AEAW4DirectXPixelFormat@DirectX@Graphics@6@AEAW4DirectXAlphaMode@DirectX@Graphics@6@$$QEA_N6@Z @ 0x1801938D0 (--$MakeAndInitialize2@VCompositionDrawingSurface@Composition@UI@Windows@@V1234@PEAV_ea_1801938D0.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180055F60 (-RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     ?RecreateUnderlying@CompositionDrawingSurface@Composition@UI@Windows@@EEAAJUSizeInt32@Graphics@4@@Z @ 0x180061850 (-RecreateUnderlying@CompositionDrawingSurface@Composition@UI@Windows@@EEAAJUSizeInt32@Graphics@4.c)
 *     ??4?$ComPtr@VCompositionGraphicsDevice@Composition@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAVCompositionGraphicsDevice@Composition@UI@Windows@@@Z @ 0x18008603C (--4-$ComPtr@VCompositionGraphicsDevice@Composition@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAVC.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionDrawingSurface::RuntimeClassInitialize(
        __int64 a1,
        struct Windows::UI::Composition::Compositor *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        char a7,
        char a8)
{
  int v11; // eax
  unsigned int v12; // esi
  int v13; // eax
  unsigned int v14; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v11 = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(
          (Windows::UI::Composition::CompositionObject *)a1,
          a2);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositiondrawingsurface.cpp",
      (const char *)(unsigned int)v11);
    return v12;
  }
  else
  {
    *(_DWORD *)(a1 + 168) = a6;
    *(_DWORD *)(a1 + 172) = a5;
    *(_BYTE *)(a1 + 240) = a7;
    *(_BYTE *)(a1 + 241) = a8;
    Microsoft::WRL::ComPtr<Windows::UI::Composition::CompositionGraphicsDevice>::operator=(a1 + 160, a3);
    v13 = Windows::UI::Composition::CompositionDrawingSurface::RecreateUnderlying(a1, a4);
    v14 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4A,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositiondrawingsurface.cpp",
        (const char *)(unsigned int)v13);
      return v14;
    }
    else
    {
      return 0LL;
    }
  }
}
