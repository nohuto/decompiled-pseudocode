/*
 * XREFs of ?_FinalizeLayout@PPIWin32VtcLayoutOperation@@AEAAJW4APP_LAYOUT_INSERT_LOCATION@@@Z @ 0x1805CEA6C
 * Callers:
 *     ?FinalizeLayout@PPIWin32VtcLayoutOperation@@UEAAJXZ @ 0x1805CD950 (-FinalizeLayout@PPIWin32VtcLayoutOperation@@UEAAJXZ.c)
 *     ?InsertApp@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x1805CDAE0 (-InsertApp@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z.c)
 *     ?SwapVTCPanel@PPIWin32VtcLayoutOperation@@UEAAJXZ @ 0x1805CE290 (-SwapVTCPanel@PPIWin32VtcLayoutOperation@@UEAAJXZ.c)
 *     ?SwitchToCustomLayout@PPIWin32VtcLayoutOperation@@UEAAJPEAUIAppLayout@@@Z @ 0x1805CE480 (-SwitchToCustomLayout@PPIWin32VtcLayoutOperation@@UEAAJPEAUIAppLayout@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_ReflowItems@PPIWin32VtcLayoutOperation@@AEAAJW4APP_LAYOUT_INSERT_LOCATION@@@Z @ 0x1805CFC4C (-_ReflowItems@PPIWin32VtcLayoutOperation@@AEAAJW4APP_LAYOUT_INSERT_LOCATION@@@Z.c)
 */

__int64 __fastcall PPIWin32VtcLayoutOperation::_FinalizeLayout(__int64 a1)
{
  int v2; // edi
  __int64 v3; // rdx
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = PPIWin32VtcLayoutOperation::_ReflowItems(a1, PPIWin32VtcLayoutOperation::_sideBarLocation);
  if ( v2 < 0 )
  {
    v3 = 647LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 144LL))(a1);
  if ( v2 < 0 )
  {
    v3 = 649LL;
    goto LABEL_3;
  }
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 136LL))(a1);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x28A,
    (int)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
