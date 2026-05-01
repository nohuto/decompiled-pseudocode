/*
 * XREFs of ?_QueryInsertAppToLayout@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@W4APP_LAYOUT_INSERT_LOCATION@@@Z @ 0x18051703C
 * Callers:
 *     ?InsertApp@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x180515430 (-InsertApp@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z.c)
 *     ?SwapVTCPanel@PPIWin32VtcLayoutOperation@@UEAAJXZ @ 0x180515C30 (-SwapVTCPanel@PPIWin32VtcLayoutOperation@@UEAAJXZ.c)
 * Callees:
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FindAppOnLayoutByActivationTime@PPIWin32VtcLayoutOperation@@AEAAJW4ActivationTime@1@PEAPEAUIApplicationView@@W4LayoutType@1@@Z @ 0x1805164B0 (-_FindAppOnLayoutByActivationTime@PPIWin32VtcLayoutOperation@@AEAAJW4ActivationTime@1@PEAPEAUIAp.c)
 *     ?_IsViewMeetingWindow@PPIWin32VtcLayoutOperation@@AEAA_NPEAUIApplicationView@@@Z @ 0x180516A00 (-_IsViewMeetingWindow@PPIWin32VtcLayoutOperation@@AEAA_NPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PPIWin32VtcLayoutOperation::_QueryInsertAppToLayout(__int64 *a1, __int64 a2, unsigned int a3)
{
  char v6; // r14
  int v7; // ebx
  __int64 v8; // rdx
  unsigned int v10; // eax
  __int64 v11; // rbx
  __int64 *AddressOf; // rax
  __int64 v13; // rax
  int AppOnLayoutByActivationTime; // eax
  __int64 v15; // rdx
  PPIWin32VtcLayoutOperation *v16; // rcx
  __int64 *v17; // rax
  struct IApplicationView *v18; // rbx
  __int64 (__fastcall *v19)(struct IApplicationView *, GUID *, __int64 *); // rdi
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22[2]; // [rsp+30h] [rbp-29h] BYREF
  HWND hWnd[2]; // [rsp+40h] [rbp-19h] BYREF
  __int64 (__fastcall **v24)(); // [rsp+50h] [rbp-9h] BYREF
  __int128 v25; // [rsp+58h] [rbp-1h]
  __int64 (__fastcall ***v26)(); // [rsp+88h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  __int64 v28; // [rsp+C0h] [rbp+67h] BYREF
  struct IApplicationView *v29; // [rsp+D8h] [rbp+7Fh] BYREF

  if ( (*(unsigned int (__fastcall **)(__int64 *))(*a1 + 56))(a1) )
    return 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*a1 + 168))(a1, a2);
  if ( !v6 && (*(int (__fastcall **)(__int64 *, _QWORD, __int64 *))(*a1 + 64))(a1, 0LL, &v28) >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, __int64))(*a1 + 72))(a1, 0LL, a2, 1LL);
    if ( v7 < 0 )
    {
      v8 = 458LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
        (const char *)(unsigned int)v7);
      return (unsigned int)v7;
    }
    return 0LL;
  }
  v10 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 80))(a1);
  v11 = *a1;
  if ( v10 > 1 )
  {
    v29 = 0LL;
    v22[0] = 0LL;
    AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(v22);
    if ( (*(int (__fastcall **)(__int64 *, __int64 *, _QWORD))(v11 + 160))(a1, AddressOf, 0LL) < 0 )
    {
      if ( (*(unsigned int (__fastcall **)(__int64 *, __int64))(*a1 + 88))(a1, 4LL) == 1 )
      {
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 120))(a1, 4LL);
      }
      else
      {
        v17 = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)&v29);
        AppOnLayoutByActivationTime = PPIWin32VtcLayoutOperation::_FindAppOnLayoutByActivationTime(a1, 1, v17, 0);
        v7 = AppOnLayoutByActivationTime;
        if ( AppOnLayoutByActivationTime < 0 )
        {
          v15 = 519LL;
          goto LABEL_29;
        }
        AppOnLayoutByActivationTime = (*(__int64 (__fastcall **)(__int64 *, struct IApplicationView *))(*a1 + 104))(
                                        a1,
                                        v29);
        v7 = AppOnLayoutByActivationTime;
        if ( AppOnLayoutByActivationTime < 0 )
        {
          v15 = 520LL;
          goto LABEL_29;
        }
      }
      AppOnLayoutByActivationTime = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD))(*a1 + 96))(
                                      a1,
                                      a2,
                                      a3,
                                      v6 != 0 ? 4 : 1);
      v7 = AppOnLayoutByActivationTime;
      if ( AppOnLayoutByActivationTime < 0 )
      {
        v15 = 523LL;
        goto LABEL_29;
      }
      if ( v6 )
        (*(void (__fastcall **)(__int64 *))(*a1 + 208))(a1);
    }
    else
    {
      if ( v6 )
      {
        v7 = -2147418113;
LABEL_44:
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v22);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v29);
        return (unsigned int)v7;
      }
      v13 = *a1;
      hWnd[0] = (HWND)v22;
      hWnd[1] = (HWND)&v29;
      v24 = off_180663A50;
      v25 = *(_OWORD *)hWnd;
      v26 = &v24;
      AppOnLayoutByActivationTime = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 (__fastcall ***)()))(v13 + 176))(
                                      a1,
                                      a1[8],
                                      &v24);
      v7 = AppOnLayoutByActivationTime;
      if ( AppOnLayoutByActivationTime < 0 )
      {
        v15 = 505LL;
LABEL_29:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
          (const char *)(unsigned int)AppOnLayoutByActivationTime);
        goto LABEL_44;
      }
      AppOnLayoutByActivationTime = (*(__int64 (__fastcall **)(__int64 *, struct IApplicationView *, __int64, __int64))(*a1 + 72))(
                                      a1,
                                      v29,
                                      a2,
                                      1LL);
      v7 = AppOnLayoutByActivationTime;
      if ( AppOnLayoutByActivationTime < 0 )
      {
        v15 = 507LL;
        goto LABEL_29;
      }
    }
    if ( PPIWin32VtcLayoutOperation::_IsViewMeetingWindow(
           v16,
           (__int64 (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))v29) )
    {
      v28 = 0LL;
      v18 = v29;
      v19 = **(__int64 (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))v29;
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v28);
      v20 = v19(v18, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &v28);
      v7 = v20;
      if ( v20 < 0 )
      {
        v21 = 537LL;
LABEL_41:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v21,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
          (const char *)(unsigned int)v20);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v28);
        goto LABEL_44;
      }
      hWnd[0] = 0LL;
      v20 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v28 + 24LL))(v28, hWnd);
      v7 = v20;
      if ( v20 < 0 )
      {
        v21 = 540LL;
        goto LABEL_41;
      }
      PostMessageW(hWnd[0], 0x112u, 0xF020uLL, 0LL);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v28);
    }
    v7 = 0;
    goto LABEL_44;
  }
  if ( v6 )
  {
    if ( (*(int (__fastcall **)(__int64 *, _QWORD, _QWORD))(v11 + 160))(a1, 0LL, 0LL) >= 0 )
    {
      v7 = -2147418113;
      v8 = 468LL;
      goto LABEL_6;
    }
    v7 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, __int64))(*a1 + 96))(a1, a2, a3, 4LL);
    if ( v7 < 0 )
    {
      v8 = 469LL;
      goto LABEL_6;
    }
    (*(void (__fastcall **)(__int64 *))(*a1 + 208))(a1);
  }
  else
  {
    (*(void (__fastcall **)(__int64 *, __int64))(v11 + 120))(a1, 2LL);
    v7 = (*(__int64 (__fastcall **)(__int64 *, __int64, bool, __int64))(*a1 + 96))(a1, a2, a3 != 1, 1LL);
    if ( v7 < 0 )
    {
      v8 = 476LL;
      goto LABEL_6;
    }
  }
  return 0LL;
}
