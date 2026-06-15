/*
 * XREFs of _lambda_887eec80cbd262f34f149ad6d6f79b4e_::operator() @ 0x180071250
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_887eec80cbd262f34f149ad6d6f79b4e__void_::_Do_call @ 0x180071340 (std--_Func_impl_no_alloc__lambda_887eec80cbd262f34f149ad6d6f79b4e__void_--_Do_call.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@3@@Z @ 0x180021FA0 (-QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV-$function@$$A6AXXZ@std@@AEAV-$unique_ptr@U_Recurr.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800303E4 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?lock@critical_section@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180030758 (-lock@critical_section@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ @ 0x1800EFD00 (-GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_887eec80cbd262f34f149ad6d6f79b4e_::operator()(__int64 *a1)
{
  struct CSerialWorkQueue *SerialWorkQueue; // rax
  __int64 v3; // rcx
  PTP_TIMER **v4; // rdx
  int v5; // eax
  _QWORD v6[9]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+80h] [rbp+8h] BYREF

  wil::critical_section::lock((struct _RTL_CRITICAL_SECTION *)(*a1 + 96), &v8);
  SerialWorkQueue = GetSerialWorkQueue();
  v3 = *a1;
  v4 = (PTP_TIMER **)(*a1 + 136);
  v6[0] = off_1801705A8;
  v6[1] = v3;
  v6[7] = v6;
  v5 = CSerialWorkQueue::QueueRecurringItem((__int64)SerialWorkQueue, 0x1388u, (__int64)off_1801705A8, (__int64)v6, v4);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x267,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
      (const char *)(unsigned int)v5);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v8);
}
