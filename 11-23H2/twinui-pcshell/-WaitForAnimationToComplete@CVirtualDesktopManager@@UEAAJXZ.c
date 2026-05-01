/*
 * XREFs of ?WaitForAnimationToComplete@CVirtualDesktopManager@@UEAAJXZ @ 0x1806074C0
 * Callers:
 *     ?WaitForAnimationToComplete@CVirtualDesktopManager@@WBI@EAAJXZ @ 0x1802A8D90 (-WaitForAnimationToComplete@CVirtualDesktopManager@@WBI@EAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualDesktopManager::WaitForAnimationToComplete(CVirtualDesktopManager *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  v1 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 28))(
         *((_QWORD *)this + 28),
         &GUID_bb1b0fb0_58f6_4f1a_99f2_86599b33ede8,
         &v5);
  v2 = v1;
  if ( v1 >= 0 )
    v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 56LL))(v5);
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x161,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v1);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v5);
  return v2;
}
