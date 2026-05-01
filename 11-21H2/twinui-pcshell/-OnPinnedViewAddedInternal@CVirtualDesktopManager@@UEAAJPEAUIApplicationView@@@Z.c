/*
 * XREFs of ?OnPinnedViewAddedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180546FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CVirtualDesktopManager::_OnViewAdded__lambda_45076b0ac1163e7c92a74a613c702f64___ @ 0x1801B507C (CVirtualDesktopManager--_OnViewAdded__lambda_45076b0ac1163e7c92a74a613c702f64___.c)
 */

__int64 __fastcall CVirtualDesktopManager::OnPinnedViewAddedInternal(
        CVirtualDesktopManager *this,
        struct IApplicationView *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IApplicationView *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v5[0] = (char *)this - 8;
  v5[1] = &v7;
  v2 = CVirtualDesktopManager::_OnViewAdded__lambda_45076b0ac1163e7c92a74a613c702f64___(
         (CVirtualDesktopManager *)((char *)this - 8),
         a2,
         (__int64)v5);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x459,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
