/*
 * XREFs of ?UwpWindowSwitchRequested@UwpWindowEventDispatcher@@UEAAJPEAUISwitchRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804D3960
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetUwlm@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowLifecycleManager@UwpWindowLifecycleManagement@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18009B91C (-GetUwlm@UwpWindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIUwpWindowLifecycleManager@UwpWindowLifec.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800B382C (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_f82707194b3fa373e7b6403391ead5df_::__lambda_f82707194b3fa373e7b6403391ead5df_ @ 0x1801F36EC (_lambda_f82707194b3fa373e7b6403391ead5df_--__lambda_f82707194b3fa373e7b6403391ead5df_.c)
 *     wil::MakeAgileCallback_IAsyncCallback__lambda_7c9d2a4084f64fc185e255640bb995db___ @ 0x1801F43A8 (wil--MakeAgileCallback_IAsyncCallback__lambda_7c9d2a4084f64fc185e255640bb995db___.c)
 *     wil::details::lambda_call__lambda_51ce2465c16ffe34dce68979f036860b___::_lambda_call__lambda_51ce2465c16ffe34dce68979f036860b___ @ 0x1801F4930 (wil--details--lambda_call__lambda_51ce2465c16ffe34dce68979f036860b___--_lambda_call__lambda_51ce.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SwitchAsync@UwpWindowEventDispatcher@@AEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Windows@@PEAUIAsyncCallback@@@Z @ 0x1804D2330 (-SwitchAsync@UwpWindowEventDispatcher@@AEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@U.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall UwpWindowEventDispatcher::UwpWindowSwitchRequested(
        UwpWindowEventDispatcher *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::ISwitchRequestedEventArgs *a2)
{
  __int64 (**v4)(void); // rax
  __int64 (*v5)(void); // rax
  int v6; // eax
  __int64 (__fastcall **v7)(struct Windows::Internal::ApplicationModel::WindowManagement::ISwitchRequestedEventArgs *, GUID *, __int64 **); // rax
  int v8; // eax
  __int64 v9; // rax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  RTL_SRWLOCK *v13; // r14
  _QWORD *Uwlm; // rax
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(__int64, _QWORD, __int64 *); // r15
  int v17; // eax
  _QWORD *v18; // rax
  __int64 v19; // rdi
  __int64 (__fastcall *v20)(__int64, _QWORD, __int64 *); // r15
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  const char *v25; // r9
  __int64 result; // rax
  int v27; // [rsp+20h] [rbp-98h]
  __int64 v28; // [rsp+30h] [rbp-88h] BYREF
  __int64 v29; // [rsp+38h] [rbp-80h] BYREF
  __int64 v30; // [rsp+40h] [rbp-78h] BYREF
  __int64 *v31; // [rsp+48h] [rbp-70h] BYREF
  int v32; // [rsp+50h] [rbp-68h] BYREF
  int v33; // [rsp+54h] [rbp-64h] BYREF
  __int64 v34; // [rsp+58h] [rbp-60h] BYREF
  __int64 v35; // [rsp+60h] [rbp-58h] BYREF
  __int64 v36; // [rsp+68h] [rbp-50h] BYREF
  __int64 v37; // [rsp+70h] [rbp-48h] BYREF
  __int64 *v38; // [rsp+78h] [rbp-40h] BYREF
  char v39; // [rsp+80h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  unsigned int v41; // [rsp+C8h] [rbp+10h] BYREF
  unsigned int v42; // [rsp+D0h] [rbp+18h] BYREF
  unsigned int v43; // [rsp+D8h] [rbp+20h] BYREF

  v4 = *(__int64 (***)(void))a2;
  v35 = 0LL;
  v5 = *v4;
  try
  {
    v6 = v5();
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5DB,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v6,
        v27);
    v7 = *(__int64 (__fastcall ***)(struct Windows::Internal::ApplicationModel::WindowManagement::ISwitchRequestedEventArgs *, GUID *, __int64 **))a2;
    v31 = 0LL;
    v8 = (*v7)(a2, &GUID_30240936_5df4_51d0_b35f_c86b5b7aaf22, &v31);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5DE,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v8,
        v27);
    v30 = 0LL;
    v9 = *v31;
    v30 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v9 + 72))(v31, &v30);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5E1,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v10,
        v27);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(
      &v36,
      (__int64 *)&v31);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(&v37, &v30);
    wil::MakeAgileCallback_IAsyncCallback__lambda_7c9d2a4084f64fc185e255640bb995db___(&v34, &v36);
    lambda_f82707194b3fa373e7b6403391ead5df_::__lambda_f82707194b3fa373e7b6403391ead5df_(&v36);
    v38 = &v34;
    v39 = 1;
    v11 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::ISwitchRequestedEventArgs *, unsigned int *))(*(_QWORD *)a2 + 48LL))(
            a2,
            &v41);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5F3,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v11,
        v27);
    v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v35 + 48LL))(v35, &v42);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5F6,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v12,
        v27);
    v29 = 0LL;
    v13 = (RTL_SRWLOCK *)((char *)this - 16);
    Uwlm = UwpWindowEventDispatcher::GetUwlm((__int64)v13, &v36);
    v15 = *Uwlm;
    v16 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)*Uwlm + 112LL);
    v29 = 0LL;
    v17 = v16(v15, v41, &v29);
    if ( v17 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5F9,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v17,
        v27);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v36);
    if ( !v29 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5FA,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)0x80070057LL,
        v27);
    v28 = 0LL;
    v18 = UwpWindowEventDispatcher::GetUwlm((__int64)v13, &v36);
    v19 = *v18;
    v20 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)*v18 + 112LL);
    v28 = 0LL;
    v21 = v20(v19, v42, &v28);
    if ( v21 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5FD,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v21,
        v27);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v36);
    if ( !v28 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5FE,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)0x80070057LL,
        v27);
    v22 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v29 + 48LL))(v29, &v33);
    if ( v22 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x601,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v22,
        v27);
    v23 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v28 + 48LL))(v28, &v32);
    if ( v23 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x604,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v23,
        v27);
    v24 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::ISwitchRequestedEventArgs *, unsigned int *))(*(_QWORD *)a2 + 56LL))(
            a2,
            &v43);
    if ( v24 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x607,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v24,
        v27);
    UwpWindowEventDispatcher::SwitchAsync(v13, v33, v32, v43, v34);
    v39 = 0;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v28);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v29);
    wil::details::lambda_call__lambda_51ce2465c16ffe34dce68979f036860b___::_lambda_call__lambda_51ce2465c16ffe34dce68979f036860b___(&v38);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v34);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v30);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v31);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v35);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x613,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                           v25);
  }
  return result;
}
