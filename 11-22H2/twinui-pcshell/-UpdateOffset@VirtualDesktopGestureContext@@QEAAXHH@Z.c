/*
 * XREFs of ?UpdateOffset@VirtualDesktopGestureContext@@QEAAXHH@Z @ 0x1806125A8
 * Callers:
 *     ?ContinueSwipe@VirtualDesktopGestureHandler@@UEAAJHHHHI@Z @ 0x18060BFD0 (-ContinueSwipe@VirtualDesktopGestureHandler@@UEAAJHHHHI@Z.c)
 *     ?ContinueTouchSwipe@VirtualDesktopGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z @ 0x18060C030 (-ContinueTouchSwipe@VirtualDesktopGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddVelocityToHistory@VirtualDesktopGestureContext@@AEAAXH@Z @ 0x18060B350 (-AddVelocityToHistory@VirtualDesktopGestureContext@@AEAAXH@Z.c)
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureContext@@AEAAJPEA_NIH@Z @ 0x18060C080 (-CreateAdjacentDesktop@VirtualDesktopGestureContext@@AEAAJPEA_NIH@Z.c)
 *     ?RemoveAdjacentThumbnails@VirtualDesktopGestureContext@@AEAAXI@Z @ 0x180610C38 (-RemoveAdjacentThumbnails@VirtualDesktopGestureContext@@AEAAXI@Z.c)
 *     ?UpdateOffset@VirtualDesktopGestureWindow@@QEAAXM@Z @ 0x180612804 (-UpdateOffset@VirtualDesktopGestureWindow@@QEAAXM@Z.c)
 */

void __fastcall VirtualDesktopGestureContext::UpdateOffset(VirtualDesktopGestureContext *this, int a2, int a3)
{
  int v3; // ebp
  int v4; // esi
  int v6; // ebx
  double v7; // xmm1_8
  int v8; // ecx
  bool v9; // zf
  bool v10; // sf
  int AdjacentDesktop; // eax
  int v12; // eax
  float v13; // xmm6_4
  float v14; // xmm0_4
  VirtualDesktopGestureWindow **v15; // rbx
  VirtualDesktopGestureWindow **v16; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = -a2;
  v4 = 0;
  if ( !*((_BYTE *)this + 66) )
    v3 = a2;
  v6 = -a3;
  if ( !*((_BYTE *)this + 66) )
    v6 = a3;
  VirtualDesktopGestureContext::AddVelocityToHistory(this, v6);
  v7 = (double)(int)abs32(v6) * 1000.0 / (double)*((int *)this + 12);
  if ( v7 > 1.5 )
    v3 = (int)((double)v3 * 1.5 / v7);
  v8 = v3 + *((_DWORD *)this + 14);
  v9 = *((_DWORD *)this + 44) == 5;
  *((_DWORD *)this + 14) = v8;
  if ( !v9 )
    goto LABEL_28;
  v10 = v8 < 0;
  if ( v8 > 0 )
  {
    if ( !*((_BYTE *)this + 65) )
    {
      if ( !*((_BYTE *)this + 60) )
      {
        AdjacentDesktop = VirtualDesktopGestureContext::CreateAdjacentDesktop(this, (bool *)this + 62, 3u, -1);
        if ( AdjacentDesktop >= 0 )
          *((_BYTE *)this + 60) = 1;
        else
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x567,
            (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
            (const char *)(unsigned int)AdjacentDesktop);
      }
      if ( *((_BYTE *)this + 62) && (double)*((int *)this + 14) >= (double)*((int *)this + 12) * 0.1 )
      {
        VirtualDesktopGestureContext::RemoveAdjacentThumbnails(this, 4);
        *((_BYTE *)this + 63) = 0;
LABEL_27:
        *((_BYTE *)this + 65) = 1;
        goto LABEL_28;
      }
      goto LABEL_28;
    }
    v10 = v8 < 0;
  }
  if ( v10 && !*((_BYTE *)this + 65) )
  {
    if ( !*((_BYTE *)this + 61) )
    {
      v12 = VirtualDesktopGestureContext::CreateAdjacentDesktop(this, (bool *)this + 63, 4u, 1);
      if ( v12 >= 0 )
        *((_BYTE *)this + 61) = 1;
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x578,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)v12);
    }
    if ( *((_BYTE *)this + 63) && (double)-*((_DWORD *)this + 14) >= (double)*((int *)this + 12) * 0.1 )
    {
      VirtualDesktopGestureContext::RemoveAdjacentThumbnails(this, 3);
      *((_BYTE *)this + 62) = 0;
      goto LABEL_27;
    }
  }
LABEL_28:
  LOBYTE(v4) = *((_BYTE *)this + 62) != 0;
  v13 = (float)*((int *)this + 14) / (float)*((int *)this + 12);
  if ( v13 <= (float)v4 )
  {
    v14 = (float)-(*((_BYTE *)this + 63) != 0);
    if ( v14 > v13 )
      v13 = v13 + (float)((float)(v14 - v13) * 0.80000001);
  }
  else
  {
    v13 = v13 - (float)((float)(v13 - (float)v4) * 0.80000001);
  }
  v15 = (VirtualDesktopGestureWindow **)*((_QWORD *)this + 9);
  v16 = &v15[*((_QWORD *)this + 10)];
  while ( v15 != v16 )
    VirtualDesktopGestureWindow::UpdateOffset(*v15++, v13);
}
