/*
 * XREFs of _lambda_ee4fb4173948ca8af83f1cabbba8acb3_::operator() @ 0x1800F8680
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_ee4fb4173948ca8af83f1cabbba8acb3__void__MIT_VPTP_INTEROP_MESSAGE_const___::_Do_call @ 0x1800FB9A0 (std--_Func_impl_no_alloc__lambda_ee4fb4173948ca8af83f1cabbba8acb3__void__MIT_VPTP_I_ea_1800FB9A0.c)
 * Callees:
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x18001F3A0 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1800A0DC8 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?ReceivingInput@BamoVirtualTouchpadControllerProxy@@UEAAJ_N@Z @ 0x1801450E0 (-ReceivingInput@BamoVirtualTouchpadControllerProxy@@UEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_ee4fb4173948ca8af83f1cabbba8acb3_::operator()(__int64 a1, _DWORD *a2)
{
  __int64 *i; // rax
  _BYTE v4[48]; // [rsp+28h] [rbp-40h] BYREF

  InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v4, "MITEP_VPTP_INTEROP", 0LL);
  EnterCriticalSection(&VirtualTouchpadControllerProxy::s_lock);
  for ( i = *(__int64 **)qword_180269118; i != (__int64 *)qword_180269118; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 6) == *a2 )
    {
      BamoVirtualTouchpadControllerProxy::ReceivingInput((BamoVirtualTouchpadControllerProxy *)(i[2] + 8), a2[1] != 0);
      break;
    }
  }
  LeaveCriticalSection(&VirtualTouchpadControllerProxy::s_lock);
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v4);
}
