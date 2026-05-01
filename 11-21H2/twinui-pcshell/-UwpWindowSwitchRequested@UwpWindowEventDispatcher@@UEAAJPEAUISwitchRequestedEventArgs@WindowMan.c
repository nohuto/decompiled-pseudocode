/*
 * XREFs of ?UwpWindowSwitchRequested@UwpWindowEventDispatcher@@UEAAJPEAUISwitchRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1803F6FB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18003DA78 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     wil::MakeAgileCallback_IAsyncCallback__lambda_6f57d76ca459ca2c204a137cf0e4a685___ @ 0x1803E8F58 (wil--MakeAgileCallback_IAsyncCallback__lambda_6f57d76ca459ca2c204a137cf0e4a685___.c)
 *     ?GetUwlm@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowLifecycleManager@UwpWindowLifecycleManagement@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1803EE468 (-GetUwlm@UwpWindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIUwpWindowLifecycleManager@UwpWindowLifec.c)
 *     ?SwitchAsync@UwpWindowEventDispatcher@@AEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Windows@@PEAUIAsyncCallback@@@Z @ 0x1803F2274 (-SwitchAsync@UwpWindowEventDispatcher@@AEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@U.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall UwpWindowEventDispatcher::UwpWindowSwitchRequested(
        UwpWindowEventDispatcher *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::ISwitchRequestedEventArgs *a2)
{
  __int64 (**v4)(void); // rax
  __int64 (*v5)(void); // rax
  int v6; // eax
  __int64 (__fastcall **v7)(struct Windows::Internal::ApplicationModel::WindowManagement::ISwitchRequestedEventArgs *, GUID *, __int64 *); // rax
  int v8; // eax
  __int64 v9; // rax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  unsigned int v13; // r8d
  RTL_SRWLOCK *v14; // r14
  _QWORD *Uwlm; // rax
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(__int64, _QWORD, __int64 *); // rbx
  int v18; // eax
  unsigned int v19; // r8d
  _QWORD *v20; // rax
  __int64 v21; // rdi
  __int64 (__fastcall *v22)(__int64, _QWORD, __int64 *); // rbx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  const char *v27; // r9
  __int64 result; // rax
  int v29; // [rsp+20h] [rbp-88h]
  __int64 v30; // [rsp+30h] [rbp-78h] BYREF
  __int64 v31; // [rsp+38h] [rbp-70h] BYREF
  __int64 v32; // [rsp+40h] [rbp-68h] BYREF
  __int64 *v33; // [rsp+48h] [rbp-60h] BYREF
  __int64 *v34; // [rsp+50h] [rbp-58h] BYREF
  __int64 v35; // [rsp+58h] [rbp-50h] BYREF
  int v36; // [rsp+60h] [rbp-48h] BYREF
  int v37; // [rsp+64h] [rbp-44h] BYREF
  __int64 v38; // [rsp+68h] [rbp-40h] BYREF
  __int64 v39[2]; // [rsp+70h] [rbp-38h] BYREF
  char v40; // [rsp+80h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  unsigned int v42; // [rsp+B8h] [rbp+10h] BYREF
  unsigned int v43; // [rsp+C0h] [rbp+18h] BYREF
  unsigned int v44; // [rsp+C8h] [rbp+20h] BYREF

  v4 = *(__int64 (***)(void))a2;
  v39[0] = 0LL;
  v5 = *v4;
  try
  {
    v6 = v5();
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5B3,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v6,
        v29);
    v7 = *(__int64 (__fastcall ***)(struct Windows::Internal::ApplicationModel::WindowManagement::ISwitchRequestedEventArgs *, GUID *, __int64 *))a2;
    v33 = 0LL;
    v8 = (*v7)(a2, &GUID_30240936_5df4_51d0_b35f_c86b5b7aaf22, (__int64 *)&v33);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5B6,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v8,
        v29);
    v32 = 0LL;
    v9 = *v33;
    v32 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v9 + 72))(v33, &v32);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5B9,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v10,
        v29);
    v34 = v33;
    if ( v33 )
      (*(void (__fastcall **)(__int64 *))(*v33 + 8))(v33);
    v35 = v32;
    if ( v32 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 8LL))(v32);
    wil::MakeAgileCallback_IAsyncCallback__lambda_6f57d76ca459ca2c204a137cf0e4a685___(&v38, (__int64)&v34);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v35);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v34);
    v39[1] = (__int64)&v38;
    v40 = 1;
    v11 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::ISwitchRequestedEventArgs *, unsigned int *))(*(_QWORD *)a2 + 48LL))(
            a2,
            &v42);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5CB,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v11,
        v29);
    v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v39[0] + 48LL))(v39[0], &v43);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5CE,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v12,
        v29);
    v31 = 0LL;
    v14 = (RTL_SRWLOCK *)((char *)this - 16);
    Uwlm = UwpWindowEventDispatcher::GetUwlm((__int64)v14, &v34, v13);
    v16 = *Uwlm;
    v17 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)*Uwlm + 112LL);
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v31);
    v18 = v17(v16, v42, &v31);
    if ( v18 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5D1,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v18,
        v29);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v34);
    if ( !v31 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5D2,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)0x80070057LL,
        v29);
    v30 = 0LL;
    v20 = UwpWindowEventDispatcher::GetUwlm((__int64)v14, &v34, v19);
    v21 = *v20;
    v22 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)*v20 + 112LL);
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v30);
    v23 = v22(v21, v43, &v30);
    if ( v23 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5D5,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v23,
        v29);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v34);
    if ( !v30 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5D6,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)0x80070057LL,
        v29);
    v24 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v31 + 48LL))(v31, &v37);
    if ( v24 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5D9,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v24,
        v29);
    v25 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v30 + 48LL))(v30, &v36);
    if ( v25 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5DC,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v25,
        v29);
    v26 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::ISwitchRequestedEventArgs *, unsigned int *))(*(_QWORD *)a2 + 56LL))(
            a2,
            &v44);
    if ( v26 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5DF,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v26,
        v29);
    UwpWindowEventDispatcher::SwitchAsync(v14, v37, v36, v44, v38);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v30);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v31);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v38);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v32);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v33);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(v39);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x5EB,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                           v27);
  }
  return result;
}
