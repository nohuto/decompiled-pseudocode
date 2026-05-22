/*
 * XREFs of ?SetInsetsWithValues@CompositionNineGridBrush@Composition@UI@Windows@@QEAAJMMMM@Z @ 0x180087DDC
 * Callers:
 *     ?SetInsetsWithValues@Api@?$CompositionNineGridBrushT@VCompositionNineGridBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJMMMM@Z @ 0x180087D40 (-SetInsetsWithValues@Api@-$CompositionNineGridBrushT@VCompositionNineGridBrush@Composition@UI@Wi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetInsetWorker@CompositionNineGridBrush@Composition@UI@Windows@@AEAAJPEAMMAEBUAnimatedProperty@AnimationHelper@234@@Z @ 0x180082618 (-SetInsetWorker@CompositionNineGridBrush@Composition@UI@Windows@@AEAAJPEAMMAEBUAnimatedProperty@.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionNineGridBrush::SetInsetsWithValues(
        Windows::UI::Composition::CompositionNineGridBrush *this,
        float a2,
        float a3,
        float a4,
        float a5)
{
  int v6; // edi
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = Windows::UI::Composition::CompositionNineGridBrush::SetInsetWorker(
         this,
         (float *)this + 44,
         a2,
         (void **)&Windows::UI::Composition::CompositionNineGridBrush::sc_LeftInset);
  if ( v6 < 0 )
  {
    v10 = 201LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionninegridbrush.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v6 = Windows::UI::Composition::CompositionNineGridBrush::SetInsetWorker(
         this,
         (float *)this + 46,
         a3,
         (void **)&Windows::UI::Composition::CompositionNineGridBrush::sc_TopInset);
  if ( v6 < 0 )
  {
    v10 = 202LL;
    goto LABEL_8;
  }
  v6 = Windows::UI::Composition::CompositionNineGridBrush::SetInsetWorker(
         this,
         (float *)this + 48,
         a4,
         (void **)&Windows::UI::Composition::CompositionNineGridBrush::sc_RightInset);
  if ( v6 < 0 )
  {
    v10 = 203LL;
    goto LABEL_8;
  }
  v7 = Windows::UI::Composition::CompositionNineGridBrush::SetInsetWorker(
         this,
         (float *)this + 50,
         a5,
         (void **)&Windows::UI::Composition::CompositionNineGridBrush::sc_BottomInset);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xCC,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionninegridbrush.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
