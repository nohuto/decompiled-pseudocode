/*
 * XREFs of ?SetInsetScales@CompositionNineGridBrush@Composition@UI@Windows@@QEAAJM@Z @ 0x180169008
 * Callers:
 *     ?SetInsetScales@Api@?$CompositionNineGridBrushT@VCompositionNineGridBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJM@Z @ 0x1801298B0 (-SetInsetScales@Api@-$CompositionNineGridBrushT@VCompositionNineGridBrush@Composition@UI@Windows.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetInsetScaleWorker@CompositionNineGridBrush@Composition@UI@Windows@@AEAAJPEAMMAEBUAnimatedProperty@AnimationHelper@234@@Z @ 0x180168F78 (-SetInsetScaleWorker@CompositionNineGridBrush@Composition@UI@Windows@@AEAAJPEAMMAEBUAnimatedProp.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionNineGridBrush::SetInsetScales(
        Windows::UI::Composition::CompositionNineGridBrush *this,
        float a2)
{
  int v3; // edi
  __int64 v4; // rdx
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = Windows::UI::Composition::CompositionNineGridBrush::SetInsetScaleWorker(
         this,
         (float *)this + 45,
         a2,
         (void **)&Windows::UI::Composition::CompositionNineGridBrush::sc_LeftInsetScale);
  if ( v3 < 0 )
  {
    v4 = 211LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionninegridbrush.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v3 = Windows::UI::Composition::CompositionNineGridBrush::SetInsetScaleWorker(
         this,
         (float *)this + 47,
         a2,
         (void **)&Windows::UI::Composition::CompositionNineGridBrush::sc_TopInsetScale);
  if ( v3 < 0 )
  {
    v4 = 212LL;
    goto LABEL_3;
  }
  v3 = Windows::UI::Composition::CompositionNineGridBrush::SetInsetScaleWorker(
         this,
         (float *)this + 49,
         a2,
         (void **)&Windows::UI::Composition::CompositionNineGridBrush::sc_RightInsetScale);
  if ( v3 < 0 )
  {
    v4 = 213LL;
    goto LABEL_3;
  }
  v6 = Windows::UI::Composition::CompositionNineGridBrush::SetInsetScaleWorker(
         this,
         (float *)this + 51,
         a2,
         (void **)&Windows::UI::Composition::CompositionNineGridBrush::sc_BottomInsetScale);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD6,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionninegridbrush.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
