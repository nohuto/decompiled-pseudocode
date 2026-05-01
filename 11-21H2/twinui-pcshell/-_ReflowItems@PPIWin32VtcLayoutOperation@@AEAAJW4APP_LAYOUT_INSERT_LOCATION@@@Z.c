/*
 * XREFs of ?_ReflowItems@PPIWin32VtcLayoutOperation@@AEAAJW4APP_LAYOUT_INSERT_LOCATION@@@Z @ 0x180517540
 * Callers:
 *     ?_FinalizeLayout@PPIWin32VtcLayoutOperation@@AEAAJW4APP_LAYOUT_INSERT_LOCATION@@@Z @ 0x1805163DC (-_FinalizeLayout@PPIWin32VtcLayoutOperation@@AEAAJW4APP_LAYOUT_INSERT_LOCATION@@@Z.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180082930 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$PPIWin32VtcSideBarError@AEAY0DB@$$CBG@TabletModeTelemetry@@SAXAEAY0DB@$$CBG@Z @ 0x180514818 (--$PPIWin32VtcSideBarError@AEAY0DB@$$CBG@TabletModeTelemetry@@SAXAEAY0DB@$$CBG@Z.c)
 *     ??$PPIWin32VtcSideBarLayoutItemsReflowed@IAEAI_N@TabletModeTelemetry@@SAX$$QEAIAEAI$$QEA_N@Z @ 0x1805148B4 (--$PPIWin32VtcSideBarLayoutItemsReflowed@IAEAI_N@TabletModeTelemetry@@SAX$$QEAIAEAI$$QEA_N@Z.c)
 *     ?_GetVtcAppPanelWidth@PPIWin32VtcLayoutOperation@@AEAAHXZ @ 0x180516954 (-_GetVtcAppPanelWidth@PPIWin32VtcLayoutOperation@@AEAAHXZ.c)
 */

__int64 __fastcall PPIWin32VtcLayoutOperation::_ReflowItems(PPIWin32VtcLayoutOperation *a1, int a2)
{
  __int64 v4; // rcx
  int v5; // esi
  unsigned int v7; // edi
  __int64 v8; // rax
  int v9; // eax
  struct IApplicationView *v10; // rdx
  unsigned int v11; // ebx
  bool v12; // [rsp+20h] [rbp-89h] BYREF
  unsigned int v13; // [rsp+24h] [rbp-85h] BYREF
  int WindowForView; // [rsp+28h] [rbp-81h] BYREF
  ApplicationViewHelpers *v15; // [rsp+30h] [rbp-79h] BYREF
  __int128 v16; // [rsp+40h] [rbp-69h]
  __int128 v17; // [rsp+50h] [rbp-59h]
  __int64 v18; // [rsp+60h] [rbp-49h]
  __int64 (__fastcall **v19)(); // [rsp+70h] [rbp-39h] BYREF
  __int128 v20; // [rsp+78h] [rbp-31h]
  __int128 v21; // [rsp+88h] [rbp-21h]
  __int64 v22; // [rsp+98h] [rbp-11h]
  __int64 (__fastcall ***v23)(); // [rsp+A8h] [rbp-1h]
  _DWORD v24[2]; // [rsp+B0h] [rbp+7h] BYREF
  int v25; // [rsp+B8h] [rbp+Fh]
  int v26; // [rsp+BCh] [rbp+13h]
  _DWORD v27[10]; // [rsp+C0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v5 = (*(__int64 (__fastcall **)(PPIWin32VtcLayoutOperation *, __int64))(*(_QWORD *)a1 + 88LL))(a1, 1LL);
  if ( v5 )
  {
    (*(void (__fastcall **)(PPIWin32VtcLayoutOperation *, _DWORD *))(*(_QWORD *)a1 + 152LL))(a1, v27);
    v7 = v27[2] - v27[0];
    v24[0] = v27[0];
    v24[1] = v27[1];
    v26 = v27[3];
    if ( a2 == 1 && v5 == 1 )
      v25 = v7 - PPIWin32VtcLayoutOperation::_GetVtcAppPanelWidth(a1);
    else
      v25 = 0;
    v13 = 0;
    v15 = 0LL;
    v8 = *(_QWORD *)a1;
    *((_QWORD *)&v16 + 1) = &v15;
    *(_QWORD *)&v17 = &v13;
    *((_QWORD *)&v17 + 1) = v24;
    *(_QWORD *)&v16 = a1;
    v19 = off_1806639F0;
    v18 = v7 | 0x400000000LL;
    v20 = v16;
    v23 = &v19;
    v21 = v17;
    v22 = v18;
    v9 = (*(__int64 (__fastcall **)(PPIWin32VtcLayoutOperation *, _QWORD, __int64 (__fastcall ***)()))(v8 + 176))(
           a1,
           *((_QWORD *)a1 + 8),
           &v19);
    v11 = v9;
    if ( v9 >= 0 )
    {
      v12 = a2 == 1;
      WindowForView = ApplicationViewHelpers::GetWindowForView(
                        (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v15,
                        v10);
      TabletModeTelemetry::PPIWin32VtcSideBarLayoutItemsReflowed<unsigned int,unsigned int &,bool>(
        &WindowForView,
        &v13,
        &v12);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2C6,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
        (const char *)(unsigned int)v9);
      return v11;
    }
  }
  else
  {
    TabletModeTelemetry::PPIWin32VtcSideBarError<unsigned short const (&)[49]>(v4);
    return 2147647529LL;
  }
}
