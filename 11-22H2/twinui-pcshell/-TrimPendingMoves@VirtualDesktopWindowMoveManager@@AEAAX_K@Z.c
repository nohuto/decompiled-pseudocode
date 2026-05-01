/*
 * XREFs of ?TrimPendingMoves@VirtualDesktopWindowMoveManager@@AEAAX_K@Z @ 0x180178FE4
 * Callers:
 *     ?ApplicationViewShown@VirtualDesktopWindowMoveManager@@UEAAJPEAUIApplicationView@@_K@Z @ 0x180178EF0 (-ApplicationViewShown@VirtualDesktopWindowMoveManager@@UEAAJPEAUIApplicationView@@_K@Z.c)
 *     ?MoveWindow@VirtualDesktopWindowMoveManager@@UEAAJPEAUHWND__@@U_GUID@@_K@Z @ 0x180615F30 (-MoveWindow@VirtualDesktopWindowMoveManager@@UEAAJPEAUHWND__@@U_GUID@@_K@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAt@?$CTSimpleArray@UPendingMove@VirtualDesktopWindowMoveManager@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingMove@VirtualDesktopWindowMoveManager@@@@V?$CSimpleArrayStandardCompareHelper@UPendingMove@VirtualDesktopWindowMoveManager@@@@V?$CSimpleArrayStandardMergeHelper@UPendingMove@VirtualDesktopWindowMoveManager@@@@@@QEAAJ_K@Z @ 0x1806161C0 (-RemoveAt@-$CTSimpleArray@UPendingMove@VirtualDesktopWindowMoveManager@@$0PPPPPPPO@V-$CTPolicyCo.c)
 */

void __fastcall VirtualDesktopWindowMoveManager::TrimPendingMoves(
        VirtualDesktopWindowMoveManager *this,
        unsigned __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v4; // rsi
  __int64 v5; // rdi
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 12);
  if ( v2 )
  {
    v4 = (_QWORD *)((char *)this + 88);
    v5 = 32 * v2;
    do
    {
      if ( *(_QWORD *)(*v4 + v5 - 8) + 500LL < a2 )
      {
        v6 = CTSimpleArray<VirtualDesktopWindowMoveManager::PendingMove,4294967294,CTPolicyCoTaskMem<VirtualDesktopWindowMoveManager::PendingMove>,CSimpleArrayStandardCompareHelper<VirtualDesktopWindowMoveManager::PendingMove>,CSimpleArrayStandardMergeHelper<VirtualDesktopWindowMoveManager::PendingMove>>::RemoveAt(
               v4,
               v2 - 1);
        if ( v6 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x81,
            (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopwindowmovemanager.cpp",
            (const char *)(unsigned int)v6);
      }
      v5 -= 32LL;
      --v2;
    }
    while ( v2 );
  }
}
