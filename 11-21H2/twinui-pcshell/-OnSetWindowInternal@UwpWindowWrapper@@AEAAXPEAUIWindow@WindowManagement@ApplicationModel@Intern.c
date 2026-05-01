/*
 * XREFs of ?OnSetWindowInternal@UwpWindowWrapper@@AEAAXPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180405E64
 * Callers:
 *     ??0UwpWindowWrapper@@QEAA@PEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@W4AppModelKind@WindowManagement@ApplicationModel@56@UUwpWindowContextId@3456@PEAUIWindow@9ApplicationModel@56@UWindowId@9ApplicationModel@56@PEBGW4WindowCreatedType@@@Z @ 0x1804051E4 (--0UwpWindowWrapper@@QEAA@PEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindow.c)
 *     ?v_OnWindowSet@UwpWindowWrapper@@EEAAXXZ @ 0x180406880 (-v_OnWindowSet@UwpWindowWrapper@@EEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801A8EC8 (--$query@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_ptr_t@UI.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FrameworkKindChanged@UwpWindowReadyState@@QEAAXW4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18041A66C (-FrameworkKindChanged@UwpWindowReadyState@@QEAAXW4AppModelFrameworkKind@WindowManagement@Applica.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall UwpWindowWrapper::OnSetWindowInternal(
        UwpWindowWrapper *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IWindow *a2)
{
  __int64 v3; // rax
  int v4; // eax
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  __int64 *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  int v13; // eax
  __int64 *v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  int v17; // eax
  __int64 v18; // rsi
  __int64 (__fastcall *v19)(__int64, char *); // rdi
  int v20; // eax
  __int64 v21; // [rsp+20h] [rbp-20h] BYREF
  __int64 v22; // [rsp+28h] [rbp-18h] BYREF
  __int64 (__fastcall ***v23)(_QWORD, GUID *, _QWORD *); // [rsp+30h] [rbp-10h] BYREF
  __int64 v24; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  int v26; // [rsp+78h] [rbp+38h] BYREF
  int v27; // [rsp+80h] [rbp+40h] BYREF
  int v28; // [rsp+88h] [rbp+48h] BYREF

  v3 = *(_QWORD *)a2;
  v23 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IWindow *, __int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *)))(v3 + 48))(
         a2,
         &v23);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1BB,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
      (const char *)(unsigned int)v4,
      v21);
  v5 = wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IAppModel,wil::err_exception_policy>::query<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel>(
         &v23,
         &v24);
  v6 = *v5;
  *v5 = 0LL;
  v7 = *((_QWORD *)this + 77);
  *((_QWORD *)this + 77) = v6;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v24);
  v8 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 77) + 80LL))(
         *((_QWORD *)this + 77),
         (char *)this + 464);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1BE,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
      (const char *)(unsigned int)v8,
      v21);
  v9 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 77) + 120LL))(*((_QWORD *)this + 77), &v26);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1C4,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
      (const char *)(unsigned int)v9,
      v21);
  if ( v26 != 6 )
    *((_DWORD *)this + 117) = v26;
  v22 = 0LL;
  v10 = (__int64 *)*((_QWORD *)this + 77);
  v11 = *v10;
  v22 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v11 + 528))(v10, &v22);
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1CB,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
      (const char *)(unsigned int)v12,
      v21);
  v13 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v22 + 216LL))(v22, &v27);
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1CE,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
      (const char *)(unsigned int)v13,
      v21);
  if ( v27 )
    *(_WORD *)((char *)this + 477) = 1;
  v21 = 0LL;
  v14 = (__int64 *)*((_QWORD *)this + 77);
  v15 = *v14;
  v21 = 0LL;
  v16 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v15 + 112))(v14, &v21);
  if ( v16 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1D6,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
      (const char *)(unsigned int)v16,
      v21);
  v17 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v21 + 48LL))(v21, &v28);
  if ( v17 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1D9,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
      (const char *)(unsigned int)v17,
      v21);
  if ( v28 )
  {
    *((_DWORD *)this + 118) = v28;
    *((_BYTE *)this + 476) = 1;
  }
  v18 = *((_QWORD *)this + 77);
  v19 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v18 + 360LL);
  WindowsDeleteString(*((HSTRING *)this + 70));
  *((_QWORD *)this + 70) = 0LL;
  v20 = v19(v18, (char *)this + 560);
  if ( v20 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1E0,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
      (const char *)(unsigned int)v20,
      v21);
  UwpWindowReadyState::FrameworkKindChanged((char *)this + 360, *((unsigned int *)this + 117));
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v21);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v22);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v23);
}
