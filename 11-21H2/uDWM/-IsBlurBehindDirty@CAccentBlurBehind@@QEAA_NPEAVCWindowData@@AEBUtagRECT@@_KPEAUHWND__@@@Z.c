/*
 * XREFs of ?IsBlurBehindDirty@CAccentBlurBehind@@QEAA_NPEAVCWindowData@@AEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x180097BAC
 * Callers:
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18001E1F0 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180027570 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180029A50 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002E9B0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?UpdateAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z @ 0x18003609C (-UpdateAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z.c)
 * Callees:
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180012D9C (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x1800298A4 (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 */

char __fastcall CAccentBlurBehind::IsBlurBehindDirty(
        CAccentBlurBehind *this,
        struct CWindowData *a2,
        const struct tagRECT *a3,
        __int64 a4,
        HWND a5)
{
  CTopLevelWindow *v5; // r10
  char v6; // bl
  __int64 v10; // r9
  __int64 v11; // rcx
  unsigned int v12; // edx
  char v13; // dl
  bool v14; // cl
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  struct _LIST_ENTRY *i; // rcx
  HWND Blink; // rdx
  struct tagRECT rcDst; // [rsp+30h] [rbp-38h] BYREF

  v5 = (CTopLevelWindow *)*((_QWORD *)a2 + 55);
  v6 = 0;
  if ( v5 )
  {
    v10 = *((_QWORD *)this + 37);
    v11 = 0LL;
    v12 = *((_DWORD *)this + 80);
    v6 = 1;
    if ( v12 )
    {
      while ( *((_QWORD *)a2 + 5) != *(_QWORD *)(v10 + 8 * v11) )
      {
        v11 = (unsigned int)(v11 + 1);
        if ( (unsigned int)v11 >= v12 )
          goto LABEL_5;
      }
    }
    else
    {
LABEL_5:
      CTopLevelWindow::GetActualWindowRect(v5, &rcDst, 0, 1, 1);
      v13 = *((_BYTE *)a2 + 664);
      if ( (v13 & 1) == 0 )
        return 0;
      v14 = 0;
      if ( (v13 & 4) == 0 )
        v14 = (*((_BYTE *)a2 + 668) & 1) == 0;
      if ( v14
        && (*((_DWORD *)a2 + 29) & 0x20000000) == 0
        && (*((_BYTE *)a2 + 670) & 8) == 0
        && IntersectRect(&rcDst, &rcDst, a3) )
      {
        WindowListForDesktop = CWindowList::GetWindowListForDesktop(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                                    + 52));
        for ( i = WindowListForDesktop->Blink; i != WindowListForDesktop; i = i->Blink )
        {
          Blink = (HWND)i[2].Blink;
          if ( Blink == a5 )
            break;
          if ( Blink == *((HWND *)a2 + 5) )
            return 0;
        }
      }
      else
      {
        return 0;
      }
    }
  }
  return v6;
}
