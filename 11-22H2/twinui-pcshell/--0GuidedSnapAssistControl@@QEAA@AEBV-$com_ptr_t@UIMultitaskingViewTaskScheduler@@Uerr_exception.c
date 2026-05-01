/*
 * XREFs of ??0GuidedSnapAssistControl@@QEAA@AEBV?$com_ptr_t@UIMultitaskingViewTaskScheduler@@Uerr_exception_policy@wil@@@wil@@PEAUISnapAssistCallback@@@Z @ 0x1801377BC
 * Callers:
 *     ??$make_shared@VGuidedSnapAssistControl@@AEBV?$com_ptr_t@UIMultitaskingViewTaskScheduler@@Uerr_exception_policy@wil@@@wil@@PEAVCSnapAssistControllerBase@@@std@@YA?AV?$shared_ptr@VGuidedSnapAssistControl@@@0@AEBV?$com_ptr_t@UIMultitaskingViewTaskScheduler@@Uerr_exception_policy@wil@@@wil@@$$QEAPEAVCSnapAssistControllerBase@@@Z @ 0x18013C6AC (--$make_shared@VGuidedSnapAssistControl@@AEBV-$com_ptr_t@UIMultitaskingViewTaskScheduler@@Uerr_e.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??$com_weak_copy@AEAPEAUISnapAssistCallback@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@AEAPEAUISnapAssistCallback@@@Z @ 0x1801378BC (--$com_weak_copy@AEAPEAUISnapAssistCallback@@@wil@@YA-AV-$com_ptr_t@UIWeakReference@@Uerr_except.c)
 *     ??$capture@UIMultitaskingViewVisibilityService@@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAUIMultitaskingViewTaskScheduler@@AEBU3@@winrt@@YA?AU?$com_ptr@UIMultitaskingViewVisibilityService@@@0@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z$$QEAPEAUIMultitaskingViewTaskScheduler@@1@Z @ 0x180137C30 (--$capture@UIMultitaskingViewVisibilityService@@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAUIMult.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall GuidedSnapAssistControl::GuidedSnapAssistControl(__int64 a1, __int64 *a2, __int64 a3)
{
  _QWORD *v5; // r14
  __int64 *v6; // rdi
  __int64 v7; // rsi
  __int64 *v8; // rsi
  __int64 v9; // rcx
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF
  __int64 v16; // [rsp+78h] [rbp+20h] BYREF

  v15 = a3;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v5 = (_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0LL;
  v6 = (__int64 *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_BYTE *)(a1 + 48) = 0;
  v7 = *a2;
  if ( *(_QWORD *)(a1 + 16) != *a2 )
  {
    if ( *v5 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(a1 + 16));
    *v5 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  }
  v16 = *a2;
  v8 = (__int64 *)winrt::capture<IMultitaskingViewVisibilityService,long (&)(IUnknown *,_GUID const &,_GUID const &,void * *),IMultitaskingViewTaskScheduler *,_GUID const &>(
                    &v14,
                    IUnknown_QueryService,
                    &v16);
  if ( v6 != v8 )
  {
    if ( *v6 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v6);
    v9 = *v8;
    *v8 = 0LL;
    *v6 = v9;
  }
  if ( v14 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v14);
  v10 = (__int64 *)wil::com_weak_copy<ISnapAssistCallback * &>(&v14, &v15);
  v11 = *v10;
  *v10 = 0LL;
  v12 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = v11;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
  return a1;
}
