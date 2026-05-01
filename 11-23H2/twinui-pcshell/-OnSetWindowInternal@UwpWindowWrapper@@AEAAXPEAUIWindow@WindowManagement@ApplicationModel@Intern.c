/*
 * XREFs of ?OnSetWindowInternal@UwpWindowWrapper@@AEAAXPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18009EC20
 * Callers:
 *     ?v_OnWindowSet@UwpWindowWrapper@@EEAAXXZ @ 0x18009F850 (-v_OnWindowSet@UwpWindowWrapper@@EEAAXXZ.c)
 *     ??0UwpWindowWrapper@@QEAA@PEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@W4AppModelKind@WindowManagement@ApplicationModel@56@UUwpWindowContextId@3456@PEAUIWindow@9ApplicationModel@56@UWindowId@9ApplicationModel@56@PEBGW4WindowCreatedType@@_K@Z @ 0x1800A1100 (--0UwpWindowWrapper@@QEAA@PEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindow.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?VisibilityChanged@UwpWindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x1800A0000 (-VisibilityChanged@UwpWindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     ?FrameworkKindChanged@UwpWindowReadyState@@QEAAXW4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1800A04F0 (-FrameworkKindChanged@UwpWindowReadyState@@QEAAXW4AppModelFrameworkKind@WindowManagement@Applica.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801B8344 (--$query@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_ptr_t@UI.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall UwpWindowWrapper::OnSetWindowInternal(
        UwpWindowWrapper *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IWindow *a2)
{
  unsigned int v4; // r14d
  __int64 v5; // rax
  int v6; // eax
  __int64 *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  __int64 *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  int v15; // eax
  __int64 *v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rsi
  __int64 (__fastcall *v21)(__int64, char *); // rdi
  int v22; // eax
  int v23; // eax
  int v24; // [rsp+20h] [rbp-30h] BYREF
  __int64 v25; // [rsp+28h] [rbp-28h] BYREF
  __int64 v26; // [rsp+30h] [rbp-20h] BYREF
  __int64 v27; // [rsp+38h] [rbp-18h] BYREF
  __int64 v28[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  int v30; // [rsp+98h] [rbp+48h] BYREF
  int v31; // [rsp+A0h] [rbp+50h] BYREF
  int v32; // [rsp+A8h] [rbp+58h] BYREF

  v4 = 0;
  v5 = *(_QWORD *)a2;
  v27 = 0LL;
  v6 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IWindow *, __int64 *))(v5 + 48))(
         a2,
         &v27);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1D0,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
      (const char *)(unsigned int)v6,
      v24);
  v7 = (__int64 *)wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IAppModel,wil::err_exception_policy>::query<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel>(
                    &v27,
                    v28);
  v8 = *v7;
  *v7 = 0LL;
  v9 = *((_QWORD *)this + 80);
  *((_QWORD *)this + 80) = v8;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v28);
  v10 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 80) + 80LL))(
          *((_QWORD *)this + 80),
          (char *)this + 472);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1D3,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
      (const char *)(unsigned int)v10,
      v24);
  v11 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 80) + 120LL))(*((_QWORD *)this + 80), &v30);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1D9,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
      (const char *)(unsigned int)v11,
      v24);
  if ( v30 != 6 )
    *((_DWORD *)this + 119) = v30;
  v26 = 0LL;
  v12 = (__int64 *)*((_QWORD *)this + 80);
  v13 = *v12;
  v26 = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v13 + 528))(v12, &v26);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1E0,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
      (const char *)(unsigned int)v14,
      v24);
  v15 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v26 + 216LL))(v26, &v31);
  if ( v15 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1E3,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
      (const char *)(unsigned int)v15,
      v24);
  if ( v31 )
    *(_WORD *)((char *)this + 485) = 1;
  v25 = 0LL;
  v16 = (__int64 *)*((_QWORD *)this + 80);
  v17 = *v16;
  v25 = 0LL;
  v18 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v17 + 112))(v16, &v25);
  if ( v18 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1EB,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
      (const char *)(unsigned int)v18,
      v24);
  v19 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v25 + 48LL))(v25, &v32);
  if ( v19 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1EE,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
      (const char *)(unsigned int)v19,
      v24);
  if ( v32 )
  {
    *((_DWORD *)this + 120) = v32;
    *((_BYTE *)this + 484) = 1;
  }
  v20 = *((_QWORD *)this + 80);
  v21 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v20 + 360LL);
  WindowsDeleteString(*((HSTRING *)this + 71));
  *((_QWORD *)this + 71) = 0LL;
  v22 = v21(v20, (char *)this + 568);
  if ( v22 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1F5,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
      (const char *)(unsigned int)v22,
      v24);
  UwpWindowReadyState::FrameworkKindChanged((char *)this + 368, *((unsigned int *)this + 119));
  v23 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IWindow *, int *))(*(_QWORD *)a2 + 136LL))(
          a2,
          &v24);
  if ( v23 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1FA,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
      (const char *)(unsigned int)v23,
      v24);
  LOBYTE(v4) = v24 == 1;
  UwpWindowReadyState::VisibilityChanged((char *)this + 368, 1LL, v4);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v25);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v26);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v27);
}
