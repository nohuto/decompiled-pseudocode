/*
 * XREFs of ?CreateAdjacentDesktop@VirtualDesktopHotKeyWindow@@QEAAJPEA_NPEAUIVirtualDesktop@@V?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@IH@Z @ 0x180619838
 * Callers:
 *     ?AnimateOperation2@VirtualDesktopSwitchAnimator@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchDirection@@W4VirtualDesktopSwitchType@@@Z @ 0x18061684C (-AnimateOperation2@VirtualDesktopSwitchAnimator@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitc.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$tip_test@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@tip@@QEAA@XZ @ 0x180206AA0 (--1-$tip_test@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@tip@@QEAA@XZ.c)
 *     ?CreateAdjacentDesktop@VirtualDesktopHotKeyWindow@@AEAAJPEA_NPEAUIVirtualDesktop@@V?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@IUtagRECT@@@Z @ 0x18061910C (-CreateAdjacentDesktop@VirtualDesktopHotKeyWindow@@AEAAJPEA_NPEAUIVirtualDesktop@@V-$shared_any_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopHotKeyWindow::CreateAdjacentDesktop(
        VirtualDesktopGestureWindow *a1,
        _BYTE *a2,
        struct IVirtualDesktop *a3,
        __int64 a4,
        int a5,
        int a6)
{
  int v8; // r8d
  int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v14[2]; // [rsp+30h] [rbp-28h] BYREF
  __int128 v15; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v8 = a6 * (*((_DWORD *)a1 + 48) - *((_DWORD *)a1 + 46)) + *((_DWORD *)a1 + 48) - *((_DWORD *)a1 + 46);
  v9 = *((_DWORD *)a1 + 49) - *((_DWORD *)a1 + 47);
  v14[0] = (unsigned int)(a6 * (*((_DWORD *)a1 + 48) - *((_DWORD *)a1 + 46)));
  v14[1] = __PAIR64__(v9, v8);
  v15 = 0LL;
  v10 = *(_QWORD *)(a4 + 8);
  if ( v10 )
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
  v15 = *(_OWORD *)a4;
  v11 = VirtualDesktopHotKeyWindow::CreateAdjacentDesktop(a1, a2, a3, &v15, a5, (struct tagRECT *)v14);
  v12 = v11;
  if ( v11 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA3,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeywindow.cpp",
      (const char *)(unsigned int)v11);
  tip::tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>::~tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>(a4);
  return v12;
}
