/*
 * XREFs of ?OnViewAddedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18012FAE0
 * Callers:
 *     ?OnViewAddedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x18012FA60 (-OnViewAddedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CVirtualDesktopManager::_OnViewAdded__lambda_452398a9c9150a8650d8808a41b7c76c___ @ 0x1801B521C (CVirtualDesktopManager--_OnViewAdded__lambda_452398a9c9150a8650d8808a41b7c76c___.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopManager::OnViewAddedInternal(
        CVirtualDesktopManager *this,
        struct IApplicationView *a2,
        struct IVirtualDesktop *a3)
{
  unsigned int v4; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, struct IVirtualDesktop *))(**((_QWORD **)this + 11) + 32LL))(
          *((_QWORD *)this + 11),
          a3) )
  {
    v4 = -2147024809;
    v6 = 1097LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)v4);
    return v4;
  }
  v4 = CVirtualDesktopManager::_OnViewAdded__lambda_452398a9c9150a8650d8808a41b7c76c___(
         (CVirtualDesktopManager *)((char *)this - 8),
         a2);
  if ( (v4 & 0x80000000) != 0 )
  {
    v6 = 1103LL;
    goto LABEL_6;
  }
  return v4;
}
