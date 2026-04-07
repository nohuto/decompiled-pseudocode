/*
 * XREFs of ?ValidateVisual@CAcrylicSheet@@EEAAJXZ @ 0x1800A40D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x18001C1C0 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@K_NPEBN@Z @ 0x1800A137C (-UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@K_NPEBN@Z.c)
 *     ?EnsureAcrylicAccentColor@CAcrylicSheet@@AEAAJXZ @ 0x1800A3078 (-EnsureAcrylicAccentColor@CAcrylicSheet@@AEAAJXZ.c)
 *     ?EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ @ 0x1800A3110 (-EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ.c)
 *     ?UpdateTransition@CAcrylicSheet@@AEAAJXZ @ 0x1800A3F1C (-UpdateTransition@CAcrylicSheet@@AEAAJXZ.c)
 */

__int64 __fastcall CAcrylicSheet::ValidateVisual(CAcrylicSheet *this)
{
  int v1; // eax
  int updated; // edi
  __int64 v4; // rdx
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = *((_DWORD *)this + 22);
  if ( (v1 & 0x8000) != 0 )
  {
    updated = CAcrylicSheet::UpdateTransition(this);
    if ( updated < 0 )
    {
      v4 = 184LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (__int64)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
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
      v4 = 190LL;
      goto LABEL_4;
    }
    *((_DWORD *)this + 22) &= 0xFFFF8FFF;
    v1 = *((_DWORD *)this + 22);
  }
  if ( (v1 & 0x1000) != 0 )
  {
    updated = CAccentAcrylicBlurBehind::UpdateAcrylicBlurBehind(
                *((CAccentAcrylicBlurBehind **)this + 39),
                (CAcrylicSheet *)((char *)this + 472),
                *((_DWORD *)this + 120),
                0,
                (double *)this + 61);
    if ( updated < 0 )
    {
      v4 = 200LL;
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
      v4 = 206LL;
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
    (void *)0xD2,
    (__int64)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
