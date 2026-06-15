/*
 * XREFs of ?s_adPublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x18004B210
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_712966666638945b78fb28c344e489ab__void_::_Do_call @ 0x180073EB0 (std--_Func_impl_no_alloc__lambda_712966666638945b78fb28c344e489ab__void_--_Do_call.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x18004304C (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 *     ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x180043210 (-CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ.c)
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x1800432B0 (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 *     _lambda_2810286c7b554c127490620b0e2ca0e2_::operator() @ 0x180059440 (_lambda_2810286c7b554c127490620b0e2ca0e2_--operator().c)
 *     ?GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z @ 0x180059990 (-GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?WpRpcBindingFree@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180065978 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-WpRpcBindingFree@details@wil@@YAX0@ZU-$i.c)
 *     wil::details::lambda_call__lambda_b85fb279a8c971c66e1debadd2dc476f___::_lambda_call__lambda_b85fb279a8c971c66e1debadd2dc476f___ @ 0x1800CE3E8 (wil--details--lambda_call__lambda_b85fb279a8c971c66e1debadd2dc476f___--_lambda_call__lambda_b85f.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall s_adPublishApoTelemetry(const unsigned __int16 *a1, struct _GUID *a2)
{
  LPCRITICAL_SECTION v3; // rdi
  int v4; // eax
  int DebugInfo; // ebx
  RPC_BINDING_HANDLE v6; // rdi
  int ADGProcessBindingHandle; // eax
  DWORD LastError; // ebx
  __int64 v9; // rdx
  LPCRITICAL_SECTION v10; // rbx
  RPC_BINDING_HANDLE Binding; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v14[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  const unsigned __int16 *v16; // [rsp+60h] [rbp+20h] BYREF
  LPCRITICAL_SECTION v17; // [rsp+70h] [rbp+30h] BYREF
  RPC_BINDING_HANDLE v18; // [rsp+78h] [rbp+38h] BYREF

  v16 = a1;
  v18 = 0LL;
  v3 = g_ADGProcess;
  EnterCriticalSection(g_ADGProcess);
  v17 = v3;
  v4 = LODWORD(v3[1].DebugInfo) + 1;
  LODWORD(v3[1].DebugInfo) = v4;
  if ( v4 == 1 )
  {
    CAudioDGProcess::CancelADGTerminationTimer(v3);
    CAudioDGProcess::InstantiateADG((CAudioDGProcess *)v3);
  }
  DebugInfo = (int)v3[1].DebugInfo;
  LeaveCriticalSection(v3);
  if ( DebugInfo < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x359,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
      (const char *)(unsigned int)DebugInfo);
    goto LABEL_16;
  }
  BYTE1(v17) = 1;
  v6 = v18;
  if ( v18 )
  {
    LastError = GetLastError();
    Binding = v6;
    RpcBindingFree(&Binding);
    SetLastError(LastError);
  }
  v18 = 0LL;
  ADGProcessBindingHandle = CAudioDGProcess::GetADGProcessBindingHandle(&v18);
  DebugInfo = ADGProcessBindingHandle;
  if ( ADGProcessBindingHandle < 0 )
  {
    v9 = 860LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
      (const char *)(unsigned int)ADGProcessBindingHandle);
    wil::details::lambda_call__lambda_b85fb279a8c971c66e1debadd2dc476f___::_lambda_call__lambda_b85fb279a8c971c66e1debadd2dc476f___(&v17);
    goto LABEL_16;
  }
  v14[0] = &v18;
  v14[1] = &v16;
  v14[2] = a2;
  ADGProcessBindingHandle = lambda_2810286c7b554c127490620b0e2ca0e2_::operator()(v14);
  DebugInfo = ADGProcessBindingHandle;
  if ( ADGProcessBindingHandle < 0 )
  {
    v9 = 869LL;
    goto LABEL_11;
  }
  v10 = g_ADGProcess;
  EnterCriticalSection(g_ADGProcess);
  if ( LODWORD(v10[1].DebugInfo)-- == 1 )
    CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v10);
  LeaveCriticalSection(v10);
  DebugInfo = 0;
LABEL_16:
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::WpRpcBindingFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::WpRpcBindingFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v18);
  return (unsigned int)DebugInfo;
}
