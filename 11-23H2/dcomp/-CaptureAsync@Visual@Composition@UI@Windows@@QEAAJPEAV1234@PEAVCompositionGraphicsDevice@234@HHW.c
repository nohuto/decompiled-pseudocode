/*
 * XREFs of ?CaptureAsync@Visual@Composition@UI@Windows@@QEAAJPEAV1234@PEAVCompositionGraphicsDevice@234@HHW4DirectXPixelFormat@DirectX@Graphics@4@W4DirectXAlphaMode@784@MPEAPEAVVisualCapture@234@@Z @ 0x18010B138
 * Callers:
 *     ?CaptureAsync@Partner@Visual@Composition@UI@Windows@@UEAAJPEAUIVisual@345@PEAUICompositionGraphicsDevice@345@HHW4DirectXPixelFormat@DirectX@Graphics@5@W4DirectXAlphaMode@9Graphics@5@PEAPEAU?$IAsyncOperation@PEAUICompositionSurface@Composition@UI@Windows@@@Foundation@5@@Z @ 0x18010AF80 (-CaptureAsync@Partner@Visual@Composition@UI@Windows@@UEAAJPEAUIVisual@345@PEAUICompositionGraphi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ?Create@VisualCapture@Composition@UI@Windows@@SAJPEAVCompositor@234@PEAPEAV1234@@Z @ 0x18015462C (-Create@VisualCapture@Composition@UI@Windows@@SAJPEAVCompositor@234@PEAPEAV1234@@Z.c)
 *     ?Initialize@VisualCapture@Composition@UI@Windows@@QEAAJPEAVVisual@234@0PEAVCompositionGraphicsDevice@234@HHW4DirectXPixelFormat@DirectX@Graphics@4@W4DirectXAlphaMode@894@M_N@Z @ 0x180154F20 (-Initialize@VisualCapture@Composition@UI@Windows@@QEAAJPEAVVisual@234@0PEAVCompositionGraphicsDe.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::CaptureAsync(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        Microsoft::WRL2::NestableRuntimeClass *a9)
{
  Microsoft::WRL2::NestableRuntimeClass *v9; // rsi
  int v14; // eax
  unsigned int v15; // ebx
  Microsoft::WRL2::NestableRuntimeClass *v16; // rbx
  int v17; // eax
  int v18; // edi
  char v20; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v9 = a9;
  a9 = 0LL;
  *(_QWORD *)v9 = 0LL;
  v14 = Windows::UI::Composition::VisualCapture::Create(*(struct Windows::UI::Composition::Compositor **)(a1 + 24), &a9);
  v15 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x65B,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisual.cpp",
      (const char *)(unsigned int)v14);
LABEL_5:
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&a9);
    return v15;
  }
  v16 = a9;
  v20 = 0;
  v17 = Windows::UI::Composition::VisualCapture::Initialize(a9, a1, a2, a3, a4, a5, a6, a7, a8, v20);
  v18 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x666,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisual.cpp",
      (const char *)(unsigned int)v17);
    v15 = v18;
    goto LABEL_5;
  }
  *(_QWORD *)v9 = v16;
  return 0LL;
}
