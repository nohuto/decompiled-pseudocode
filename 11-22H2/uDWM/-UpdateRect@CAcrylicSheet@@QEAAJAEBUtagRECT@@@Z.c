/*
 * XREFs of ?UpdateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@@Z @ 0x18006B8DE
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180024190 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?Rect@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXAEBU0Foundation@Windows@5@@Z @ 0x1801048DC (-Rect@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXAEBU0Foundation@Windows@5@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StopAnimations@CAcrylicSheet@@QEAAJXZ @ 0x1800A3C68 (-StopAnimations@CAcrylicSheet@@QEAAJXZ.c)
 *     ?UpdateRectInternal@CAcrylicSheet@@AEAAJAEBUtagRECT@@@Z @ 0x1800A3D58 (-UpdateRectInternal@CAcrylicSheet@@AEAAJAEBUtagRECT@@@Z.c)
 *     ?UpdateTransition@CAcrylicSheet@@AEAAJXZ @ 0x1800A3F1C (-UpdateTransition@CAcrylicSheet@@AEAAJXZ.c)
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
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 67);
  if ( !v2 || *(_BYTE *)(v2 + 72) )
  {
    updated = CAcrylicSheet::UpdateRectInternal(this, a2);
    if ( updated < 0 )
    {
      v9 = 264LL;
      goto LABEL_9;
    }
  }
  else if ( *((_BYTE *)this + 529) )
  {
    if ( *((_BYTE *)this + 530) )
    {
      v5 = 4LL;
      v6 = (_DWORD *)((char *)this + 496);
      v7 = (char *)a2 - (char *)this;
      do
      {
        *v6 += *(_DWORD *)((char *)v6 + v7 - 496) - v6[4];
        ++v6;
        --v5;
      }
      while ( v5 );
    }
    *((struct tagRECT *)this + 32) = *a2;
    updated = CAcrylicSheet::UpdateTransition(this);
    if ( updated < 0 )
    {
      v9 = 243LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
        (const char *)(unsigned int)updated,
        v13);
      return (unsigned int)updated;
    }
  }
  else
  {
    if ( *((_QWORD *)this + 69) )
    {
      v11 = (*(_DWORD *)(v2 + 8))-- == 1;
      v12 = CDesktopManager::s_fTimelineDirty;
      if ( v11 )
        v12 = 1;
      *((_QWORD *)this + 67) = 0LL;
      CDesktopManager::s_fTimelineDirty = v12;
    }
    else
    {
      CAcrylicSheet::StopAnimations(this);
    }
    updated = CAcrylicSheet::UpdateRectInternal(this, a2);
    if ( updated < 0 )
    {
      v9 = 258LL;
      goto LABEL_9;
    }
  }
  return 0LL;
}
