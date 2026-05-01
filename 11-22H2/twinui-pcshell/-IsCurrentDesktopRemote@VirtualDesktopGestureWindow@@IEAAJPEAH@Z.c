/*
 * XREFs of ?IsCurrentDesktopRemote@VirtualDesktopGestureWindow@@IEAAJPEAH@Z @ 0x18060FA94
 * Callers:
 *     ?Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z @ 0x18060E688 (-Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z.c)
 *     ?Initialize@VirtualDesktopHotKeyWindow@@QEAAJXZ @ 0x180619924 (-Initialize@VirtualDesktopHotKeyWindow@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall VirtualDesktopGestureWindow::IsCurrentDesktopRemote(VirtualDesktopGestureWindow *this, int *a2)
{
  __int64 *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp+8h] BYREF
  __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  v12 = 0LL;
  v3 = (__int64 *)*((_QWORD *)this + 4);
  v4 = *v3;
  v12 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(v4 + 48))(v3, &v12);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v13 = 0LL;
    v7 = (**v12)(v12, &GUID_a871910e_6cc0_4e65_8b9b_458ce9115e30, &v13);
    v8 = retaddr;
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v13 + 56LL))(v13, a2);
      v8 = retaddr;
      if ( v7 >= 0 )
      {
LABEL_8:
        v6 = 0;
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
        goto LABEL_9;
      }
      v9 = 312LL;
    }
    else
    {
      v9 = 310LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v8,
      (void *)v9,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x133,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
    (const char *)(unsigned int)v5);
LABEL_9:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v12);
  return v6;
}
