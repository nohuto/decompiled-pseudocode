/*
 * XREFs of ??1?$unique_ptr@VCOnDeviceWorkItem@@U?$default_delete@VCOnDeviceWorkItem@@@std@@@std@@QEAA@XZ @ 0x1800EEDF4
 * Callers:
 *     _CAudioSrv::QueueOnDeviceWorkItem_::_1_::dtor$2_0 @ 0x18007B050 (_CAudioSrv--QueueOnDeviceWorkItem_--_1_--dtor$2_0.c)
 *     _CAudioSrv::QueueOnDeviceWorkItem_::_1_::dtor$1_0 @ 0x18007B220 (_CAudioSrv--QueueOnDeviceWorkItem_--_1_--dtor$1_0.c)
 *     _CAudioSrv::QueueOnDeviceWorkItem_::_1_::dtor$1_1 @ 0x18007B3E0 (_CAudioSrv--QueueOnDeviceWorkItem_--_1_--dtor$1_1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
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
