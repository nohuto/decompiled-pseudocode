/*
 * XREFs of ?MoveViewFromHolographicDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180602150
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_MoveViewToDesktop@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18003A888 (-_MoveViewToDesktop@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z @ 0x180163F10 (-GetCurrentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualDesktopManager::MoveViewFromHolographicDesktopInternal(
        CVirtualDesktopManager *this,
        struct IApplicationView *a2)
{
  int CurrentDesktopInternal; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IVirtualDesktop *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  CurrentDesktopInternal = CVirtualDesktopManager::GetCurrentDesktopInternal(this, &v9);
  v5 = CurrentDesktopInternal;
  if ( CurrentDesktopInternal < 0 )
  {
    v6 = 954LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)CurrentDesktopInternal);
    goto LABEL_6;
  }
  CurrentDesktopInternal = CVirtualDesktopManager::_MoveViewToDesktop(
                             (CVirtualDesktopManager *)((char *)this - 8),
                             a2,
                             v9);
  v5 = CurrentDesktopInternal;
  if ( CurrentDesktopInternal < 0 )
  {
    v6 = 959LL;
    goto LABEL_5;
  }
LABEL_6:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v9);
  return v5;
}
