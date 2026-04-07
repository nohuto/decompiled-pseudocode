/*
 * XREFs of ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x18006D852
 * Callers:
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x18001ACB4 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x1800278D0 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?GetLivePreviewWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N@Z @ 0x1800E5F94 (-GetLivePreviewWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N@Z.c)
 *     ??0AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@@Z @ 0x1800ECFD0 (--0AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWind.c)
 *     ?GetAbsoluteWindowRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA?AURect@Foundation@Windows@5@XZ @ 0x1800FB0EC (-GetAbsoluteWindowRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA-AURec.c)
 *     ?TransferWindowVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@AEAV?$vector@PEAVCAnimatedTransitionVisual@@V?$allocator@PEAVCAnimatedTransitionVisual@@@std@@@std@@@Z @ 0x180103810 (-TransferWindowVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGloba.c)
 *     ??0UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@_N@Z @ 0x1801042B4 (--0UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@_N@Z.c)
 *     ?GetWindowBounds@CWindowList@@UEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x18010A6D0 (-GetWindowBounds@CWindowList@@UEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?GetBorderRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N@Z @ 0x18001B450 (-GetBorderRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N@Z.c)
 */

struct tagRECT *__fastcall CTopLevelWindow::GetActualWindowRect(
        CTopLevelWindow *this,
        struct tagRECT *__return_ptr retstr,
        char a3,
        char a4,
        bool a5)
{
  int v5; // esi
  __int64 v9; // r9
  LONG v10; // r14d
  LONG right; // r11d
  LONG bottom; // ebp
  LONG v13; // r11d
  LONG v14; // ebp
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r10
  int v18; // edx
  int v19; // r8d
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  struct tagRECT v25; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0;
  if ( a5 && *(_QWORD *)(*((_QWORD *)this + 34) + 248LL) )
  {
    *retstr = *CTopLevelWindow::GetBorderRect(this, &v25, a3 ^ 1u);
  }
  else
  {
    *retstr = *(struct tagRECT *)(*((_QWORD *)this + 94) + 48LL);
    if ( a3 )
      OffsetRect(retstr, -retstr->left, -retstr->top);
    if ( (*((_BYTE *)this + 248) & 4) == 0 || (v9 = 676LL, !a4) )
      v9 = 660LL;
    v10 = *(_DWORD *)((char *)this + v9) + retstr->left;
    right = retstr->right;
    bottom = retstr->bottom;
    retstr->left = v10;
    v13 = right - *(_DWORD *)((char *)this + v9 + 4);
    retstr->right = v13;
    retstr->top += *(_DWORD *)((char *)this + v9 + 8);
    v14 = bottom - *(_DWORD *)((char *)this + v9 + 12);
    retstr->bottom = v14;
    if ( a5 )
    {
      v15 = *((_QWORD *)this + 46);
      if ( v15 )
      {
        v16 = *((_QWORD *)this + 47);
        if ( v16 )
        {
          v17 = *((_QWORD *)this + 49);
          if ( v17 )
          {
            v18 = *((_DWORD *)this + 162) - *(_DWORD *)(v16 + 24) - *(_DWORD *)((char *)this + v9 + 4);
            v19 = *((_DWORD *)this + 164) - *(_DWORD *)(v17 + 28) - *(_DWORD *)((char *)this + v9 + 12);
            v20 = *((_DWORD *)this + 161) - *(_DWORD *)(v15 + 24);
            v21 = 0;
            v22 = v20 - *(_DWORD *)((char *)this + v9);
            if ( v22 >= 0 )
              v21 = v22;
            retstr->left = v10 + v21;
            v23 = 0;
            if ( v18 >= 0 )
              v23 = v18;
            retstr->right = v13 - v23;
            if ( v19 >= 0 )
              v5 = v19;
            retstr->bottom = v14 - v5;
          }
        }
      }
    }
  }
  return retstr;
}
