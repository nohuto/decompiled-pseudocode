/*
 * XREFs of ?UpdateTransition@CAcrylicSheet@@AEAAJXZ @ 0x18009B848
 * Callers:
 *     ?OnGlobalTimeUpdated@CAcrylicSheet@@MEAAJXZ @ 0x18009A810 (-OnGlobalTimeUpdated@CAcrylicSheet@@MEAAJXZ.c)
 *     ?UpdateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@@Z @ 0x18009B538 (-UpdateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?ValidateVisual@CAcrylicSheet@@EEAAJXZ @ 0x18009BA00 (-ValidateVisual@CAcrylicSheet@@EEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x18002A190 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?InterpolateValueLinear@CAcrylicSheet@@AEAAJJJM@Z @ 0x18009A740 (-InterpolateValueLinear@CAcrylicSheet@@AEAAJJJM@Z.c)
 *     ?StopAnimations@CAcrylicSheet@@QEAAJXZ @ 0x18009B280 (-StopAnimations@CAcrylicSheet@@QEAAJXZ.c)
 *     ?UpdateRectInternal@CAcrylicSheet@@AEAAJAEBUtagRECT@@@Z @ 0x18009B698 (-UpdateRectInternal@CAcrylicSheet@@AEAAJAEBUtagRECT@@@Z.c)
 */

__int64 __fastcall CAcrylicSheet::UpdateTransition(CAcrylicSheet *this)
{
  __int64 v1; // rax
  float v3; // xmm0_4
  bool v4; // zf
  char v5; // al
  __int64 v6; // rax
  const struct tagRECT *v7; // rdx
  float v8; // xmm3_4
  LONG v9; // eax
  signed int v10; // r8d
  int v11; // edx
  CAcrylicSheet *v12; // rcx
  LONG v13; // eax
  signed int v14; // r8d
  int v15; // edx
  CAcrylicSheet *v16; // rcx
  LONG v17; // eax
  signed int v18; // r8d
  int v19; // edx
  CAcrylicSheet *v20; // rcx
  int updated; // edi
  __int64 v22; // rdx
  int v24; // eax
  unsigned int v25; // ebx
  __int64 v26; // rax
  char v27; // al
  struct tagRECT v28; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = *((_QWORD *)this + 73);
  if ( v1 )
  {
    if ( *(_BYTE *)(v1 + 72) )
    {
      v3 = *((float *)this + 145);
      v4 = (*(_DWORD *)(v1 + 8))-- == 1;
      v5 = CDesktopManager::s_fTimelineDirty;
      if ( v4 )
        v5 = 1;
      *((_QWORD *)this + 73) = 0LL;
      CDesktopManager::s_fTimelineDirty = v5;
    }
    else
    {
      v3 = *(double *)(v1 + 48);
    }
    CVisual::SetOpacity(this, v3);
  }
  v6 = *((_QWORD *)this + 71);
  if ( v6 )
  {
    v7 = (const struct tagRECT *)((char *)this + 544);
    if ( *(_BYTE *)(v6 + 72) )
    {
      updated = CAcrylicSheet::UpdateRectInternal(this, v7);
      if ( updated < 0 )
      {
        v22 = 575LL;
        goto LABEL_12;
      }
      v26 = *((_QWORD *)this + 71);
      if ( v26 )
      {
        v4 = (*(_DWORD *)(v26 + 8))-- == 1;
        v27 = CDesktopManager::s_fTimelineDirty;
        if ( v4 )
          v27 = 1;
        *((_QWORD *)this + 71) = 0LL;
        CDesktopManager::s_fTimelineDirty = v27;
      }
    }
    else
    {
      v8 = *(double *)(v6 + 48);
      v9 = CAcrylicSheet::InterpolateValueLinear(this, *((_DWORD *)this + 132), v7->left, v8);
      v10 = *((_DWORD *)this + 137);
      v11 = *((_DWORD *)this + 133);
      v28.left = v9;
      v13 = CAcrylicSheet::InterpolateValueLinear(v12, v11, v10, v8);
      v14 = *((_DWORD *)this + 138);
      v15 = *((_DWORD *)this + 134);
      v28.top = v13;
      v17 = CAcrylicSheet::InterpolateValueLinear(v16, v15, v14, v8);
      v18 = *((_DWORD *)this + 139);
      v19 = *((_DWORD *)this + 135);
      v28.right = v17;
      v28.bottom = CAcrylicSheet::InterpolateValueLinear(v20, v19, v18, v8);
      updated = CAcrylicSheet::UpdateRectInternal(this, &v28);
      if ( updated < 0 )
      {
        v22 = 571LL;
LABEL_12:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v22,
          (int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
          (const char *)(unsigned int)updated);
        return (unsigned int)updated;
      }
      if ( *((_QWORD *)this + 71) )
        return 0LL;
    }
  }
  if ( !*((_QWORD *)this + 73) )
  {
    v24 = CAcrylicSheet::StopAnimations(this);
    v25 = v24;
    if ( v24 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x249,
        (int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
        (const char *)(unsigned int)v24);
      return v25;
    }
  }
  return 0LL;
}
