/*
 * XREFs of ??1?$unique_ptr@VCOnDeviceWorkItem@@U?$default_delete@VCOnDeviceWorkItem@@@std@@@std@@QEAA@XZ @ 0x1800C2798
 * Callers:
 *     _CAudioSrv::QueueOnDeviceWorkItem_::_1_::dtor$1 @ 0x1800722F0 (_CAudioSrv--QueueOnDeviceWorkItem_--_1_--dtor$1.c)
 *     _CAudioSrv::QueueOnDeviceWorkItem_::_1_::dtor$2 @ 0x1800C4B77 (_CAudioSrv--QueueOnDeviceWorkItem_--_1_--dtor$2.c)
 *     _CAudioSrv::QueueOnDeviceWorkItem_::_1_::dtor$1_1 @ 0x1800C4E31 (_CAudioSrv--QueueOnDeviceWorkItem_--_1_--dtor$1_1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::unique_ptr<COnDeviceWorkItem>::~unique_ptr<COnDeviceWorkItem>(
        __int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (**v1)(v1, 1LL);
  return result;
}
