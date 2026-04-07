/*
 * XREFs of ?UpdateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@@Z @ 0x18009B538
 * Callers:
 *     ?Rect@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXAEBU0Foundation@Windows@5@@Z @ 0x1800FF81C (-Rect@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXAEBU0Foundation@Windows@5@@Z.c)
 *     ?UpdateRect@CAcrylicSheet@@QEAAJPEAVCWindowData@@@Z @ 0x180106CB4 (-UpdateRect@CAcrylicSheet@@QEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StopAnimations@CAcrylicSheet@@QEAAJXZ @ 0x18009B280 (-StopAnimations@CAcrylicSheet@@QEAAJXZ.c)
 *     ?UpdateRectInternal@CAcrylicSheet@@AEAAJAEBUtagRECT@@@Z @ 0x18009B698 (-UpdateRectInternal@CAcrylicSheet@@AEAAJAEBUtagRECT@@@Z.c)
 *     ?UpdateTransition@CAcrylicSheet@@AEAAJXZ @ 0x18009B848 (-UpdateTransition@CAcrylicSheet@@AEAAJXZ.c)
 */

__int64 __fastcall CAcrylicSheet::UpdateRect(CAcrylicSheet *this, const struct tagRECT *a2)
{
  __int64 v2; // rax
  __int64 v5; // r9
  _DWORD *v6; // rcx
  signed __int64 v7; // rdx
  int updated; // ebx
  __int64 v9; // rdx
  bool v11; // zf
  char v12; // al
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 71);
  if ( !v2 || *(_BYTE *)(v2 + 72) )
  {
    updated = CAcrylicSheet::UpdateRectInternal(this, a2);
    if ( updated < 0 )
    {
      v9 = 258LL;
      goto LABEL_9;
    }
  }
  else if ( *((_BYTE *)this + 561) )
  {
    if ( *((_BYTE *)this + 562) )
    {
      v5 = 4LL;
      v6 = (_DWORD *)((char *)this + 528);
      v7 = (char *)a2 - (char *)this;
      do
      {
        *v6 += *(_DWORD *)((char *)v6 + v7 - 528) - v6[4];
        ++v6;
        --v5;
      }
      while ( v5 );
    }
    *((struct tagRECT *)this + 34) = *a2;
    updated = CAcrylicSheet::UpdateTransition(this);
    if ( updated < 0 )
    {
      v9 = 237LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
        (const char *)(unsigned int)updated);
      return (unsigned int)updated;
    }
  }
  else
  {
    if ( *((_QWORD *)this + 73) )
    {
      v11 = (*(_DWORD *)(v2 + 8))-- == 1;
      v12 = CDesktopManager::s_fTimelineDirty;
      if ( v11 )
        v12 = 1;
      *((_QWORD *)this + 71) = 0LL;
      CDesktopManager::s_fTimelineDirty = v12;
    }
    else
    {
      CAcrylicSheet::StopAnimations(this);
    }
    updated = CAcrylicSheet::UpdateRectInternal(this, a2);
    if ( updated < 0 )
    {
      v9 = 252LL;
      goto LABEL_9;
    }
  }
  return 0LL;
}
