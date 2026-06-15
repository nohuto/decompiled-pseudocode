/*
 * XREFs of s_adGetDeviceGraphWnfStateName @ 0x180118630
 * Callers:
 *     <none>
 * Callees:
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x180019340 (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x18003918C (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 *     ?WpRpcBindingFree@details@wil@@YAXPEAX@Z @ 0x18003FD54 (-WpRpcBindingFree@details@wil@@YAXPEAX@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?WpRpcBindingFree@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18004001C (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-WpRpcBindingFree@details@wil@@YAX0@ZU-$i.c)
 *     ?GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z @ 0x1800400D0 (-GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_1eb851544ffb42b511f3612ab49dd320_::operator() @ 0x180117BD8 (_lambda_1eb851544ffb42b511f3612ab49dd320_--operator().c)
 *     ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x180117E50 (-CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall s_adGetDeviceGraphWnfStateName(__int64 a1, __int64 a2, _QWORD *a3)
{
  LPCRITICAL_SECTION v4; // rdi
  char v5; // si
  int DebugInfo; // ebx
  void *v7; // rdx
  wil::details *v8; // rdi
  DWORD LastError; // ebx
  void *v10; // rdx
  int ADGProcessBindingHandle; // eax
  __int64 v12; // rdx
  LPCRITICAL_SECTION v13; // rdi
  _QWORD *v16[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v18; // [rsp+58h] [rbp+28h] BYREF
  RPC_BINDING_HANDLE Binding; // [rsp+68h] [rbp+38h] BYREF

  v18 = a2;
  Binding = 0LL;
  v4 = g_ADGProcess;
  EnterCriticalSection(g_ADGProcess);
  v16[0] = &v4->DebugInfo;
  v5 = 1;
  DebugInfo = ++LODWORD(v4[1].DebugInfo);
  if ( DebugInfo == 1 )
  {
    CAudioDGProcess::CancelADGTerminationTimer(v4);
    CAudioDGProcess::InstantiateADG((CAudioDGProcess *)v4);
    DebugInfo = (int)v4[1].DebugInfo;
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>((struct _RTL_CRITICAL_SECTION **)v16);
  if ( DebugInfo < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x334,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
      (const char *)(unsigned int)DebugInfo);
    goto LABEL_17;
  }
  v8 = (wil::details *)Binding;
  if ( Binding )
  {
    LastError = GetLastError();
    wil::details::WpRpcBindingFree(v8, v10);
    SetLastError(LastError);
  }
  ADGProcessBindingHandle = CAudioDGProcess::GetADGProcessBindingHandle(&Binding);
  DebugInfo = ADGProcessBindingHandle;
  if ( ADGProcessBindingHandle < 0 )
  {
    v12 = 823LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
      (const char *)(unsigned int)ADGProcessBindingHandle);
    v13 = g_ADGProcess;
    goto LABEL_13;
  }
  v16[0] = &Binding;
  v16[1] = &v18;
  ADGProcessBindingHandle = lambda_1eb851544ffb42b511f3612ab49dd320_::operator()(v16);
  DebugInfo = ADGProcessBindingHandle;
  if ( ADGProcessBindingHandle < 0 )
  {
    v12 = 832LL;
    goto LABEL_11;
  }
  v13 = g_ADGProcess;
  *a3 = *(_QWORD *)&g_ADGProcess[2].LockCount;
  v5 = 0;
  DebugInfo = 0;
LABEL_13:
  if ( v5 )
  {
    EnterCriticalSection(v13);
    v16[0] = &v13->DebugInfo;
    if ( LODWORD(v13[1].DebugInfo)-- == 1 )
      CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v13);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>((struct _RTL_CRITICAL_SECTION **)v16);
  }
LABEL_17:
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::WpRpcBindingFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::WpRpcBindingFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
    (wil::details **)&Binding,
    v7);
  return (unsigned int)DebugInfo;
}
