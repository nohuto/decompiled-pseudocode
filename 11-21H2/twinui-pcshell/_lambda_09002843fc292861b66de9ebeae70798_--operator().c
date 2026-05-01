/*
 * XREFs of _lambda_09002843fc292861b66de9ebeae70798_::operator() @ 0x1800A7F3C
 * Callers:
 *     ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1800A78B4 (-ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     wil::details::lambda_call__lambda_0fafcfc299c6366f509b7653c8ee9176___::_lambda_call__lambda_0fafcfc299c6366f509b7653c8ee9176___ @ 0x1803C24A0 (wil--details--lambda_call__lambda_0fafcfc299c6366f509b7653c8ee9176___--_lambda_call__lambda_0faf.c)
 *     wil::details::lambda_call__lambda_c1de3f7a931caf2cc34cf1f98ddf5cb0___::_lambda_call__lambda_c1de3f7a931caf2cc34cf1f98ddf5cb0___ @ 0x1803C24C8 (wil--details--lambda_call__lambda_c1de3f7a931caf2cc34cf1f98ddf5cb0___--_lambda_call__lambda_c1de.c)
 * Callees:
 *     ?get@?$static_lazy@VTaskFlowDataEngineTelemetry@@@details@wil@@QEAAPEAVTaskFlowDataEngineTelemetry@@P6AXXZ@Z @ 0x1800A80C4 (-get@-$static_lazy@VTaskFlowDataEngineTelemetry@@@details@wil@@QEAAPEAVTaskFlowDataEngineTelemet.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18018F71C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

int *__fastcall lambda_09002843fc292861b66de9ebeae70798_::operator()(
        int **a1,
        unsigned __int16 a2,
        __int64 a3,
        const char *a4)
{
  int v5; // r14d
  int *v6; // rsi
  __int64 v7; // rcx
  int *v8; // r12
  unsigned __int64 v9; // rbx
  int v10; // r15d
  __int64 v11; // rcx
  unsigned __int16 *v12; // rax
  REGHANDLE v13; // rcx
  int *result; // rax
  _DWORD v15[2]; // [rsp+30h] [rbp-29h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-9h] BYREF
  void *v19; // [rsp+60h] [rbp+7h]
  int v20; // [rsp+68h] [rbp+Fh]
  int v21; // [rsp+6Ch] [rbp+13h]
  _DWORD *v22; // [rsp+70h] [rbp+17h]
  int v23; // [rsp+78h] [rbp+1Fh]
  int v24; // [rsp+7Ch] [rbp+23h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v5 = a2;
  v6 = *a1;
  v7 = *(unsigned __int16 *)a1[1];
  if ( *v6 >= (int)v7 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x74,
      (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      a4);
  if ( a2 >= (unsigned __int16)v7 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x75,
      (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      a4);
  v8 = a1[2];
  v9 = (unsigned __int64)a2 >> 5;
  v10 = 1 << (a2 & 0x1F);
  if ( (v10 & v8[v9]) != 0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x76,
      (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      a4);
  LOBYTE(v7) = a2 & 0x1F;
  v11 = *(_QWORD *)(wil::details::static_lazy<TaskFlowDataEngineTelemetry>::get(
                      v7,
                      _lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *(_DWORD *)v11 > 5u )
  {
    v24 = 0;
    EventDescriptor.Keyword = 0LL;
    v22 = v15;
    *(_DWORD *)&EventDescriptor.Level = 5;
    v12 = *(unsigned __int16 **)(v11 + 8);
    v13 = *(_QWORD *)(v11 + 32);
    UserData.Ptr = (ULONGLONG)v12;
    v15[0] = v5;
    v23 = 4;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *v12;
    v19 = &unk_1806AFF17;
    UserData.Reserved = 2;
    v20 = 58;
    v21 = 1;
    v15[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(v13, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
  QueryPerformanceCounter(&PerformanceCount);
  *(LARGE_INTEGER *)&a1[3][2 * *v6 + 2] = PerformanceCount;
  result = a1[4];
  *((_WORD *)result + *v6) = v5;
  v8[v9] |= v10;
  ++*v6;
  return result;
}
