/*
 * XREFs of ?RuntimeClassInitialize@CompositionVirtualDrawingSurface@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCompositionGraphicsDevice@234@USizeInt32@Graphics@4@W4DirectXPixelFormat@DirectX@84@W4DirectXAlphaMode@DirectX@84@@Z @ 0x18003A738
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionVirtualDrawingSurface@Composition@UI@Windows@@V1234@PEAVCompositor@234@PEAVCompositionGraphicsDevice@234@AEAUSizeInt32@Graphics@4@AEAW4DirectXPixelFormat@DirectX@84@AEAW4DirectXAlphaMode@DirectX@84@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionVirtualDrawingSurface@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAPEAVCompositionGraphicsDevice@456@AEAUSizeInt32@Graphics@6@AEAW4DirectXPixelFormat@DirectX@Graphics@6@AEAW4DirectXAlphaMode@DirectX@Graphics@6@@Z @ 0x18003A5E8 (--$MakeAndInitialize2@VCompositionVirtualDrawingSurface@Composition@UI@Windows@@V1234@PEAVCompos.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RecreateUnderlying@CompositionVirtualDrawingSurface@Composition@UI@Windows@@EEAAJUSizeInt32@Graphics@4@@Z @ 0x18003A7D0 (-RecreateUnderlying@CompositionVirtualDrawingSurface@Composition@UI@Windows@@EEAAJUSizeInt32@Gra.c)
 *     ?RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180055F60 (-RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     ??4?$ComPtr@VCompositionGraphicsDevice@Composition@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAVCompositionGraphicsDevice@Composition@UI@Windows@@@Z @ 0x18008603C (--4-$ComPtr@VCompositionGraphicsDevice@Composition@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAVC.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionVirtualDrawingSurface::RuntimeClassInitialize(
        __int64 a1,
        struct Windows::UI::Composition::Compositor *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6)
{
  int v9; // eax
  unsigned int v10; // esi
  int v11; // eax
  unsigned int v12; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v9 = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(
         (Windows::UI::Composition::CompositionObject *)a1,
         a2);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionvirtualdrawingsurface.cpp",
      (const char *)(unsigned int)v9);
    return v10;
  }
  else
  {
    *(_DWORD *)(a1 + 168) = a6;
    *(_DWORD *)(a1 + 172) = a5;
    *(_QWORD *)(a1 + 176) = a4;
    Microsoft::WRL::ComPtr<Windows::UI::Composition::CompositionGraphicsDevice>::operator=(a1 + 160, a3);
    v11 = Windows::UI::Composition::CompositionVirtualDrawingSurface::RecreateUnderlying(a1, a4);
    v12 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x46,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionvirtualdrawingsurface.cpp",
        (const char *)(unsigned int)v11);
      return v12;
    }
    else
    {
      return 0LL;
    }
  }
}
