/*
 * XREFs of ?s_adPublishApoTelemetry@@YAJPEBG@Z @ 0x180050A44
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_de1f872ead8a8125132289b4e8f8ff46__void_::_Do_call @ 0x18005DF90 (std--_Func_impl_no_alloc__lambda_de1f872ead8a8125132289b4e8f8ff46__void_--_Do_call.c)
 * Callees:
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x180019340 (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x18003918C (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 *     ?WpRpcBindingFree@details@wil@@YAXPEAX@Z @ 0x18003FD54 (-WpRpcBindingFree@details@wil@@YAXPEAX@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?WpRpcBindingFree@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18004001C (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-WpRpcBindingFree@details@wil@@YAX0@ZU-$i.c)
 *     ?GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z @ 0x1800400D0 (-GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z.c)
 *     _lambda_fdd5800960c67509e4415b3738d07b88_::operator() @ 0x180050B28 (_lambda_fdd5800960c67509e4415b3738d07b88_--operator().c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x180117E50 (-CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall s_adPublishApoTelemetry(const unsigned __int16 *a1)
{
  LPCRITICAL_SECTION v1; // rdi
  int DebugInfo; // ebx
  wil::details *v3; // rdi
  int ADGProcessBindingHandle; // eax
  LPCRITICAL_SECTION v5; // rdi
  void *v7; // rdx
  DWORD LastError; // ebx
  void *v10; // rdx
  __int64 v11; // rdx
  _QWORD v12[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  const unsigned __int16 *v14; // [rsp+50h] [rbp+20h] BYREF
  LPCRITICAL_SECTION v15; // [rsp+58h] [rbp+28h] BYREF
  RPC_BINDING_HANDLE Binding; // [rsp+60h] [rbp+30h] BYREF

  v14 = a1;
  Binding = 0LL;
  v1 = g_ADGProcess;
  EnterCriticalSection(g_ADGProcess);
  v15 = v1;
  DebugInfo = ++LODWORD(v1[1].DebugInfo);
  if ( DebugInfo == 1 )
  {
    CAudioDGProcess::CancelADGTerminationTimer((CAudioDGProcess *)v1);
    CAudioDGProcess::InstantiateADG((CAudioDGProcess *)v1);
    DebugInfo = (int)v1[1].DebugInfo;
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v15);
  if ( DebugInfo < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x35A,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
      (const char *)(unsigned int)DebugInfo,
      v12[0]);
    goto LABEL_12;
  }
  BYTE1(v15) = 1;
  v3 = (wil::details *)Binding;
  if ( Binding )
  {
    LastError = GetLastError();
    wil::details::WpRpcBindingFree(v3, v10);
    SetLastError(LastError);
  }
  Binding = 0LL;
  ADGProcessBindingHandle = CAudioDGProcess::GetADGProcessBindingHandle(&Binding);
  DebugInfo = ADGProcessBindingHandle;
  if ( ADGProcessBindingHandle < 0 )
  {
    v11 = 861LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
      (const char *)(unsigned int)ADGProcessBindingHandle,
      v12[0]);
    goto LABEL_9;
  }
  v12[0] = &Binding;
  v12[1] = &v14;
  ADGProcessBindingHandle = lambda_fdd5800960c67509e4415b3738d07b88_::operator()(v12);
  DebugInfo = ADGProcessBindingHandle;
  if ( ADGProcessBindingHandle < 0 )
  {
    v11 = 870LL;
    goto LABEL_16;
  }
  DebugInfo = 0;
LABEL_9:
  v5 = g_ADGProcess;
  EnterCriticalSection(g_ADGProcess);
  v15 = v5;
  if ( LODWORD(v5[1].DebugInfo)-- == 1 )
    CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v5);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v15);
LABEL_12:
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::WpRpcBindingFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::WpRpcBindingFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
    (wil::details **)&Binding,
    v7);
  return (unsigned int)DebugInfo;
}
