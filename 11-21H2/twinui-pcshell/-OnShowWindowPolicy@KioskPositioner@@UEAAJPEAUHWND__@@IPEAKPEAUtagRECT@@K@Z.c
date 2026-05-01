/*
 * XREFs of ?OnShowWindowPolicy@KioskPositioner@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x1804F15C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsOwnedAppWindow@KioskPositioner@@AEAA_NPEAUHWND__@@@Z @ 0x1804F0E08 (-IsOwnedAppWindow@KioskPositioner@@AEAA_NPEAUHWND__@@@Z.c)
 *     ?IsViewManaged@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1804F10AC (-IsViewManaged@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?IsWin32ApplicationView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1804F1150 (-IsWin32ApplicationView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KioskPositioner::OnShowWindowPolicy(
        KioskPositioner *this,
        HWND a2,
        __int64 a3,
        unsigned int *a4,
        struct tagRECT *lprc)
{
  __int64 v8; // rax
  int (*v9)(void); // rax
  KioskPositioner *v10; // rcx
  KioskPositioner *v11; // rcx
  const char *v12; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IApplicationView *v15; // [rsp+30h] [rbp+8h] BYREF

  *a4 = 0;
  SetRectEmpty(lprc);
  v15 = 0LL;
  v8 = **((_QWORD **)this + 8);
  v15 = 0LL;
  v9 = *(int (**)(void))(v8 + 48);
  try
  {
    if ( v9() >= 0
      && KioskPositioner::IsViewManaged((KioskPositioner *)((char *)this - 152), v15)
      && KioskPositioner::IsWin32ApplicationView(v10, v15)
      && !KioskPositioner::IsOwnedAppWindow(v11, a2) )
    {
      *a4 = 2;
    }
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v15);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x39D,
                           (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                           v12);
  }
  return result;
}
