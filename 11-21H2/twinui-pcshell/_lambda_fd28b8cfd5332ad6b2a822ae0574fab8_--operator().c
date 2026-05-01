/*
 * XREFs of _lambda_fd28b8cfd5332ad6b2a822ae0574fab8_::operator() @ 0x180138628
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_fd28b8cfd5332ad6b2a822ae0574fab8___::Run @ 0x180138600 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_fd28b8cfd5332ad6b2a822ae0574fab8___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801A8EC8 (--$query@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_ptr_t@UI.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$try_query@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1803FF39C (--$try_query@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_ptr_.c)
 *     ?SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x18040DFA4 (-SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall lambda_fd28b8cfd5332ad6b2a822ae0574fab8_::operator()(__int64 *a1)
{
  int v2; // eax
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, HSTRING *); // rbx
  int v5; // eax
  __int64 v6; // rbx
  HRESULT v7; // edi
  HSTRING v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, HSTRING *); // rdi
  int v12; // eax
  __int64 v13; // rbx
  HRESULT v14; // edi
  HSTRING v15; // rcx
  HWND v17; // rbx
  __int64 v18; // r8
  __int64 v19; // rax
  int v20; // eax
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // eax
  int v25; // eax
  HSTRING string; // [rsp+20h] [rbp-28h] BYREF
  __int64 v27[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HSTRING newString; // [rsp+50h] [rbp+8h] BYREF
  __int64 v30; // [rsp+58h] [rbp+10h] BYREF
  HSTRING v31; // [rsp+60h] [rbp+18h] BYREF
  __int64 v32; // [rsp+68h] [rbp+20h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*a1 + 104) + 112LL))(
         *(_QWORD *)(*a1 + 104),
         *a1 + 112);
  if ( v2 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x81,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v2,
      (int)string);
  string = 0LL;
  v3 = *(_QWORD *)(*a1 + 320);
  v4 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v3 + 48LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v5 = v4(v3, &string);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x84,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v5,
      (int)string);
  v6 = *a1;
  v7 = WindowsDuplicateString(string, &newString);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x85,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v7,
      (int)string);
  v8 = *(HSTRING *)(v6 + 304);
  *(_QWORD *)(v6 + 304) = newString;
  WindowsDeleteString(v8);
  if ( *(_QWORD *)(*a1 + 128) )
  {
    v17 = (HWND)*(int *)a1[1];
    EnumPropsExW(v17, (PROPENUMPROCEXW)LightweightPropertySet::s_PropEnumCallback, *a1 + 200);
    if ( IsWindowVisible(v17) )
    {
      v18 = *a1;
      *(_DWORD *)(v18 + 296) = *(_DWORD *)a1[1];
      WindowReadyState::SetWindow(v18 + 360, v17, *(unsigned int *)a1[2]);
    }
  }
  v9 = *a1;
  if ( *(_DWORD *)(*a1 + 328) == 1 )
  {
    newString = 0LL;
    wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IAppModel,wil::err_exception_policy>::query<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel>(
      v9 + 320,
      &v30);
    v10 = v30;
    v11 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v30 + 360LL);
    WindowsDeleteString(newString);
    newString = 0LL;
    v12 = v11(v10, &newString);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x9C,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v12,
        (int)string);
    v13 = *a1;
    v14 = WindowsDuplicateString(newString, &v31);
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x9E,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v14,
        (int)string);
    v15 = *(HSTRING *)(v13 + 560);
    *(_QWORD *)(v13 + 560) = v31;
    WindowsDeleteString(v15);
    if ( v30 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    WindowsDeleteString(newString);
  }
  if ( *(_DWORD *)a1[2] == 1 )
  {
    wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IAppModel,wil::err_exception_policy>::try_query<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel>(
      *a1 + 320,
      v27);
    if ( v27[0] )
    {
      v32 = 0LL;
      v19 = *(_QWORD *)v27[0];
      v32 = 0LL;
      v20 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v19 + 112))(v27[0], &v32);
      if ( v20 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xA8,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v20,
          (int)string);
      v21 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v32 + 48LL))(v32, &newString);
      if ( v21 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xAB,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v21,
          (int)string);
      if ( (_DWORD)newString )
      {
        v22 = *a1;
        *(_DWORD *)(v22 + 472) = (_DWORD)newString;
        *(_BYTE *)(v22 + 476) = 1;
      }
      v31 = 0LL;
      v23 = *(_QWORD *)v27[0];
      v31 = 0LL;
      v24 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(v23 + 528))(v27[0], &v31);
      if ( v24 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xB4,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v24,
          (int)string);
      v25 = (*(__int64 (__fastcall **)(HSTRING, __int64 *))(*(_QWORD *)v31 + 216LL))(v31, &v30);
      if ( v25 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xB7,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v25,
          (int)string);
      if ( (_DWORD)v30 )
        *(_WORD *)(*a1 + 477) = 1;
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v31);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v32);
    }
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(v27);
  }
  WindowsDeleteString(string);
  return 0LL;
}
