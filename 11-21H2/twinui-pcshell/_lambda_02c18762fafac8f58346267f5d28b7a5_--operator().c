/*
 * XREFs of _lambda_02c18762fafac8f58346267f5d28b7a5_::operator() @ 0x180410E28
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_02c18762fafac8f58346267f5d28b7a5___::Run @ 0x180416600 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_02c18762fafac8f58346267f5d28b7a5___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x1800A3CA4 (-Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$try_query@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1803FF39C (--$try_query@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_ptr_.c)
 *     ?CachePersistingStateName@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804141EC (-CachePersistingStateName@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel.c)
 *     ?SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x18041A898 (-SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall lambda_02c18762fafac8f58346267f5d28b7a5_::operator()(_QWORD *a1)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // eax
  HWND v5; // rdi
  __int64 v6; // r8
  __int64 *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // eax
  int v16; // eax
  const char *v17; // r9
  __int64 result; // rax
  void (__fastcall ***v19)(_QWORD, GUID *, _QWORD *); // [rsp+20h] [rbp-38h] BYREF
  __int64 v20[6]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v22; // [rsp+60h] [rbp+8h] BYREF
  int v23; // [rsp+68h] [rbp+10h] BYREF
  __int64 v24; // [rsp+70h] [rbp+18h] BYREF
  __int64 v25; // [rsp+78h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(*a1 + 104LL);
  try
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 80LL))(v2);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x81,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v3,
        (int)v19);
    v20[1] = 0LL;
    v4 = Windows::Internal::String::Initialize((HSTRING *)(*a1 + 304LL), (HSTRING *)a1[1]);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x84,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v4,
        (int)v19);
    if ( *(_QWORD *)(*a1 + 120LL) )
    {
      v5 = (HWND)*(int *)a1[2];
      EnumPropsExW(v5, (PROPENUMPROCEXW)LightweightPropertySet::s_PropEnumCallback, *a1 + 192LL);
      if ( IsWindowVisible(v5) )
      {
        v6 = *a1;
        *(_DWORD *)(v6 + 288) = *(_DWORD *)a1[2];
        UwpWindowReadyState::SetWindow(v6 + 352, v5, *(unsigned int *)a1[3]);
      }
    }
    UwpWindowWrapperBase::CachePersistingStateName(*a1, *(unsigned int *)a1[2]);
    if ( *(_DWORD *)a1[3] == 1 )
    {
      v7 = *(__int64 **)(*a1 + 120LL);
      if ( v7 )
      {
        v19 = 0LL;
        v8 = *v7;
        v19 = 0LL;
        v9 = (*(__int64 (__fastcall **)(__int64 *, void (__fastcall ****)(_QWORD, GUID *, _QWORD *)))(v8 + 48))(
               v7,
               &v19);
        if ( v9 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x9C,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
            (const char *)(unsigned int)v9,
            (int)v19);
        wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IAppModel,wil::err_exception_policy>::try_query<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel>(
          &v19,
          v20);
        if ( v20[0] )
        {
          v25 = 0LL;
          v10 = *(_QWORD *)v20[0];
          v25 = 0LL;
          v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v10 + 112))(v20[0], &v25);
          if ( v11 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0xA3,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
              (const char *)(unsigned int)v11,
              (int)v19);
          v12 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v25 + 48LL))(v25, &v22);
          if ( v12 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0xA6,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
              (const char *)(unsigned int)v12,
              (int)v19);
          if ( v22 )
          {
            v13 = *a1;
            *(_DWORD *)(v13 + 464) = v22;
            *(_BYTE *)(v13 + 468) = 1;
          }
          v24 = 0LL;
          v14 = *(_QWORD *)v20[0];
          v24 = 0LL;
          v15 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v14 + 528))(v20[0], &v24);
          if ( v15 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0xAF,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
              (const char *)(unsigned int)v15,
              (int)v19);
          v16 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v24 + 216LL))(v24, &v23);
          if ( v16 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0xB2,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
              (const char *)(unsigned int)v16,
              (int)v19);
          if ( v23 )
            *(_WORD *)(*a1 + 469LL) = 1;
          wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v24);
          wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v25);
        }
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(v20);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v19);
      }
    }
    WindowsDeleteString(0LL);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xBB,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v17);
  }
  return result;
}
