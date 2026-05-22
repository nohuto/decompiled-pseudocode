/*
 * XREFs of ?CaptureAsync@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJPEAVVisual@234@HHW4DirectXPixelFormat@DirectX@Graphics@4@W4DirectXAlphaMode@784@MPEAPEAVVisualCapture@234@@Z @ 0x180156CA8
 * Callers:
 *     ?CaptureAsync@Api@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAJPEAUIVisual@345@USizeInt32@Graphics@5@W4DirectXPixelFormat@DirectX@85@W4DirectXAlphaMode@DirectX@85@MPEAPEAU?$IAsyncOperation@PEAUICompositionSurface@Composition@UI@Windows@@@Foundation@5@@Z @ 0x180156B40 (-CaptureAsync@Api@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAJPEAUIVisual@345@USizeIn.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ?Create@VisualCapture@Composition@UI@Windows@@SAJPEAVCompositor@234@PEAPEAV1234@@Z @ 0x18015462C (-Create@VisualCapture@Composition@UI@Windows@@SAJPEAVCompositor@234@PEAPEAV1234@@Z.c)
 *     ?Initialize@VisualCapture@Composition@UI@Windows@@QEAAJPEAVVisual@234@0PEAVCompositionGraphicsDevice@234@HHW4DirectXPixelFormat@DirectX@Graphics@4@W4DirectXAlphaMode@894@M_N@Z @ 0x180154F20 (-Initialize@VisualCapture@Composition@UI@Windows@@QEAAJPEAVVisual@234@0PEAVCompositionGraphicsDe.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionGraphicsDevice::CaptureAsync(
        struct Windows::UI::Composition::Compositor **a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        enum DXGI_ALPHA_MODE a6,
        float a7,
        Microsoft::WRL2::NestableRuntimeClass **a8)
{
  int v12; // eax
  unsigned int v13; // ebx
  Microsoft::WRL2::NestableRuntimeClass *v14; // rbx
  int v15; // eax
  int v16; // edi
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  Microsoft::WRL2::NestableRuntimeClass *v19; // [rsp+70h] [rbp+8h] BYREF

  v19 = 0LL;
  v12 = Windows::UI::Composition::VisualCapture::Create(a1[3], &v19);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x100,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositiongraphicsdevice.cpp",
      (const char *)(unsigned int)v12);
LABEL_5:
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v19);
    return v13;
  }
  v14 = v19;
  v15 = Windows::UI::Composition::VisualCapture::Initialize(
          (__int64)v19,
          a2,
          0LL,
          (Windows::UI::Composition::CompositionGraphicsDevice *)a1,
          a3,
          a4,
          a5,
          a6,
          a7,
          1u);
  v16 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10B,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositiongraphicsdevice.cpp",
      (const char *)(unsigned int)v15);
    v13 = v16;
    goto LABEL_5;
  }
  *a8 = v14;
  return 0LL;
}
