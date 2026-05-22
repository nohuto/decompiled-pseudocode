/*
 * XREFs of ?Create@CTouchFrameStats@@SAJPEAUIDCompositionDeviceInternal@@PEAPEAVIDCompositionManipulationStats@@@Z @ 0x180003B5C
 * Callers:
 *     DCompositionCreateManipulationStats @ 0x180003AC0 (DCompositionCreateManipulationStats.c)
 * Callees:
 *     ??0CTouchFrameStats@@IEAA@PEAUIDCompositionDeviceInternal@@T_LARGE_INTEGER@@@Z @ 0x180003C1C (--0CTouchFrameStats@@IEAA@PEAUIDCompositionDeviceInternal@@T_LARGE_INTEGER@@@Z.c)
 *     ?Initialize@CCompFrameStats@@IEAAJXZ @ 0x180004074 (-Initialize@CCompFrameStats@@IEAAJXZ.c)
 *     ??1?$com_ptr_t@VCTouchFrameStats@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800041C8 (--1-$com_ptr_t@VCTouchFrameStats@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CTouchFrameStats::Create(
        struct IDCompositionDeviceInternal *a1,
        struct IDCompositionManipulationStats **a2)
{
  CTouchFrameStats *v4; // rax
  CTouchFrameStats *v5; // rbx
  int v6; // edi
  CTouchFrameStats *v8; // [rsp+48h] [rbp+10h] BYREF
  LARGE_INTEGER Frequency; // [rsp+50h] [rbp+18h] BYREF
  CTouchFrameStats *v10; // [rsp+58h] [rbp+20h]

  *a2 = 0LL;
  QueryPerformanceFrequency(&Frequency);
  v8 = 0LL;
  v4 = (CTouchFrameStats *)DefaultHeap::Alloc(0x160uLL);
  v10 = v4;
  if ( v4 )
    v5 = CTouchFrameStats::CTouchFrameStats(v4, a1, Frequency);
  else
    v5 = 0LL;
  v8 = v5;
  if ( v5 )
  {
    (*(void (__fastcall **)(CTouchFrameStats *))(*(_QWORD *)v5 + 8LL))(v5);
    v6 = CCompFrameStats::Initialize(v5);
    if ( v6 >= 0 )
    {
      v8 = 0LL;
      *a2 = (CTouchFrameStats *)((char *)v5 + 160);
    }
  }
  else
  {
    v6 = -2147024882;
  }
  wil::com_ptr_t<CTouchFrameStats,wil::err_returncode_policy>::~com_ptr_t<CTouchFrameStats,wil::err_returncode_policy>(&v8);
  return (unsigned int)v6;
}
