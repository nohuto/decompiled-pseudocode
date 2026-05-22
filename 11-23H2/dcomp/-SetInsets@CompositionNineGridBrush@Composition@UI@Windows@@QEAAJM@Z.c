/*
 * XREFs of ?SetInsets@CompositionNineGridBrush@Composition@UI@Windows@@QEAAJM@Z @ 0x180169200
 * Callers:
 *     ?SetInsets@Api@?$CompositionNineGridBrushT@VCompositionNineGridBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJM@Z @ 0x180129A40 (-SetInsets@Api@-$CompositionNineGridBrushT@VCompositionNineGridBrush@Composition@UI@Windows@@VCo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetInsetWorker@CompositionNineGridBrush@Composition@UI@Windows@@AEAAJPEAMMAEBUAnimatedProperty@AnimationHelper@234@@Z @ 0x180082618 (-SetInsetWorker@CompositionNineGridBrush@Composition@UI@Windows@@AEAAJPEAMMAEBUAnimatedProperty@.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionNineGridBrush::SetInsets(
        Windows::UI::Composition::CompositionNineGridBrush *this,
        float a2)
{
  int v3; // edi
  __int64 v4; // rdx
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = Windows::UI::Composition::CompositionNineGridBrush::SetInsetWorker(
         this,
         (float *)this + 44,
         a2,
         (void **)&Windows::UI::Composition::CompositionNineGridBrush::sc_LeftInset);
  if ( v3 < 0 )
  {
    v4 = 187LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionninegridbrush.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v3 = Windows::UI::Composition::CompositionNineGridBrush::SetInsetWorker(
         this,
         (float *)this + 46,
         a2,
         (void **)&Windows::UI::Composition::CompositionNineGridBrush::sc_TopInset);
  if ( v3 < 0 )
  {
    v4 = 188LL;
    goto LABEL_3;
  }
  v3 = Windows::UI::Composition::CompositionNineGridBrush::SetInsetWorker(
         this,
         (float *)this + 48,
         a2,
         (void **)&Windows::UI::Composition::CompositionNineGridBrush::sc_RightInset);
  if ( v3 < 0 )
  {
    v4 = 189LL;
    goto LABEL_3;
  }
  v6 = Windows::UI::Composition::CompositionNineGridBrush::SetInsetWorker(
         this,
         (float *)this + 50,
         a2,
         (void **)&Windows::UI::Composition::CompositionNineGridBrush::sc_BottomInset);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xBE,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionninegridbrush.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
