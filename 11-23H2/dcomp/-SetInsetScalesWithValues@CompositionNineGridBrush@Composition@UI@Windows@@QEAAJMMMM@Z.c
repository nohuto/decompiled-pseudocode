/*
 * XREFs of ?SetInsetScalesWithValues@CompositionNineGridBrush@Composition@UI@Windows@@QEAAJMMMM@Z @ 0x1801690FC
 * Callers:
 *     ?SetInsetScalesWithValues@Api@?$CompositionNineGridBrushT@VCompositionNineGridBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJMMMM@Z @ 0x180129960 (-SetInsetScalesWithValues@Api@-$CompositionNineGridBrushT@VCompositionNineGridBrush@Composition@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetInsetScaleWorker@CompositionNineGridBrush@Composition@UI@Windows@@AEAAJPEAMMAEBUAnimatedProperty@AnimationHelper@234@@Z @ 0x180168F78 (-SetInsetScaleWorker@CompositionNineGridBrush@Composition@UI@Windows@@AEAAJPEAMMAEBUAnimatedProp.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionNineGridBrush::SetInsetScalesWithValues(
        Windows::UI::Composition::CompositionNineGridBrush *this,
        float a2,
        float a3,
        float a4,
        float a5)
{
  int v6; // edi
  __int64 v7; // rdx
  int v9; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = Windows::UI::Composition::CompositionNineGridBrush::SetInsetScaleWorker(
         this,
         (float *)this + 45,
         a2,
         (void **)&Windows::UI::Composition::CompositionNineGridBrush::sc_LeftInsetScale);
  if ( v6 < 0 )
  {
    v7 = 225LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionninegridbrush.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v6 = Windows::UI::Composition::CompositionNineGridBrush::SetInsetScaleWorker(
         this,
         (float *)this + 47,
         a3,
         (void **)&Windows::UI::Composition::CompositionNineGridBrush::sc_TopInsetScale);
  if ( v6 < 0 )
  {
    v7 = 226LL;
    goto LABEL_3;
  }
  v6 = Windows::UI::Composition::CompositionNineGridBrush::SetInsetScaleWorker(
         this,
         (float *)this + 49,
         a4,
         (void **)&Windows::UI::Composition::CompositionNineGridBrush::sc_RightInsetScale);
  if ( v6 < 0 )
  {
    v7 = 227LL;
    goto LABEL_3;
  }
  v9 = Windows::UI::Composition::CompositionNineGridBrush::SetInsetScaleWorker(
         this,
         (float *)this + 51,
         a5,
         (void **)&Windows::UI::Composition::CompositionNineGridBrush::sc_BottomInsetScale);
  v10 = v9;
  if ( v9 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE4,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionninegridbrush.cpp",
    (const char *)(unsigned int)v9);
  return v10;
}
