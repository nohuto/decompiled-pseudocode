/*
 * XREFs of _lambda_f588d8340c5f679f6f991f3b23d84bfd_::operator() @ 0x1801B5848
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_955eb04c377e45185ef03ddb06152220___::Run @ 0x1801B5C70 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_955eb04c377e45185ef03ddb_ea_1801B5C70.c)
 *     ?SetDesktopWallpaperInternal@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x180548360 (-SetDesktopWallpaperInternal@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@P.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_f588d8340c5f679f6f991f3b23d84bfd_::operator()(HSTRING **a1)
{
  HRESULT v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  PCWSTR StringRawBuffer; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  UINT32 length; // [rsp+48h] [rbp+10h] BYREF
  LPVOID v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = 0LL;
  v2 = CoCreateInstance(&CLSID_DesktopWallpaper, 0LL, 4u, &GUID_c182461f_dfac_4375_ab6e_4cc45aa7f9cc, &v9);
  v3 = v2;
  if ( v2 >= 0 )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(**a1, &length);
    v2 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, PCWSTR))(*(_QWORD *)v9 + 24LL))(v9, 0LL, StringRawBuffer);
    v3 = v2;
    if ( v2 >= 0 )
    {
      v2 = (*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)v9 + 184LL))(v9);
      v3 = v2;
      if ( v2 >= 0 )
      {
        v3 = 0;
        goto LABEL_9;
      }
      v4 = 1061LL;
    }
    else
    {
      v4 = 1051LL;
    }
  }
  else
  {
    v4 = 1045LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
    (const char *)(unsigned int)v2);
LABEL_9:
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v9);
  return v3;
}
