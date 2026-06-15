/*
 * XREFs of ?GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z @ 0x1800599A0
 * Callers:
 *     ?s_adPublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x18004B210 (-s_adPublishApoTelemetry@@YAJPEBGU_GUID@@@Z.c)
 *     ?CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ @ 0x180059360 (-CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ.c)
 *     s_adGetDeviceGraphWnfStateName @ 0x1800CF1F0 (s_adGetDeviceGraphWnfStateName.c)
 * Callees:
 *     wil::details::lambda_call__lambda_a38155374950cc703618dff16e7da6d8___::_lambda_call__lambda_a38155374950cc703618dff16e7da6d8___ @ 0x1800CE420 (wil--details--lambda_call__lambda_a38155374950cc703618dff16e7da6d8___--_lambda_call__lambda_a381.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800CF09C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

int __fastcall CAudioDGProcess::GetADGProcessBindingHandle(RPC_BINDING_HANDLE *Binding)
{
  unsigned int v2; // eax
  unsigned int v3; // eax
  int v5; // ebx
  unsigned int v6; // [rsp+20h] [rbp-28h]
  RPC_WSTR *p_StringBinding; // [rsp+30h] [rbp-18h] BYREF
  char v8; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  RPC_WSTR StringBinding; // [rsp+50h] [rbp+8h] BYREF

  *Binding = 0LL;
  StringBinding = 0LL;
  v2 = RpcStringBindingComposeW(0LL, (RPC_WSTR)L"ncalrpc", 0LL, (RPC_WSTR)L"AudioDeviceGraph", 0LL, &StringBinding);
  if ( v2 )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x28,
             (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
             (const char *)v2,
             v6);
  p_StringBinding = &StringBinding;
  v8 = 1;
  v3 = RpcBindingFromStringBindingW(StringBinding, Binding);
  if ( v3 )
  {
    v5 = wil::details::in1diag3::Return_Win32(
           retaddr,
           (void *)0x2B,
           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
           (const char *)v3,
           v6);
    wil::details::lambda_call__lambda_a38155374950cc703618dff16e7da6d8___::_lambda_call__lambda_a38155374950cc703618dff16e7da6d8___(&p_StringBinding);
    return v5;
  }
  else
  {
    RpcStringFreeW(&StringBinding);
    return 0;
  }
}
