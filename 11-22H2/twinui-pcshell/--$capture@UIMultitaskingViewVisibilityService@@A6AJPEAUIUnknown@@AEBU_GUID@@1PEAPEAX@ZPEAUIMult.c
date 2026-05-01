/*
 * XREFs of ??$capture@UIMultitaskingViewVisibilityService@@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAUIMultitaskingViewTaskScheduler@@AEBU3@@winrt@@YA?AU?$com_ptr@UIMultitaskingViewVisibilityService@@@0@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z$$QEAPEAUIMultitaskingViewTaskScheduler@@1@Z @ 0x180137C30
 * Callers:
 *     ??0GuidedSnapAssistControl@@QEAA@AEBV?$com_ptr_t@UIMultitaskingViewTaskScheduler@@Uerr_exception_policy@wil@@@wil@@PEAUISnapAssistCallback@@@Z @ 0x1801377BC (--0GuidedSnapAssistControl@@QEAA@AEBV-$com_ptr_t@UIMultitaskingViewTaskScheduler@@Uerr_exception.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::capture<IMultitaskingViewVisibilityService,long (&)(IUnknown *,_GUID const &,_GUID const &,void * *),IMultitaskingViewTaskScheduler *,_GUID const &>(
        _QWORD *a1,
        __int64 (__fastcall *a2)(_QWORD, SID *, void *, __int64 *),
        _QWORD *a3)
{
  int v4; // eax
  __int64 v6; // [rsp+68h] [rbp+20h] BYREF

  v6 = 0LL;
  v4 = a2(*a3, &SID_MultitaskingViewVisibilityService, &winrt::impl::guid_v<IMultitaskingViewVisibilityService>, &v6);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  *a1 = v6;
  return a1;
}
