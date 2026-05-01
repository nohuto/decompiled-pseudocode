/*
 * XREFs of ?v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z @ 0x1800ECBD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$CloakTypeChange@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAW4APPLICATION_VIEW_CLOAK_TYPE@@@ApplicationViewTraceLogging@ApplicationViewManagement@@SAXAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAW4APPLICATION_VIEW_CLOAK_TYPE@@@Z @ 0x18003EA68 (--$CloakTypeChange@AEAV-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@.c)
 *     ?GetViewId@CWin32ApplicationView@@UEAAJPEAPEAG@Z @ 0x18008C8B0 (-GetViewId@CWin32ApplicationView@@UEAAJPEAPEAG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_ee3e0a0da20eb1cf2fabc213f82c029b___ @ 0x1800ECE58 (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_ee3e0a0da20eb1cf2fabc.c)
 *     ?ValidateGatheredWindows@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJPEAUHWND__@@@Z @ 0x1800ED7DC (-ValidateGatheredWindows@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationVi.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?RemoveAll@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAXXZ @ 0x180167DF4 (-RemoveAll@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CSimpleA.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1801801A4 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_807778e6719fb664354e7e91ff2b2b86___ @ 0x180311A90 (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_807778e6719fb664354e7.c)
 *     ?GatherWindows@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJPEAUHWND__@@@Z @ 0x180312850 (-GatherWindows@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManageme.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWin32ApplicationView::v_SetCloak(__int64 a1, int a2, int a3)
{
  RTL_SRWLOCK *v6; // r12
  int v7; // edi
  unsigned int v8; // esi
  int v9; // r14d
  unsigned __int16 *v10; // rcx
  _QWORD *v11; // r12
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, __int64, bool, __int64); // rdi
  __int64 v15; // rax
  int v16; // eax
  unsigned int v17; // ebx
  __int64 v18; // rax
  HWND v19; // rdi
  _QWORD *v20; // rbx
  __int64 v21; // rdi
  HWND v23; // rax
  int v24; // ebx
  int v25; // [rsp+20h] [rbp-40h]
  _QWORD v26[2]; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int16 *v27; // [rsp+40h] [rbp-20h] BYREF
  __int64 v28; // [rsp+48h] [rbp-18h]
  __int64 v29; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  RTL_SRWLOCK *v31; // [rsp+A0h] [rbp+40h] BYREF
  int v32; // [rsp+A8h] [rbp+48h]

  v32 = a2;
  v6 = (RTL_SRWLOCK *)(a1 + 48);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 48));
  v31 = v6;
  v7 = *(_DWORD *)(a1 + 264);
  v8 = 0;
  if ( a3 )
    v9 = v32 | v7;
  else
    v9 = v7 & ~a2;
  *(_DWORD *)(a1 + 264) = v9;
  v10 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  if ( v7 != v9 )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v27);
    v28 = -1LL;
    v29 = -1LL;
    if ( (int)CWin32ApplicationView::GetViewId((CWin32ApplicationView *)(a1 + 16), &v27) >= 0 )
    {
      v26[0] = &v27;
      v26[1] = a1;
      GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_807778e6719fb664354e7e91ff2b2b86___(v26);
      ApplicationViewManagement::ApplicationViewTraceLogging::CloakTypeChange<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>> &,enum APPLICATION_VIEW_CLOAK_TYPE &>(
        (__int64 *)&v27,
        (_DWORD *)(a1 + 264));
    }
    v10 = v27;
  }
  if ( v10 )
  {
    CoTaskMemFree(v10);
    v27 = 0LL;
  }
  v28 = 0LL;
  v29 = 0LL;
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  if ( (v9 != 0) == (v7 != 0) && v9 )
    return 0LL;
  v31 = 0LL;
  GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_ee3e0a0da20eb1cf2fabc213f82c029b___(&v31);
  if ( v31 )
  {
    v11 = (_QWORD *)(a1 + 232);
    v12 = (*(__int64 (**)(void))(**(_QWORD **)(a1 + 216) + 24LL))();
    if ( v9 )
      ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::GatherWindows(
        a1 + 232,
        v12);
    else
      ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::ValidateGatheredWindows(
        a1 + 232,
        v12);
    v13 = (__int64)v31;
    v14 = (__int64 (__fastcall *)(__int64, __int64, bool, __int64))*((_QWORD *)v31->Ptr + 3);
    v15 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 216) + 24LL))(*(_QWORD *)(a1 + 216));
    v16 = v14(v13, v15, v9 != 0, 1LL);
    v17 = v16;
    if ( v16 == -2147024809 )
    {
      if ( !v9 )
      {
        v23 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 216) + 24LL))(*(_QWORD *)(a1 + 216));
        if ( GetWindow(v23, 4u) )
        {
          if ( *(_QWORD *)(a1 + 240) )
            wil::details::in1diag3::Log_Hr(
              retaddr,
              (void *)0x144,
              (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
              (const char *)0x80070057LL,
              v25);
          goto LABEL_35;
        }
      }
    }
    else
    {
      if ( v16 >= 0 )
      {
        v18 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 216) + 24LL))(*(_QWORD *)(a1 + 216));
        v19 = (HWND)GhostWindowFromHungWindow(v18);
        if ( v19 )
        {
          v24 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, HWND, bool, _QWORD))v31->Ptr + 3))(v31, v19, v9 != 0, 0LL);
          if ( (v24 != -2147024809 || v9 || !GetWindow(v19, 4u)) && v24 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x15F,
              (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
              (const char *)(unsigned int)v24);
        }
        v20 = (_QWORD *)*v11;
        v21 = *v11 + 8LL * *(_QWORD *)(a1 + 240);
        while ( v20 != (_QWORD *)v21 )
          (*((void (__fastcall **)(RTL_SRWLOCK *, _QWORD, bool, _QWORD))v31->Ptr + 3))(v31, *v20++, v9 != 0, 0LL);
        if ( !v9 )
          CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::RemoveAll(a1 + 232);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v31);
        return 0LL;
      }
      if ( v16 == -2147024890 )
      {
        v8 = -2147024890;
        goto LABEL_35;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14A,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)v17);
    v8 = v17;
    goto LABEL_35;
  }
  v8 = -2147024884;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x11C,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
    (const char *)0x8007000CLL);
LABEL_35:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v31);
  return v8;
}
