/*
 * XREFs of ??1?$com_ptr_t@UIDCompositionDeviceInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800041E4
 * Callers:
 *     DCompositionCreateManipulationStats @ 0x180003AC0 (DCompositionCreateManipulationStats.c)
 *     ??1CTouchFrameStats@@MEAA@XZ @ 0x1801A5280 (--1CTouchFrameStats@@MEAA@XZ.c)
 *     ?Create@CCompFrameStats@@SAJPEAPEAVIDCompositionStats@@@Z @ 0x1801A979C (-Create@CCompFrameStats@@SAJPEAPEAVIDCompositionStats@@@Z.c)
 *     _CCompFrameStats::Create_::_1_::dtor$0 @ 0x1801A984D (_CCompFrameStats--Create_--_1_--dtor$0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<IDCompositionDeviceInternal,wil::err_returncode_policy>::~com_ptr_t<IDCompositionDeviceInternal,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
