/*
 * XREFs of ?UpdateTransition@CAcrylicSheet@@AEAAJXZ @ 0x1800A3F1C
 * Callers:
 *     ?UpdateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@@Z @ 0x18006B8DE (-UpdateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?OnGlobalTimeUpdated@CAcrylicSheet@@MEAAJXZ @ 0x1800A3670 (-OnGlobalTimeUpdated@CAcrylicSheet@@MEAAJXZ.c)
 *     ?ValidateVisual@CAcrylicSheet@@EEAAJXZ @ 0x1800A40D0 (-ValidateVisual@CAcrylicSheet@@EEAAJXZ.c)
 * Callees:
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x18002A780 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?InterpolateValueLinear@CAcrylicSheet@@AEAAJJJM@Z @ 0x18006B88A (-InterpolateValueLinear@CAcrylicSheet@@AEAAJJJM@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StopAnimations@CAcrylicSheet@@QEAAJXZ @ 0x1800A3C68 (-StopAnimations@CAcrylicSheet@@QEAAJXZ.c)
 *     ?UpdateRectInternal@CAcrylicSheet@@AEAAJAEBUtagRECT@@@Z @ 0x1800A3D58 (-UpdateRectInternal@CAcrylicSheet@@AEAAJAEBUtagRECT@@@Z.c)
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
  __int64 v24; // rax
  char v25; // al
  int v26; // eax
  unsigned int v27; // ebx
  struct tagRECT v28; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = *((_QWORD *)this + 69);
  if ( v1 )
  {
    if ( *(_BYTE *)(v1 + 72) )
    {
      v3 = *((float *)this + 137);
      v4 = (*(_DWORD *)(v1 + 8))-- == 1;
      v5 = CDesktopManager::s_fTimelineDirty;
      if ( v4 )
        v5 = 1;
      *((_QWORD *)this + 69) = 0LL;
      CDesktopManager::s_fTimelineDirty = v5;
    }
    else
    {
      v3 = *(double *)(v1 + 48);
    }
    CVisual::SetOpacity(this, v3);
  }
  v6 = *((_QWORD *)this + 67);
  if ( v6 )
  {
    v7 = (const struct tagRECT *)((char *)this + 512);
    if ( *(_BYTE *)(v6 + 72) )
    {
      updated = CAcrylicSheet::UpdateRectInternal(this, v7);
      if ( updated < 0 )
      {
        v22 = 488LL;
        goto LABEL_12;
      }
      v24 = *((_QWORD *)this + 67);
      if ( v24 )
      {
        v4 = (*(_DWORD *)(v24 + 8))-- == 1;
        v25 = CDesktopManager::s_fTimelineDirty;
        if ( v4 )
          v25 = 1;
        *((_QWORD *)this + 67) = 0LL;
        CDesktopManager::s_fTimelineDirty = v25;
      }
    }
    else
    {
      v8 = *(double *)(v6 + 48);
      v9 = CAcrylicSheet::InterpolateValueLinear(this, *((_DWORD *)this + 124), v7->left, v8);
      v10 = *((_DWORD *)this + 129);
      v11 = *((_DWORD *)this + 125);
      v28.left = v9;
      v13 = CAcrylicSheet::InterpolateValueLinear(v12, v11, v10, v8);
      v14 = *((_DWORD *)this + 130);
      v15 = *((_DWORD *)this + 126);
      v28.top = v13;
      v17 = CAcrylicSheet::InterpolateValueLinear(v16, v15, v14, v8);
      v18 = *((_DWORD *)this + 131);
      v19 = *((_DWORD *)this + 127);
      v28.right = v17;
      v28.bottom = CAcrylicSheet::InterpolateValueLinear(v20, v19, v18, v8);
      updated = CAcrylicSheet::UpdateRectInternal(this, &v28);
      if ( updated < 0 )
      {
        v22 = 484LL;
LABEL_12:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v22,
          (__int64)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
          (const char *)(unsigned int)updated);
        return (unsigned int)updated;
      }
    }
  }
  if ( *((_QWORD *)this + 67) )
    return 0LL;
  if ( *((_QWORD *)this + 69) )
    return 0LL;
  v26 = CAcrylicSheet::StopAnimations(this);
  v27 = v26;
  if ( v26 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1F2,
    (__int64)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
    (const char *)(unsigned int)v26);
  return v27;
}
