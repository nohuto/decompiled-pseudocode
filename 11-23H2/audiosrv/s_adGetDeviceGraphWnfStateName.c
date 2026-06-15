/*
 * XREFs of s_adGetDeviceGraphWnfStateName @ 0x1800CF1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x18004304C (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 *     ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x180043210 (-CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ.c)
 *     ?GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z @ 0x1800599A0 (-GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?WpRpcBindingFree@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180065988 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-WpRpcBindingFree@details@wil@@YAX0@ZU-$i.c)
 *     wil::details::lambda_call__lambda_b85fb279a8c971c66e1debadd2dc476f___::_lambda_call__lambda_b85fb279a8c971c66e1debadd2dc476f___ @ 0x1800CE398 (wil--details--lambda_call__lambda_b85fb279a8c971c66e1debadd2dc476f___--_lambda_call__lambda_b85f.c)
 *     _lambda_1eb851544ffb42b511f3612ab49dd320_::operator() @ 0x1800CE4F8 (_lambda_1eb851544ffb42b511f3612ab49dd320_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall s_adGetDeviceGraphWnfStateName(__int64 a1, __int64 a2, _QWORD *a3)
{
  LPCRITICAL_SECTION v4; // rdi
  int v5; // eax
  int DebugInfo; // ebx
  DWORD LastError; // ebx
  int ADGProcessBindingHandle; // eax
  __int64 v9; // rdx
  RPC_BINDING_HANDLE v11; // [rsp+20h] [rbp-20h] BYREF
  RPC_BINDING_HANDLE Binding[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v14; // [rsp+68h] [rbp+28h] BYREF
  char v15; // [rsp+78h] [rbp+38h] BYREF
  char v16; // [rsp+79h] [rbp+39h]

  v14 = a2;
  v11 = 0LL;
  v4 = g_ADGProcess;
  EnterCriticalSection(g_ADGProcess);
  v5 = LODWORD(v4[1].DebugInfo) + 1;
  LODWORD(v4[1].DebugInfo) = v5;
  if ( v5 == 1 )
  {
    CAudioDGProcess::CancelADGTerminationTimer(v4);
    CAudioDGProcess::InstantiateADG((CAudioDGProcess *)v4);
  }
  DebugInfo = (int)v4[1].DebugInfo;
  LeaveCriticalSection(v4);
  if ( DebugInfo >= 0 )
  {
    v16 = 1;
    if ( v11 )
    {
      LastError = GetLastError();
      Binding[0] = v11;
      RpcBindingFree(Binding);
      SetLastError(LastError);
    }
    ADGProcessBindingHandle = CAudioDGProcess::GetADGProcessBindingHandle(&v11);
    DebugInfo = ADGProcessBindingHandle;
    if ( ADGProcessBindingHandle >= 0 )
    {
      Binding[0] = &v11;
      Binding[1] = &v14;
      ADGProcessBindingHandle = lambda_1eb851544ffb42b511f3612ab49dd320_::operator()((_QWORD **)Binding);
      DebugInfo = ADGProcessBindingHandle;
      if ( ADGProcessBindingHandle >= 0 )
      {
        *a3 = *(_QWORD *)&g_ADGProcess[2].LockCount;
        DebugInfo = 0;
        goto LABEL_13;
      }
      v9 = 832LL;
    }
    else
    {
      v9 = 823LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
      (const char *)(unsigned int)ADGProcessBindingHandle);
    wil::details::lambda_call__lambda_b85fb279a8c971c66e1debadd2dc476f___::_lambda_call__lambda_b85fb279a8c971c66e1debadd2dc476f___((__int64)&v15);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x334,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
      (const char *)(unsigned int)DebugInfo);
  }
LABEL_13:
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::WpRpcBindingFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::WpRpcBindingFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v11);
  return (unsigned int)DebugInfo;
}
