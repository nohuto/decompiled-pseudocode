/*
 * XREFs of ?OnApplicationViewChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1802D6120
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UIAppViewExecutionData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4AppViewExecutionState@23456@PEAUIApplicationView@@@Z @ 0x1802D65F2 (-TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows.c)
 *     ??1ListenerTelemetrySignalTracker@@QEAA@XZ @ 0x1804A3380 (--1ListenerTelemetrySignalTracker@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::OnApplicationViewChanged(
        __int64 a1,
        __int64 a2,
        int a3)
{
  int v4; // r8d
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  __int64 *v10; // rax
  __int64 v11; // rbx
  __int64 *v12; // rax
  __int64 *AppExecutionDataForAppState; // rax
  __int64 *v14; // rax
  __int64 *v15; // rax
  int v16; // eax
  const char *v17; // r9
  unsigned int v18; // ebx
  int v20[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v21[2]; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v23; // [rsp+50h] [rbp+18h] BYREF

  *(_QWORD *)v20 = 0LL;
  if ( !a3 )
    goto LABEL_13;
  v4 = a3 - 1;
  if ( !v4 )
    goto LABEL_12;
  v5 = v4 - 1;
  if ( !v5 )
    goto LABEL_12;
  v6 = v5 - 5;
  if ( !v6 )
  {
    AppExecutionDataForAppState = (__int64 *)Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateAppExecutionDataForAppState(
                                               a1 - 16,
                                               v21,
                                               2LL,
                                               a2,
                                               *(_QWORD *)v20);
    v11 = *AppExecutionDataForAppState;
    *AppExecutionDataForAppState = 0LL;
    *(_QWORD *)v20 = v11;
    goto LABEL_14;
  }
  v7 = v6 - 2;
  if ( !v7 )
  {
    v12 = (__int64 *)Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateAppExecutionDataForAppState(
                       a1 - 16,
                       v21,
                       3LL,
                       a2,
                       *(_QWORD *)v20);
    v11 = *v12;
    *v12 = 0LL;
    *(_QWORD *)v20 = v11;
    goto LABEL_14;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
LABEL_13:
    v15 = (__int64 *)Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateAppExecutionDataForAppState(
                       a1 - 16,
                       v21,
                       0LL,
                       a2,
                       *(_QWORD *)v20);
    v11 = *v15;
    *v15 = 0LL;
    *(_QWORD *)v20 = v11;
    goto LABEL_14;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
LABEL_12:
    v14 = (__int64 *)Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateAppExecutionDataForAppState(
                       a1 - 16,
                       v21,
                       1LL,
                       a2,
                       *(_QWORD *)v20);
    v11 = *v14;
    *v14 = 0LL;
    *(_QWORD *)v20 = v11;
    goto LABEL_14;
  }
  if ( v9 != 3 )
    goto LABEL_19;
  v10 = (__int64 *)Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateAppExecutionDataForAppState(
                     a1 - 16,
                     v21,
                     4LL,
                     a2,
                     *(_QWORD *)v20);
  v11 = *v10;
  *v10 = 0LL;
  *(_QWORD *)v20 = v11;
LABEL_14:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v21);
  if ( v11 )
  {
    try
    {
      LOWORD(v23) = 0;
      v16 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 72) + 64LL))(*(_QWORD *)(a1 + 72), v11);
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x9F,
                             (int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
                             v17);
    }
    v18 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x99,
        (int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
        (const char *)(unsigned int)v16);
      ListenerTelemetrySignalTracker::~ListenerTelemetrySignalTracker((ListenerTelemetrySignalTracker *)&v23);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v20);
      return v18;
    }
    LOBYTE(v23) = 1;
    ListenerTelemetrySignalTracker::~ListenerTelemetrySignalTracker((ListenerTelemetrySignalTracker *)&v23);
  }
LABEL_19:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v20);
  return 0LL;
}
