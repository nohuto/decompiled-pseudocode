/*
 * XREFs of _lambda_ee4fb4173948ca8af83f1cabbba8acb3_::operator() @ 0x18010710C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_ee4fb4173948ca8af83f1cabbba8acb3__void__MIT_VPTP_INTEROP_MESSAGE_const___::_Do_call @ 0x18010A430 (std--_Func_impl_no_alloc__lambda_ee4fb4173948ca8af83f1cabbba8acb3__void__MIT_VPTP_I_ea_18010A430.c)
 * Callees:
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180020420 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x1800A5868 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1800B33F0 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?ReceivingInput@BamoVirtualTouchpadControllerProxy@@UEAAJ_N@Z @ 0x1801533D0 (-ReceivingInput@BamoVirtualTouchpadControllerProxy@@UEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_ee4fb4173948ca8af83f1cabbba8acb3_::operator()(__int64 a1, _DWORD *a2)
{
  __int64 *i; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v5[48]; // [rsp+28h] [rbp-40h] BYREF

  InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v5, "MITEP_VPTP_INTEROP", 0LL);
  wil::EnterCriticalSection(&lpCriticalSection, &VirtualTouchpadControllerProxy::s_lock);
  for ( i = *(__int64 **)qword_1802784E8; i != (__int64 *)qword_1802784E8; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 6) == *a2 )
    {
      BamoVirtualTouchpadControllerProxy::ReceivingInput((BamoVirtualTouchpadControllerProxy *)(i[2] + 8), a2[1] != 0);
      break;
    }
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v5);
}
