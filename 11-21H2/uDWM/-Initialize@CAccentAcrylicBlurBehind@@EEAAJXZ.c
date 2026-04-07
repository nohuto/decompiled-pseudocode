/*
 * XREFs of ?Initialize@CAccentAcrylicBlurBehind@@EEAAJXZ @ 0x18004BED0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x180038D40 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x18004BF1C (-InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 */

__int64 __fastcall CAccentAcrylicBlurBehind::Initialize(CAccentAcrylicBlurBehind *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  unsigned int v4; // edi
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CVisual::Initialize(this);
  v3 = 0;
  v4 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x707,
      (int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
      (const char *)(unsigned int)v2);
    return v4;
  }
  else
  {
    v5 = CAccentAcrylicBlurBehind::InitializeDComp(this);
    if ( v5 < 0 )
      return (unsigned int)v5;
    return v3;
  }
}
