/*
 * XREFs of ?_SetTopmost@RetailDemoExperienceManager@@AEAAXXZ @ 0x1803849DC
 * Callers:
 *     ?SetTopmost@RetailDemoExperienceManager@@UEAAJH@Z @ 0x180383D00 (-SetTopmost@RetailDemoExperienceManager@@UEAAJH@Z.c)
 *     ?_Show@RetailDemoExperienceManager@@AEAAXXZ @ 0x180384B5C (-_Show@RetailDemoExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall RetailDemoExperienceManager::_SetTopmost(RetailDemoExperienceManager *this)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  int v4; // eax
  int v5; // eax
  int v6; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  HWND hWnd; // [rsp+58h] [rbp+10h] BYREF

  v2 = (__int64 *)*((_QWORD *)this + 25);
  if ( !v2 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x15B,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
      (const char *)0x8000FFFFLL,
      v6);
  v8 = 0LL;
  v3 = *v2;
  v8 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v3 + 32))(v2, &v8);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x15E,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
      (const char *)(unsigned int)v4,
      v6);
  hWnd = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v8 + 24LL))(v8, &hWnd);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x160,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
      (const char *)(unsigned int)v5,
      v6);
  if ( hWnd )
    SetWindowPos(hWnd, (HWND)((*((_BYTE *)this + 348) != 0) - 2LL), 0, 0, 0, 0, 0x13u);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v8);
}
