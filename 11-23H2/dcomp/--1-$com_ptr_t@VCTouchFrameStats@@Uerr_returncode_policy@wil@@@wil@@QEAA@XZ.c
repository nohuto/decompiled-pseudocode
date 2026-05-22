/*
 * XREFs of ??1?$com_ptr_t@VCTouchFrameStats@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800041C8
 * Callers:
 *     ?Create@CTouchFrameStats@@SAJPEAUIDCompositionDeviceInternal@@PEAPEAVIDCompositionManipulationStats@@@Z @ 0x180003B5C (-Create@CTouchFrameStats@@SAJPEAUIDCompositionDeviceInternal@@PEAPEAVIDCompositionManipulationSt.c)
 *     _CTouchFrameStats::Create_::_1_::dtor$0 @ 0x1800B1D7E (_CTouchFrameStats--Create_--_1_--dtor$0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<CTouchFrameStats,wil::err_returncode_policy>::~com_ptr_t<CTouchFrameStats,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
