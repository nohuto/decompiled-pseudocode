/*
 * XREFs of ?UpdateOffset@VirtualDesktopGestureContext@@QEAAXHH@Z @ 0x180556400
 * Callers:
 *     ?ContinueSwipe@VirtualDesktopGestureHandler@@UEAAJHHHHI@Z @ 0x1805505C0 (-ContinueSwipe@VirtualDesktopGestureHandler@@UEAAJHHHHI@Z.c)
 *     ?ContinueTouchSwipe@VirtualDesktopGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z @ 0x180550620 (-ContinueTouchSwipe@VirtualDesktopGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddVelocityToHistory@VirtualDesktopGestureContext@@AEAAXH@Z @ 0x18054FC24 (-AddVelocityToHistory@VirtualDesktopGestureContext@@AEAAXH@Z.c)
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureContext@@AEAAJPEA_NIH@Z @ 0x180550670 (-CreateAdjacentDesktop@VirtualDesktopGestureContext@@AEAAJPEA_NIH@Z.c)
 *     ?RemoveAdjacentThumbnails@VirtualDesktopGestureContext@@AEAAXI@Z @ 0x180554ABC (-RemoveAdjacentThumbnails@VirtualDesktopGestureContext@@AEAAXI@Z.c)
 *     ?UpdateOffset@VirtualDesktopGestureWindow@@QEAAXM@Z @ 0x180556658 (-UpdateOffset@VirtualDesktopGestureWindow@@QEAAXM@Z.c)
 */

void __fastcall VirtualDesktopGestureContext::UpdateOffset(VirtualDesktopGestureContext *this, int a2, int a3)
{
  int v3; // ebp
  int v4; // esi
  int v6; // ebx
  double v7; // xmm1_8
  int v8; // ecx
  bool v9; // zf
  int v10; // eax
  int AdjacentDesktop; // eax
  float v12; // xmm6_4
  float v13; // xmm0_4
  VirtualDesktopGestureWindow **v14; // rbx
  VirtualDesktopGestureWindow **v15; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = -a2;
  v4 = 0;
  if ( !*((_BYTE *)this + 74) )
    v3 = a2;
  v6 = -a3;
  if ( !*((_BYTE *)this + 74) )
    v6 = a3;
  VirtualDesktopGestureContext::AddVelocityToHistory(this, v6);
  v7 = (double)(int)abs32(v6) * 1000.0 / (double)*((int *)this + 14);
  if ( v7 > 1.5 )
    v3 = (int)((double)v3 * 1.5 / v7);
  v8 = v3 + *((_DWORD *)this + 16);
  v9 = *((_DWORD *)this + 46) == 5;
  *((_DWORD *)this + 16) = v8;
  if ( v9 )
  {
    if ( v8 <= 0 )
    {
      if ( v8 < 0 && !*((_BYTE *)this + 73) )
      {
        if ( !*((_BYTE *)this + 69) )
        {
          AdjacentDesktop = VirtualDesktopGestureContext::CreateAdjacentDesktop(this, (bool *)this + 71, 4u, 1);
          if ( AdjacentDesktop >= 0 )
            *((_BYTE *)this + 69) = 1;
          else
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x52E,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
              (const char *)(unsigned int)AdjacentDesktop);
        }
        if ( *((_BYTE *)this + 71) && (double)-*((_DWORD *)this + 16) >= (double)*((int *)this + 14) * 0.1 )
        {
          VirtualDesktopGestureContext::RemoveAdjacentThumbnails(this, 3);
          *((_BYTE *)this + 70) = 0;
          goto LABEL_26;
        }
      }
    }
    else if ( !*((_BYTE *)this + 73) )
    {
      if ( !*((_BYTE *)this + 68) )
      {
        v10 = VirtualDesktopGestureContext::CreateAdjacentDesktop(this, (bool *)this + 70, 3u, -1);
        if ( v10 >= 0 )
          *((_BYTE *)this + 68) = 1;
        else
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x51D,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
            (const char *)(unsigned int)v10);
      }
      if ( *((_BYTE *)this + 70) && (double)*((int *)this + 16) >= (double)*((int *)this + 14) * 0.1 )
      {
        VirtualDesktopGestureContext::RemoveAdjacentThumbnails(this, 4);
        *((_BYTE *)this + 71) = 0;
LABEL_26:
        *((_BYTE *)this + 73) = 1;
      }
    }
  }
  LOBYTE(v4) = *((_BYTE *)this + 70) != 0;
  v12 = (float)*((int *)this + 16) / (float)*((int *)this + 14);
  if ( v12 <= (float)v4 )
  {
    v13 = (float)-(*((_BYTE *)this + 71) != 0);
    if ( v13 > v12 )
      v12 = v12 + (float)((float)(v13 - v12) * 0.80000001);
  }
  else
  {
    v12 = v12 - (float)((float)(v12 - (float)v4) * 0.80000001);
  }
  v14 = (VirtualDesktopGestureWindow **)*((_QWORD *)this + 10);
  v15 = &v14[*((_QWORD *)this + 11)];
  while ( v14 != v15 )
    VirtualDesktopGestureWindow::UpdateOffset(*v14++, v12);
}
