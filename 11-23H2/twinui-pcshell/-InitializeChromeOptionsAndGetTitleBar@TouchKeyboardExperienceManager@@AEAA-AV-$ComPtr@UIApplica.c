/*
 * XREFs of ?InitializeChromeOptionsAndGetTitleBar@TouchKeyboardExperienceManager@@AEAA?AV?$ComPtr@UIApplicationFrameTitleBar@@@WRL@Microsoft@@PEAUIApplicationFrameWrapper@@@Z @ 0x18051193C
 * Callers:
 *     ?InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x1802DB81A (-InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801CF85C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall TouchKeyboardExperienceManager::InitializeChromeOptionsAndGetTitleBar(
        __int64 a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 (__fastcall *v5)(__int64, __int64 *); // rbx
  int v6; // eax
  int v7; // eax
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int64 *); // rdi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v19; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v20; // [rsp+48h] [rbp+10h]

  v20 = a2;
  v19 = 0LL;
  v5 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a3 + 32LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v19);
  v6 = v5(a3, &v19);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x140E,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v6,
      0);
  *a2 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v19 + 112LL))(v19, 255LL, 24LL);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1411,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v7,
      1);
  v8 = v19;
  v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 144LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a2);
  v10 = v9(v8, a2);
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1412,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v10,
      1);
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)*a2 + 48LL))(*a2, 1LL, 1LL);
  if ( v11 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1413,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v11,
      1);
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)*a2 + 88LL))(*a2, 1023LL, 0LL);
  if ( v12 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1414,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v12,
      1);
  v13 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*a2 + 56LL))(*a2, 0LL);
  if ( v13 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1417,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v13,
      1);
  v14 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)*a2 + 104LL))(*a2, 1LL);
  if ( v14 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x141A,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v14,
      1);
  v15 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*a2 + 32LL))(*a2, 0LL);
  if ( v15 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x141B,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v15,
      1);
  v16 = (*(__int64 (__fastcall **)(__int64, const WCHAR *))(*(_QWORD *)*a2 + 24LL))(*a2, &LocaleName);
  if ( v16 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x141C,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v16,
      1);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v19);
  return a2;
}
