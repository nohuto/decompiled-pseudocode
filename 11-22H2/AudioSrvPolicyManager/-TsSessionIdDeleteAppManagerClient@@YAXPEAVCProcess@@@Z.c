/*
 * XREFs of ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x180039014
 * Callers:
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18002E318 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     PbmUnregisterAppManagerNotification @ 0x180031ED0 (PbmUnregisterAppManagerNotification.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B5D0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Lock@CApplicationManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18000E250 (-Lock@CApplicationManager@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_C.c)
 *     _lambda_4d96e95c7f1dfdf18ba3c0829eb40359_::_lambda_4d96e95c7f1dfdf18ba3c0829eb40359_ @ 0x180033B5C (_lambda_4d96e95c7f1dfdf18ba3c0829eb40359_--_lambda_4d96e95c7f1dfdf18ba3c0829eb40359_.c)
 *     _lambda_4d96e95c7f1dfdf18ba3c0829eb40359_::operator() @ 0x180034630 (_lambda_4d96e95c7f1dfdf18ba3c0829eb40359_--operator().c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TsSessionIdDeleteAppManagerClient(struct CProcess *a1)
{
  __int64 **v1; // rax
  struct CProcess *v2; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v3; // [rsp+38h] [rbp+10h] BYREF
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v2 = a1;
  CApplicationManager::Lock((__int64)a1, &v3);
  v1 = (__int64 **)lambda_4d96e95c7f1dfdf18ba3c0829eb40359_::_lambda_4d96e95c7f1dfdf18ba3c0829eb40359_(
                     &v4,
                     (__int64)&v2);
  lambda_4d96e95c7f1dfdf18ba3c0829eb40359_::operator()(v1);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v3);
}
