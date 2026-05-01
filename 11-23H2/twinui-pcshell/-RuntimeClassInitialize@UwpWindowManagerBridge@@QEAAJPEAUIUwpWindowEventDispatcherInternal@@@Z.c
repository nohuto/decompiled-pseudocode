/*
 * XREFs of ?RuntimeClassInitialize@UwpWindowManagerBridge@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@@Z @ 0x1800A44BC
 * Callers:
 *     ??$MakeAndInitialize@VUwpWindowManagerBridge@@UIUwpWindowManagerBridge@@PEAVUwpWindowEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIUwpWindowManagerBridge@@$$QEAPEAVUwpWindowEventDispatcher@@@Z @ 0x180196184 (--$MakeAndInitialize@VUwpWindowManagerBridge@@UIUwpWindowManagerBridge@@PEAVUwpWindowEventDispat.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$com_ptr_t@UIUwpWindowEventDispatcherInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIUwpWindowEventDispatcherInternal@@@Z @ 0x1800A1940 (--4-$com_ptr_t@UIUwpWindowEventDispatcherInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@P.c)
 *     ??0?$com_ptr_t@UIUwpWindowManagerBridge@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIUwpWindowManagerBridge@@@Z @ 0x1800A2808 (--0-$com_ptr_t@UIUwpWindowManagerBridge@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIUwpWindowMan.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800BD1C8 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?IsBamoEnabled@@YA_NXZ @ 0x1800D2E84 (-IsBamoEnabled@@YA_NXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?handle_wait@wil@@YA_NPEAXKH@Z @ 0x180177DC8 (-handle_wait@wil@@YA_NPEAXKH@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1801917C4 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?reset@?$shared_storage@V?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180194144 (-reset@-$shared_storage@V-$unique_any_t@V-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AX.c)
 *     ?StartWindowWatcher@UwpWindowManagerBridge@@UEAAJXZ @ 0x1801997B0 (-StartWindowWatcher@UwpWindowManagerBridge@@UEAAJXZ.c)
 *     std::thread::_Start__lambda_2a8f8fa06f2e0b1768a49123f6915af2___ @ 0x1801AA594 (std--thread--_Start__lambda_2a8f8fa06f2e0b1768a49123f6915af2___.c)
 *     ??$?0$0DK@@StringReference@Internal@Windows@@QEAA@AEAY0DK@$$CBG@Z @ 0x1801AF7C8 (--$-0$0DK@@StringReference@Internal@Windows@@QEAA@AEAY0DK@$$CBG@Z.c)
 *     ?WindowEventDispatcher_ConnectedToWindowManager@ViewManagerInteropTraceLogging@@SAXXZ @ 0x1801B57DC (-WindowEventDispatcher_ConnectedToWindowManager@ViewManagerInteropTraceLogging@@SAXXZ.c)
 *     ??$GetActivationFactory@UIUwpWindowLifecycleManagerStatics@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIUwpWindowLifecycleManagerStatics@UwpWindowLifecycleManagement@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1801B5E40 (--$GetActivationFactory@UIUwpWindowLifecycleManagerStatics@UwpWindowLifecycleManagement@Shell@In.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18048D96C (-Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$?0$0EF@@StringReference@Internal@Windows@@QEAA@AEAY0EF@$$CBG@Z @ 0x1804DEEC0 (--$-0$0EF@@StringReference@Internal@Windows@@QEAA@AEAY0EF@$$CBG@Z.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x1804DF9CC (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x1804E0BE0 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall UwpWindowManagerBridge::RuntimeClassInitialize(
        UwpWindowManagerBridge *this,
        struct IUwpWindowEventDispatcherInternal *a2)
{
  HANDLE Event; // rbx
  const char *v4; // r9
  wil::details *v5; // rcx
  HANDLE v6; // r14
  wil::details *v7; // rsi
  int LastErrorFailHr; // eax
  wil::details *v9; // rcx
  HANDLE v10; // r14
  wil::details *v11; // rsi
  int v12; // eax
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  std::_Ref_count_base *v15; // rbx
  wil **v16; // rsi
  __int64 v17; // rax
  int v18; // eax
  std::_Ref_count_base *v19; // rcx
  unsigned int v20; // r8d
  int v21; // r9d
  wil *v22; // rcx
  DWORD LastError; // ebx
  void *v25; // rdx
  DWORD v26; // ebx
  void *v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  _QWORD *v30; // rax
  int ActivationFactory; // eax
  const unsigned __int16 *v32; // rdx
  __int64 v33; // rcx
  _QWORD *v34; // rax
  int v35; // eax
  __int64 v36; // rbx
  __int64 (__fastcall *v37)(__int64, char *); // r14
  __int64 v38; // rdx
  int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rbx
  __int64 (__fastcall *v43)(__int64, char *); // r14
  __int64 v44; // rdx
  int v45; // eax
  __int64 v46; // rsi
  __int64 (__fastcall *v47)(__int64, char *); // r14
  __int64 v48; // rdx
  int v49; // eax
  int started; // eax
  int v51; // [rsp+20h] [rbp-E8h]
  __int64 v52; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v53; // [rsp+38h] [rbp-D0h] BYREF
  std::_Ref_count_base *v54[2]; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v55[16]; // [rsp+50h] [rbp-B8h] BYREF
  UwpWindowManagerBridge *v56; // [rsp+60h] [rbp-A8h]
  _Thrd_t v57; // [rsp+70h] [rbp-98h] BYREF
  std::_Ref_count_base *v58; // [rsp+80h] [rbp-88h] BYREF
  std::_Ref_count_base *v59; // [rsp+88h] [rbp-80h]
  UwpWindowManagerBridge *v60; // [rsp+90h] [rbp-78h]
  __int64 v61[3]; // [rsp+98h] [rbp-70h] BYREF
  _Thrd_t v62; // [rsp+B0h] [rbp-58h] BYREF
  HSTRING string[4]; // [rsp+C0h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+0h]

  v56 = this;
  wil::com_ptr_t<IUwpWindowEventDispatcherInternal,wil::err_exception_policy>::operator=(
    (__int64 *)this + 37,
    (__int64)a2);
  *(_OWORD *)v54 = 0LL;
  Event = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( !Event )
    wil::details::in1diag3::Throw_GetLastError(
      retaddr,
      (void *)0x1817,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      v4);
  GetLastError();
  _reset___shared_storage_V__unique_any_t_V__event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_exception_policy_3__wil___wil___details_wil__QEAAXPEAX_Z(
    v54,
    Event);
  v6 = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( v6 )
  {
    GetLastError();
    v7 = (wil::details *)*((_QWORD *)this + 35);
    if ( v7 )
    {
      LastError = GetLastError();
      wil::details::CloseHandle(v7, v25);
      SetLastError(LastError);
    }
    *((_QWORD *)this + 35) = v6;
    LastErrorFailHr = 0;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v5);
  }
  if ( LastErrorFailHr < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x37,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
      (const char *)(unsigned int)LastErrorFailHr,
      v51);
  v10 = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( v10 )
  {
    GetLastError();
    v11 = (wil::details *)*((_QWORD *)this + 36);
    if ( v11 )
    {
      v26 = GetLastError();
      wil::details::CloseHandle(v11, v27);
      SetLastError(v26);
    }
    *((_QWORD *)this + 36) = v10;
    v12 = 0;
  }
  else
  {
    v12 = wil::details::GetLastErrorFailHr(v9);
  }
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x39,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
      (const char *)(unsigned int)v12,
      v51);
  if ( !IsBamoEnabled() )
    goto LABEL_35;
  __ExceptionPtrCreate(v55);
  v13 = wil::com_ptr_t<IUwpWindowManagerBridge,wil::err_exception_policy>::com_ptr_t<IUwpWindowManagerBridge,wil::err_exception_policy>(
          &v52,
          (__int64)this);
  v14 = v13;
  v15 = v54[1];
  if ( v54[1] )
  {
    _InterlockedIncrement((volatile signed __int32 *)v54[1] + 2);
    v15 = v54[1];
  }
  v16 = (wil **)v54[0];
  v58 = v54[0];
  v59 = v15;
  v60 = this;
  v17 = *v13;
  *v14 = 0LL;
  v61[0] = v17;
  v61[1] = (__int64)v55;
  std::thread::_Start__lambda_2a8f8fa06f2e0b1768a49123f6915af2___(&v57, &v58);
  if ( !v57._Id )
  {
    std::_Throw_Cpp_error(1);
    goto LABEL_31;
  }
  v62 = v57;
  v18 = _Thrd_detach(&v62);
  if ( v18 )
  {
LABEL_31:
    std::_Throw_C_error(v18);
    goto LABEL_32;
  }
  v57 = 0LL;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v61);
  v19 = v59;
  if ( v59 )
LABEL_32:
    std::_Ref_count_base::_Decref(v19);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v52);
  if ( v16 )
    v22 = *v16;
  else
    v22 = 0LL;
  wil::handle_wait(v22, (void *)0xFFFFFFFFLL, v20, v21);
  if ( !__ExceptionPtrToBool(v55) )
  {
    __ExceptionPtrDestroy(v55);
    goto LABEL_22;
  }
  v28 = std::exception_ptr::exception_ptr((std::exception_ptr *)string, (const struct std::exception_ptr *)v55);
  std::rethrow_exception(v28);
LABEL_35:
  v29 = *((_QWORD *)this + 21);
  *((_QWORD *)this + 21) = 0LL;
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  v30 = (_QWORD *)Windows::Internal::StringReference::StringReference(
                    string,
                    L"Windows.Internal.ApplicationModel.WindowManagement.Window");
  ActivationFactory = RoGetActivationFactory(*v30, &GUID_5e75aba7_c424_4076_9d47_409a1eda087f, (char *)this + 168);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x7B,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
      (const char *)(unsigned int)ActivationFactory,
      v51);
  v33 = *((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  v34 = (_QWORD *)Windows::Internal::StringReference::StringReference(string, (const unsigned __int16 (*)[69])v32);
  v35 = RoGetActivationFactory(*v34, &GUID_b880ce78_2e50_5a73_bfaa_a3f9a8b2f042, (char *)this + 48);
  if ( v35 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x7C,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
      (const char *)(unsigned int)v35,
      v51);
  v36 = *((_QWORD *)this + 21);
  v37 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v36 + 48LL);
  v38 = *((_QWORD *)this + 22);
  *((_QWORD *)this + 22) = 0LL;
  if ( v38 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  v39 = v37(v36, (char *)this + 176);
  if ( v39 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x7E,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
      (const char *)(unsigned int)v39,
      v51);
  v40 = *((_QWORD *)this + 23);
  *((_QWORD *)this + 23) = 0LL;
  if ( v40 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
  v41 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 22))(
          *((_QWORD *)this + 22),
          &GUID_05794c5e_e0da_40a2_b42f_c6b109da71c2,
          (char *)this + 184);
  if ( v41 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1815,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v41,
      v51);
  wil::GetActivationFactory<Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowLifecycleManagerStatics>(&v53);
  v42 = v53;
  v43 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v53 + 48LL);
  v44 = *((_QWORD *)this + 29);
  *((_QWORD *)this + 29) = 0LL;
  if ( v44 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
  v45 = v43(v42, (char *)this + 232);
  if ( v45 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x82,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
      (const char *)(unsigned int)v45,
      v51);
  v46 = *((_QWORD *)this + 29);
  v47 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v46 + 120LL);
  v48 = *((_QWORD *)this + 30);
  *((_QWORD *)this + 30) = 0LL;
  if ( v48 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
  v49 = v47(v46, (char *)this + 240);
  if ( v49 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x84,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
      (const char *)(unsigned int)v49,
      v51);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v53);
  v15 = v54[1];
LABEL_22:
  if ( !IsBamoEnabled() )
  {
    started = UwpWindowManagerBridge::StartWindowWatcher(this);
    if ( started < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x8B,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)started,
        v51);
  }
  if ( v15 )
    std::_Ref_count_base::_Decref(v15);
  ViewManagerInteropTraceLogging::WindowEventDispatcher_ConnectedToWindowManager();
  return 0LL;
}
