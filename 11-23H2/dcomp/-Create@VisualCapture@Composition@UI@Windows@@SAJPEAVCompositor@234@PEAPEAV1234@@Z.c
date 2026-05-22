/*
 * XREFs of ?Create@VisualCapture@Composition@UI@Windows@@SAJPEAVCompositor@234@PEAPEAV1234@@Z @ 0x18015462C
 * Callers:
 *     ?CaptureAsync@Visual@Composition@UI@Windows@@QEAAJPEAV1234@PEAVCompositionGraphicsDevice@234@HHW4DirectXPixelFormat@DirectX@Graphics@4@W4DirectXAlphaMode@784@MPEAPEAVVisualCapture@234@@Z @ 0x18010B138 (-CaptureAsync@Visual@Composition@UI@Windows@@QEAAJPEAV1234@PEAVCompositionGraphicsDevice@234@HHW.c)
 *     ?CaptureAsync@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJPEAVVisual@234@HHW4DirectXPixelFormat@DirectX@Graphics@4@W4DirectXAlphaMode@784@MPEAPEAVVisualCapture@234@@Z @ 0x180156CA8 (-CaptureAsync@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJPEAVVisual@234@HHW4DirectXP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize2@VGlobalVisualCapture@Composition@UI@Windows@@V1234@AEAPEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVGlobalVisualCapture@Composition@UI@Windows@@AEAPEAVCompositor@456@@Z @ 0x1801541EC (--$MakeAndInitialize2@VGlobalVisualCapture@Composition@UI@Windows@@V1234@AEAPEAVCompositor@234@@.c)
 */

__int64 __fastcall Windows::UI::Composition::VisualCapture::Create(
        struct Windows::UI::Composition::Compositor *a1,
        struct Windows::UI::Composition::VisualCapture **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::UI::Composition::Compositor *v7; // [rsp+30h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v8; // [rsp+40h] [rbp+18h] BYREF

  v7 = a1;
  v3 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::GlobalVisualCapture,Windows::UI::Composition::GlobalVisualCapture,Windows::UI::Composition::Compositor * &>(
         &v8,
         &v7);
  v4 = v3;
  if ( v3 >= 0 )
  {
    *a2 = v8;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtvisualcaptureg.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
