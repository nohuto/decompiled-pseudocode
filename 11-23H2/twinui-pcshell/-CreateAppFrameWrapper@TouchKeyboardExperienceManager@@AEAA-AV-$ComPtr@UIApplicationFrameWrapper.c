/*
 * XREFs of ?CreateAppFrameWrapper@TouchKeyboardExperienceManager@@AEAA?AV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@XZ @ 0x18050ED68
 * Callers:
 *     ?InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x1802DB81A (-InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801CF85C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentInputAppId@TouchKeyboardExperienceManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x18020A408 (-GetCurrentInputAppId@TouchKeyboardExperienceManager@@AEAA-AV-$basic_string@GU-$char_traits@G@st.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
HWND __fastcall TouchKeyboardExperienceManager::CreateAppFrameWrapper(struct _RTL_CRITICAL_SECTION *a1, HWND a2)
{
  HANDLE OwningThread; // rcx
  int v5; // eax
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, __int64 *); // rbx
  int v8; // eax
  int v9; // eax
  LONG WindowLongW; // eax
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rdx
  int v12; // eax
  int v13; // eax
  __int64 v15; // [rsp+20h] [rbp-50h] BYREF
  int v16; // [rsp+28h] [rbp-48h]
  HWND hWnd[2]; // [rsp+30h] [rbp-40h] BYREF
  struct _RTL_CRITICAL_SECTION v18; // [rsp+40h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  hWnd[1] = a2;
  *(_QWORD *)a2 = 0LL;
  v16 = 1;
  OwningThread = a1[11].OwningThread;
  if ( !OwningThread )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x13F0,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)0x80270257LL,
      v15);
  v5 = (*(__int64 (__fastcall **)(HANDLE))(*(_QWORD *)OwningThread + 24LL))(OwningThread);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x13F1,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v5,
      v15);
  v15 = 0LL;
  v6 = *(_QWORD *)a2;
  v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(**(_QWORD **)a2 + 32LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v15);
  v8 = v7(v6, &v15);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x13F4,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v8,
      v15);
  v9 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v15 + 24LL))(v15, hWnd);
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x13F7,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v9,
      v15);
  WindowLongW = GetWindowLongW(hWnd[0], -20);
  SetWindowLongW(hWnd[0], -20, WindowLongW | 0x8000000);
  TouchKeyboardExperienceManager::GetCurrentInputAppId(a1, &v18);
  if ( v18.OwningThread )
  {
    DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&v18;
    if ( v18.LockSemaphore >= (HANDLE)8 )
      DebugInfo = v18.DebugInfo;
    v12 = (*(__int64 (__fastcall **)(__int64, PRTL_CRITICAL_SECTION_DEBUG, _QWORD))(*(_QWORD *)v15 + 72LL))(
            v15,
            DebugInfo,
            0LL);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1402,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)a2 + 40LL))(*(_QWORD *)a2, 1LL);
  if ( v13 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1407,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v13,
      v15);
  std::wstring::_Tidy_deallocate((__int64)&v18);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v15);
  return a2;
}
