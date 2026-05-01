/*
 * XREFs of ?v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z @ 0x1800E04B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$CloakTypeChange@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAW4APPLICATION_VIEW_CLOAK_TYPE@@@ApplicationViewTraceLogging@ApplicationViewManagement@@SAXAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAW4APPLICATION_VIEW_CLOAK_TYPE@@@Z @ 0x18006F580 (--$CloakTypeChange@AEAV-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@.c)
 *     ?GetViewId@CWin32ApplicationView@@UEAAJPEAPEAG@Z @ 0x1800C51A0 (-GetViewId@CWin32ApplicationView@@UEAAJPEAPEAG@Z.c)
 *     ?ValidateGatheredWindows@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJPEAUHWND__@@@Z @ 0x1800E0734 (-ValidateGatheredWindows@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationVi.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800E0870 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Deta.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802CF31A (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_807778e6719fb664354e7e91ff2b2b86___ @ 0x1803CD2DC (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_807778e6719fb664354e7.c)
 *     ?GatherWindows@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJPEAUHWND__@@@Z @ 0x1803CE04C (-GatherWindows@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManageme.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CWin32ApplicationView::v_SetCloak(__int64 a1, int a2, int a3)
{
  RTL_SRWLOCK *v6; // r12
  int v7; // edi
  unsigned int v8; // esi
  int v9; // r14d
  unsigned __int16 *v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdi
  volatile int *v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 (__fastcall *v17)(__int64, __int64, bool, __int64); // rdi
  __int64 v18; // rax
  int v19; // eax
  unsigned int v20; // edi
  __int64 v21; // rax
  HWND v22; // r13
  _QWORD *v23; // rdi
  __int64 v24; // r13
  HWND v26; // rax
  int v27; // edi
  int v28; // [rsp+20h] [rbp-40h]
  _QWORD v29[2]; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int16 *v30; // [rsp+40h] [rbp-20h] BYREF
  __int64 v31; // [rsp+48h] [rbp-18h]
  __int64 v32; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  __int64 v34; // [rsp+90h] [rbp+30h] BYREF

  v6 = (RTL_SRWLOCK *)(a1 + 48);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 48));
  v34 = (__int64)v6;
  v7 = *(_DWORD *)(a1 + 264);
  v8 = 0;
  if ( a3 )
    v9 = a2 | v7;
  else
    v9 = ~a2 & v7;
  *(_DWORD *)(a1 + 264) = v9;
  v10 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  if ( v7 != v9 )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v30);
    v31 = -1LL;
    v32 = -1LL;
    if ( (int)CWin32ApplicationView::GetViewId((CWin32ApplicationView *)(a1 + 16), &v30) >= 0 )
    {
      v29[0] = &v30;
      v29[1] = a1;
      GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_807778e6719fb664354e7e91ff2b2b86___(v29);
      ApplicationViewManagement::ApplicationViewTraceLogging::CloakTypeChange<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>> &,enum APPLICATION_VIEW_CLOAK_TYPE &>(
        (union _RTL_RUN_ONCE **)&v30,
        (int *)(a1 + 264));
    }
    v10 = v30;
  }
  if ( v10 )
  {
    CoTaskMemFree(v10);
    v30 = 0LL;
  }
  v31 = 0LL;
  v32 = 0LL;
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  if ( (v9 != 0) == (v7 != 0) && v9 )
    return 0LL;
  v11 = 0LL;
  v34 = 0LL;
  v12 = 0LL;
  AcquireSRWLockShared(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
  if ( GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals )
  {
    Microsoft::WRL::Details::SafeUnknownIncrementReference(
      (Microsoft::WRL::Details *)(GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals + 36),
      v13);
    v12 = v14;
  }
  ReleaseSRWLockShared(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
  if ( v12 )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(v12 + 48) + 744LL);
    if ( v11 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 8LL))(*(_QWORD *)(*(_QWORD *)(v12 + 48) + 744LL));
    v34 = v11;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase>::Release(v12);
  }
  if ( v11 )
  {
    v15 = a1 + 232;
    v16 = (*(__int64 (**)(void))(**(_QWORD **)(a1 + 216) + 24LL))();
    if ( v9 )
      ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::GatherWindows(
        a1 + 232,
        v16);
    else
      ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::ValidateGatheredWindows(
        a1 + 232,
        v16);
    v17 = *(__int64 (__fastcall **)(__int64, __int64, bool, __int64))(*(_QWORD *)v11 + 24LL);
    v18 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 216) + 24LL))(*(_QWORD *)(a1 + 216));
    v19 = v17(v11, v18, v9 != 0, 1LL);
    v20 = v19;
    if ( v19 == -2147024809 )
    {
      if ( !v9 )
      {
        v26 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 216) + 24LL))(*(_QWORD *)(a1 + 216));
        if ( GetWindow(v26, 4u) )
        {
          if ( *(_QWORD *)(a1 + 240) )
            wil::details::in1diag3::Log_Hr(
              retaddr,
              (void *)0x13F,
              (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
              (const char *)0x80070057LL,
              v28);
          goto LABEL_43;
        }
      }
    }
    else
    {
      if ( v19 >= 0 )
      {
        v21 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 216) + 24LL))(*(_QWORD *)(a1 + 216));
        v22 = (HWND)GhostWindowFromHungWindow(v21);
        if ( v22 )
        {
          v27 = (*(__int64 (__fastcall **)(__int64, HWND, bool, _QWORD))(*(_QWORD *)v11 + 24LL))(v11, v22, v9 != 0, 0LL);
          if ( (v27 != -2147024809 || v9 || !GetWindow(v22, 4u)) && v27 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x15A,
              (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
              (const char *)(unsigned int)v27,
              v28);
        }
        v23 = *(_QWORD **)v15;
        v24 = *(_QWORD *)v15 + 8LL * *(_QWORD *)(v15 + 8);
        while ( v23 != (_QWORD *)v24 )
          (*(void (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)v11 + 24LL))(v11, *v23++, v9 != 0, 0LL);
        if ( !v9 )
        {
          if ( *(_QWORD *)v15 )
          {
            CoTaskMemFree(*(LPVOID *)v15);
            *(_QWORD *)v15 = 0LL;
          }
          *(_QWORD *)(v15 + 8) = 0LL;
          *(_QWORD *)(v15 + 24) = 0LL;
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        return 0LL;
      }
      if ( v19 == -2147024890 )
      {
        v8 = -2147024890;
        goto LABEL_43;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x145,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)v20,
      v28);
    v8 = v20;
    goto LABEL_43;
  }
  v8 = -2147024884;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x117,
    (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
    (const char *)0x8007000CLL,
    v28);
LABEL_43:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v34);
  return v8;
}
