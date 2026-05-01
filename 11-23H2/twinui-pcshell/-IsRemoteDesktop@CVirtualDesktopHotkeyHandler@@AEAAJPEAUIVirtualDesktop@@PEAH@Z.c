/*
 * XREFs of ?IsRemoteDesktop@CVirtualDesktopHotkeyHandler@@AEAAJPEAUIVirtualDesktop@@PEAH@Z @ 0x1806092E8
 * Callers:
 *     ?InvokeSwitchDesktopWithAnimation@CVirtualDesktopHotkeyHandler@@AEAAJW4VirtualDesktopSwitchDirection@@@Z @ 0x180608F74 (-InvokeSwitchDesktopWithAnimation@CVirtualDesktopHotkeyHandler@@AEAAJW4VirtualDesktopSwitchDirec.c)
 *     ?_CycleInDirection@CVirtualDesktopHotkeyHandler@@AEAAJW4VirtualDesktopSwitchDirection@@@Z @ 0x180609674 (-_CycleInDirection@CVirtualDesktopHotkeyHandler@@AEAAJW4VirtualDesktopSwitchDirection@@@Z.c)
 *     ?_RemoveDesktop@CVirtualDesktopHotkeyHandler@@AEAAJXZ @ 0x1806099A8 (-_RemoveDesktop@CVirtualDesktopHotkeyHandler@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopHotkeyHandler::IsRemoteDesktop(
        CVirtualDesktopHotkeyHandler *this,
        __int64 (__fastcall ***a2)(struct IVirtualDesktop *, GUID *, CVirtualDesktopHotkeyHandler **),
        int *a3)
{
  __int64 (__fastcall **v4)(struct IVirtualDesktop *, GUID *, CVirtualDesktopHotkeyHandler **); // rax
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CVirtualDesktopHotkeyHandler *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = this;
  v4 = *a2;
  v10 = 0LL;
  v5 = (*v4)((struct IVirtualDesktop *)a2, &GUID_c9be252c_e386_425e_b33c_ca422112f51f, &v10);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(CVirtualDesktopHotkeyHandler *, int *))(*(_QWORD *)v10 + 64LL))(v10, a3);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v6 = 0;
      goto LABEL_7;
    }
    v7 = 165LL;
  }
  else
  {
    v7 = 164LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeyhandler.cpp",
    (const char *)(unsigned int)v5);
LABEL_7:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v10);
  return v6;
}
