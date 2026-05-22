/*
 * XREFs of _lambda_ee4fb4173948ca8af83f1cabbba8acb3_::operator() @ 0x1800DE920
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_ee4fb4173948ca8af83f1cabbba8acb3__void__MIT_VPTP_INTEROP_MESSAGE_const___::_Do_call @ 0x1800E2270 (std--_Func_impl_no_alloc__lambda_ee4fb4173948ca8af83f1cabbba8acb3__void__MIT_VPTP_I_ea_1800E2270.c)
 * Callees:
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1800183C0 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007B458 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x180089C20 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?ReceivingInput@BamoVirtualTouchpadControllerProxy@@UEAAJ_N@Z @ 0x18012AA00 (-ReceivingInput@BamoVirtualTouchpadControllerProxy@@UEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_ee4fb4173948ca8af83f1cabbba8acb3_::operator()(__int64 a1, _DWORD *a2)
{
  __int64 *i; // rax
  struct _RTL_CRITICAL_SECTION *v4; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v5[48]; // [rsp+28h] [rbp-40h] BYREF

  InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v5, "MITEP_VPTP_INTEROP", 0LL);
  EnterCriticalSection(&VirtualTouchpadControllerProxy::s_lock);
  v4 = &VirtualTouchpadControllerProxy::s_lock;
  for ( i = *(__int64 **)qword_180242FD8; i != (__int64 *)qword_180242FD8; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 6) == *a2 )
    {
      BamoVirtualTouchpadControllerProxy::ReceivingInput((BamoVirtualTouchpadControllerProxy *)(i[2] + 8), a2[1] != 0);
      break;
    }
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v4);
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v5);
}
