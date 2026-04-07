/*
 * XREFs of ?ValidateVisual@CProjectionBorderVisual@@UEAAJXZ @ 0x1800D5DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x18001C1C0 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_UpdateInstructions@CProjectionBorderVisual@@IEAAJXZ @ 0x1800D6088 (-_UpdateInstructions@CProjectionBorderVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CProjectionBorderVisual::ValidateVisual(CProjectionBorderVisual *this)
{
  int updated; // eax
  unsigned int v3; // edi
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*((_DWORD *)this + 22) & 0x4000) != 0 )
  {
    updated = CProjectionBorderVisual::_UpdateInstructions(this);
    v3 = updated;
    if ( updated < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x24,
        (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordervisual.cpp",
        (const char *)(unsigned int)updated);
      return v3;
    }
    *((_DWORD *)this + 22) &= ~0x4000u;
  }
  v5 = CRenderDataVisual::ValidateVisual(this);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x28,
    (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordervisual.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
