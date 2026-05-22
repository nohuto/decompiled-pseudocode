/*
 * XREFs of ?Create@CCompFrameStats@@SAJPEAPEAVIDCompositionStats@@@Z @ 0x1801A979C
 * Callers:
 *     DCompositionCreateStats @ 0x1801AA070 (DCompositionCreateStats.c)
 * Callees:
 *     ??0CCompFrameStats@@IEAA@T_LARGE_INTEGER@@J@Z @ 0x180003F88 (--0CCompFrameStats@@IEAA@T_LARGE_INTEGER@@J@Z.c)
 *     ?Initialize@CCompFrameStats@@IEAAJXZ @ 0x180004074 (-Initialize@CCompFrameStats@@IEAAJXZ.c)
 *     ??1?$com_ptr_t@UIDCompositionDeviceInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800041E4 (--1-$com_ptr_t@UIDCompositionDeviceInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CCompFrameStats::Create(HMODULE **a1)
{
  CCompFrameStats *v2; // rax
  HMODULE *v3; // rbx
  int v4; // edi
  HMODULE *v6; // [rsp+40h] [rbp+8h] BYREF
  LARGE_INTEGER Frequency; // [rsp+48h] [rbp+10h] BYREF
  CCompFrameStats *v8; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  QueryPerformanceFrequency(&Frequency);
  v6 = 0LL;
  v2 = (CCompFrameStats *)DefaultHeap::Alloc(0xA0uLL);
  v8 = v2;
  if ( v2 )
    v3 = (HMODULE *)CCompFrameStats::CCompFrameStats(v2, Frequency, 500);
  else
    v3 = 0LL;
  v6 = v3;
  if ( v3 )
  {
    (*((void (__fastcall **)(HMODULE *))*v3 + 1))(v3);
    v4 = CCompFrameStats::Initialize(v3);
    if ( v4 >= 0 )
    {
      v6 = 0LL;
      *a1 = v3;
    }
  }
  else
  {
    v4 = -2147024882;
  }
  wil::com_ptr_t<IDCompositionDeviceInternal,wil::err_returncode_policy>::~com_ptr_t<IDCompositionDeviceInternal,wil::err_returncode_policy>((__int64 *)&v6);
  return (unsigned int)v4;
}
