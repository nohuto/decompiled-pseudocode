/*
 * XREFs of ?OnApplicationViewChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18008B8C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180041D68 (--1-$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UIAppViewExecutionData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4AppViewExecutionState@23456@PEAUIApplicationView@@@Z @ 0x18008BA90 (-TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::OnApplicationViewChanged(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 v4; // rbx
  __int64 *v5; // rax
  __int64 *v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // edi
  __int64 *AppExecutionDataForAppState; // rax
  __int64 *v12; // rax
  __int64 *v13; // rax
  int v14[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v15[2]; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0LL;
  if ( !a3 )
    goto LABEL_19;
  if ( a3 <= 0 )
    goto LABEL_14;
  if ( a3 <= 2 )
    goto LABEL_10;
  switch ( a3 )
  {
    case 9:
      AppExecutionDataForAppState = (__int64 *)Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateAppExecutionDataForAppState(
                                                 a1 - 16,
                                                 v15,
                                                 3LL,
                                                 a2);
      v4 = *AppExecutionDataForAppState;
      *AppExecutionDataForAppState = 0LL;
      *(_QWORD *)v14 = v4;
      v7 = v15[0];
      if ( !v15[0] )
        goto LABEL_12;
      goto LABEL_11;
    case 7:
      v13 = (__int64 *)Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateAppExecutionDataForAppState(
                         a1 - 16,
                         v15,
                         2LL,
                         a2);
      v4 = *v13;
      *v13 = 0LL;
      *(_QWORD *)v14 = v4;
      v7 = v15[0];
      if ( !v15[0] )
        goto LABEL_12;
      goto LABEL_11;
    case 10:
LABEL_19:
      v12 = (__int64 *)Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateAppExecutionDataForAppState(
                         a1 - 16,
                         v15,
                         0LL,
                         a2);
      v4 = *v12;
      *v12 = 0LL;
      *(_QWORD *)v14 = v4;
      v7 = v15[0];
      if ( !v15[0] )
        goto LABEL_12;
      goto LABEL_11;
  }
  if ( a3 != 11 )
  {
    if ( a3 != 14 )
      goto LABEL_14;
    v5 = (__int64 *)Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateAppExecutionDataForAppState(
                      a1 - 16,
                      v15,
                      4LL,
                      a2);
    v4 = *v5;
    *v5 = 0LL;
    *(_QWORD *)v14 = v4;
    wil::com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>::~com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>(v15);
    goto LABEL_12;
  }
LABEL_10:
  v6 = (__int64 *)Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateAppExecutionDataForAppState(
                    a1 - 16,
                    v15,
                    1LL,
                    a2);
  v4 = *v6;
  *v6 = 0LL;
  *(_QWORD *)v14 = v4;
  v7 = v15[0];
  if ( v15[0] )
LABEL_11:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15[0] + 16LL))(v7);
LABEL_12:
  if ( v4 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 72) + 64LL))(*(_QWORD *)(a1 + 72), v4);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x99,
        (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
        (const char *)(unsigned int)v8,
        v14[0]);
      _InterlockedIncrement((volatile signed __int32 *)&ListenerTelemetryReport::m_unknownFailureCounter);
      wil::com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>::~com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>((__int64 *)v14);
      return v9;
    }
  }
LABEL_14:
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return 0LL;
}
