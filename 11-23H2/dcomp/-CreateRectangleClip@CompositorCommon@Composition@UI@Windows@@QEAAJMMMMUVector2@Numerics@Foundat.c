/*
 * XREFs of ?CreateRectangleClip@CompositorCommon@Composition@UI@Windows@@QEAAJMMMMUVector2@Numerics@Foundation@4@000PEAPEAVRectangleClip@234@@Z @ 0x18006EA08
 * Callers:
 *     ?CreateRectangleClip@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUIRectangleClip@345@@Z @ 0x18006E950 (-CreateRectangleClip@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUIRectangleClip@345.c)
 *     ?CreateRectangleClipWithSides@Api@CompositorCommon@Composition@UI@Windows@@UEAAJMMMMPEAPEAUIRectangleClip@345@@Z @ 0x1801265E0 (-CreateRectangleClipWithSides@Api@CompositorCommon@Composition@UI@Windows@@UEAAJMMMMPEAPEAUIRect.c)
 *     ?CreateRectangleClipWithSidesAndRadius@Api@CompositorCommon@Composition@UI@Windows@@UEAAJMMMMUVector2@Numerics@Foundation@5@000PEAPEAUIRectangleClip@345@@Z @ 0x180126720 (-CreateRectangleClipWithSidesAndRadius@Api@CompositorCommon@Composition@UI@Windows@@UEAAJMMMMUVe.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize2@VRectangleClip@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAMAEAMAEAMAEAMAEAUVector2@Numerics@Foundation@4@AEAU6784@AEAU6784@AEAU6784@@Details@WRL2@Microsoft@@YAJPEAPEAVRectangleClip@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAM222AEAUVector2@Numerics@Foundation@6@333@Z @ 0x18006EAA0 (--$MakeAndInitialize2@VRectangleClip@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAMAEAMAE.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::CreateRectangleClip(
        __int64 a1,
        float a2,
        float a3,
        float a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        _QWORD *a10)
{
  _QWORD *v10; // rdi
  int v11; // eax
  unsigned int v12; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v15; // [rsp+70h] [rbp+20h] BYREF
  float v16; // [rsp+78h] [rbp+28h] BYREF
  float v17; // [rsp+80h] [rbp+30h] BYREF
  float v18; // [rsp+88h] [rbp+38h] BYREF

  v18 = a4;
  v17 = a3;
  v16 = a2;
  v10 = a10;
  a10 = 0LL;
  v15 = a1;
  *v10 = 0LL;
  v11 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::RectangleClip,Windows::UI::Composition::RectangleClip,Windows::UI::Composition::Compositor *,float &,float &,float &,float &,Windows::Foundation::Numerics::Vector2 &,Windows::Foundation::Numerics::Vector2 &,Windows::Foundation::Numerics::Vector2 &,Windows::Foundation::Numerics::Vector2 &>(
          (unsigned int)&a10,
          (unsigned int)&v15,
          (unsigned int)&v16,
          (unsigned int)&v17,
          (__int64)&v18,
          (__int64)&a5,
          (__int64)&a6,
          (__int64)&a7,
          (__int64)&a8,
          (__int64)&a9);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8F1,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)(unsigned int)v11);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&a10);
    return v12;
  }
  else
  {
    *v10 = a10;
    return 0LL;
  }
}
