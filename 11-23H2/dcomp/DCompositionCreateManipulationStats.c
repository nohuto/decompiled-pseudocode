/*
 * XREFs of DCompositionCreateManipulationStats @ 0x180003AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CTouchFrameStats@@SAJPEAUIDCompositionDeviceInternal@@PEAPEAVIDCompositionManipulationStats@@@Z @ 0x180003B5C (-Create@CTouchFrameStats@@SAJPEAUIDCompositionDeviceInternal@@PEAPEAVIDCompositionManipulationSt.c)
 *     ??1?$com_ptr_t@UIDCompositionDeviceInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800041E4 (--1-$com_ptr_t@UIDCompositionDeviceInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x18006445C (_tlgKeywordOn.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DCompositionCreateManipulationStats(
        __int64 a1,
        struct IDCompositionManipulationStats **a2,
        __int64 a3)
{
  int v4; // ebx
  __int64 (__fastcall ***v5)(_QWORD, GUID *, struct IDCompositionDeviceInternal **); // r9
  __int64 (__fastcall **v6)(_QWORD, GUID *, struct IDCompositionDeviceInternal **); // rax
  struct IDCompositionDeviceInternal *v8; // [rsp+38h] [rbp+10h] BYREF

  v4 = -2147467259;
  *a2 = 0LL;
  if ( dword_1802191E8 && (unsigned __int8)tlgKeywordOn(&dword_1802191E8, 0x400000000002LL, a3, a1) )
  {
    v6 = *v5;
    v8 = 0LL;
    v4 = (*v6)(v5, &GUID_6b556968_2d25_11e2_99f6_8bc36088709b, &v8);
    if ( v4 >= 0 )
      v4 = CTouchFrameStats::Create(v8, a2);
    wil::com_ptr_t<IDCompositionDeviceInternal,wil::err_returncode_policy>::~com_ptr_t<IDCompositionDeviceInternal,wil::err_returncode_policy>(&v8);
  }
  return (unsigned int)v4;
}
