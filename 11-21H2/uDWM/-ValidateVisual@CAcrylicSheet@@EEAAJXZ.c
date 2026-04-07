/*
 * XREFs of ?ValidateVisual@CAcrylicSheet@@EEAAJXZ @ 0x18009BA00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x180019AC0 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@_NPEBN@Z @ 0x1800552C8 (-UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@_NPEBN@Z.c)
 *     ?EnsureAcrylicAccentColor@CAcrylicSheet@@AEAAJXZ @ 0x18009A134 (-EnsureAcrylicAccentColor@CAcrylicSheet@@AEAAJXZ.c)
 *     ?EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ @ 0x18009A1C4 (-EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ.c)
 *     ?UpdateTransition@CAcrylicSheet@@AEAAJXZ @ 0x18009B848 (-UpdateTransition@CAcrylicSheet@@AEAAJXZ.c)
 */

__int64 __fastcall CAcrylicSheet::ValidateVisual(CAcrylicSheet *this)
{
  int v1; // eax
  int updated; // edi
  __int64 v4; // rdx
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_DWORD *)this + 22);
  if ( (v1 & 0x8000) != 0 )
  {
    updated = CAcrylicSheet::UpdateTransition(this);
    if ( updated < 0 )
    {
      v4 = 179LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
        (const char *)(unsigned int)updated);
      return (unsigned int)updated;
    }
    *((_DWORD *)this + 22) &= ~0x8000u;
    v1 = *((_DWORD *)this + 22);
  }
  if ( (v1 & 0x4000) != 0 )
  {
    updated = CAcrylicSheet::EnsureBackgroundEffects(this);
    if ( updated < 0 )
    {
      v4 = 185LL;
      goto LABEL_4;
    }
    *((_DWORD *)this + 22) &= 0xFFFF8FFF;
    v1 = *((_DWORD *)this + 22);
  }
  if ( (v1 & 0x1000) != 0 )
  {
    updated = CAccentAcrylicBlurBehind::UpdateAcrylicBlurBehind(
                *((CAccentAcrylicBlurBehind **)this + 41),
                (CAcrylicSheet *)((char *)this + 500),
                0,
                (const double *)this + 65);
    if ( updated < 0 )
    {
      v4 = 194LL;
      goto LABEL_4;
    }
    *((_DWORD *)this + 22) &= ~0x1000u;
    v1 = *((_DWORD *)this + 22);
  }
  if ( (v1 & 0x2000) != 0 )
  {
    updated = CAcrylicSheet::EnsureAcrylicAccentColor(this);
    if ( updated < 0 )
    {
      v4 = 200LL;
      goto LABEL_4;
    }
    *((_DWORD *)this + 22) &= ~0x2000u;
  }
  v6 = CRenderDataVisual::ValidateVisual(this);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xCC,
    (int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
