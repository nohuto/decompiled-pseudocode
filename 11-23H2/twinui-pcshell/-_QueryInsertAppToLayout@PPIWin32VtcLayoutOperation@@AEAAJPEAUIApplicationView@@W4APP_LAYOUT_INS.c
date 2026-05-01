/*
 * XREFs of ?_QueryInsertAppToLayout@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@W4APP_LAYOUT_INSERT_LOCATION@@@Z @ 0x1805CF740
 * Callers:
 *     ?InsertApp@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x1805CDAE0 (-InsertApp@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z.c)
 *     ?SwapVTCPanel@PPIWin32VtcLayoutOperation@@UEAAJXZ @ 0x1805CE290 (-SwapVTCPanel@PPIWin32VtcLayoutOperation@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FindAppOnLayoutByActivationTime@PPIWin32VtcLayoutOperation@@AEAAJW4ActivationTime@1@PEAPEAUIApplicationView@@W4LayoutType@1@@Z @ 0x1805CEB40 (-_FindAppOnLayoutByActivationTime@PPIWin32VtcLayoutOperation@@AEAAJW4ActivationTime@1@PEAPEAUIAp.c)
 *     ?_IsViewMeetingWindow@PPIWin32VtcLayoutOperation@@AEAA_NPEAUIApplicationView@@@Z @ 0x1805CF0D0 (-_IsViewMeetingWindow@PPIWin32VtcLayoutOperation@@AEAA_NPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PPIWin32VtcLayoutOperation::_QueryInsertAppToLayout(__int64 *a1, __int64 a2, unsigned int a3)
{
  char v6; // r14
  int v7; // ebx
  __int64 v8; // rdx
  unsigned int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rax
  int AppOnLayoutByActivationTime; // eax
  __int64 v14; // rdx
  struct IApplicationView *v15; // rbx
  __int64 (__fastcall *v16)(struct IApplicationView *, GUID *, __int64 *); // rdi
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19[2]; // [rsp+30h] [rbp-29h] BYREF
  HWND hWnd[2]; // [rsp+40h] [rbp-19h] BYREF
  __int64 (__fastcall **v21)(); // [rsp+50h] [rbp-9h] BYREF
  __int128 v22; // [rsp+58h] [rbp-1h]
  __int64 (__fastcall ***v23)(); // [rsp+88h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  __int64 v25; // [rsp+C0h] [rbp+67h] BYREF
  struct IApplicationView *v26; // [rsp+D8h] [rbp+7Fh] BYREF

  if ( (*(unsigned int (__fastcall **)(__int64 *))(*a1 + 56))(a1) )
    return 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*a1 + 168))(a1, a2);
  if ( !v6 && (*(int (__fastcall **)(__int64 *, _QWORD, __int64 *))(*a1 + 64))(a1, 0LL, &v25) >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, __int64))(*a1 + 72))(a1, 0LL, a2, 1LL);
    if ( v7 < 0 )
    {
      v8 = 457LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (int)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
        (const char *)(unsigned int)v7);
      return (unsigned int)v7;
    }
    return 0LL;
  }
  v10 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 80))(a1);
  v11 = *a1;
  if ( v10 > 1 )
  {
    v26 = 0LL;
    v19[0] = 0LL;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v19);
    if ( (*(int (__fastcall **)(__int64 *, __int64 *, _QWORD))(v11 + 160))(a1, v19, 0LL) < 0 )
    {
      if ( (*(unsigned int (__fastcall **)(__int64 *, __int64))(*a1 + 88))(a1, 4LL) == 1 )
      {
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 120))(a1, 4LL);
      }
      else
      {
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v26);
        AppOnLayoutByActivationTime = PPIWin32VtcLayoutOperation::_FindAppOnLayoutByActivationTime(
                                        a1,
                                        1,
                                        (__int64 *)&v26,
                                        0);
        v7 = AppOnLayoutByActivationTime;
        if ( AppOnLayoutByActivationTime < 0 )
        {
          v14 = 518LL;
          goto LABEL_29;
        }
        AppOnLayoutByActivationTime = (*(__int64 (__fastcall **)(__int64 *, struct IApplicationView *))(*a1 + 104))(
                                        a1,
                                        v26);
        v7 = AppOnLayoutByActivationTime;
        if ( AppOnLayoutByActivationTime < 0 )
        {
          v14 = 519LL;
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
        v14 = 522LL;
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
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v19);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v26);
        return (unsigned int)v7;
      }
      v12 = *a1;
      hWnd[0] = (HWND)v19;
      hWnd[1] = (HWND)&v26;
      v21 = off_1807EBA38;
      v22 = *(_OWORD *)hWnd;
      v23 = &v21;
      AppOnLayoutByActivationTime = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 (__fastcall ***)()))(v12 + 176))(
                                      a1,
                                      a1[8],
                                      &v21);
      v7 = AppOnLayoutByActivationTime;
      if ( AppOnLayoutByActivationTime < 0 )
      {
        v14 = 504LL;
LABEL_29:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (int)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
          (const char *)(unsigned int)AppOnLayoutByActivationTime);
        goto LABEL_44;
      }
      AppOnLayoutByActivationTime = (*(__int64 (__fastcall **)(__int64 *, struct IApplicationView *, __int64, __int64))(*a1 + 72))(
                                      a1,
                                      v26,
                                      a2,
                                      1LL);
      v7 = AppOnLayoutByActivationTime;
      if ( AppOnLayoutByActivationTime < 0 )
      {
        v14 = 506LL;
        goto LABEL_29;
      }
    }
    if ( PPIWin32VtcLayoutOperation::_IsViewMeetingWindow(
           (PPIWin32VtcLayoutOperation *)a1,
           (__int64 (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))v26) )
    {
      v25 = 0LL;
      v15 = v26;
      v16 = **(__int64 (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))v26;
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v25);
      v17 = v16(v15, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &v25);
      v7 = v17;
      if ( v17 < 0 )
      {
        v18 = 536LL;
LABEL_41:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v18,
          (int)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
          (const char *)(unsigned int)v17);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v25);
        goto LABEL_44;
      }
      hWnd[0] = 0LL;
      v17 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v25 + 24LL))(v25, hWnd);
      v7 = v17;
      if ( v17 < 0 )
      {
        v18 = 539LL;
        goto LABEL_41;
      }
      PostMessageW(hWnd[0], 0x112u, 0xF020uLL, 0LL);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v25);
    }
    v7 = 0;
    goto LABEL_44;
  }
  if ( v6 )
  {
    if ( (*(int (__fastcall **)(__int64 *, _QWORD, _QWORD))(v11 + 160))(a1, 0LL, 0LL) >= 0 )
    {
      v7 = -2147418113;
      v8 = 467LL;
      goto LABEL_6;
    }
    v7 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, __int64))(*a1 + 96))(a1, a2, a3, 4LL);
    if ( v7 < 0 )
    {
      v8 = 468LL;
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
      v8 = 475LL;
      goto LABEL_6;
    }
  }
  return 0LL;
}
