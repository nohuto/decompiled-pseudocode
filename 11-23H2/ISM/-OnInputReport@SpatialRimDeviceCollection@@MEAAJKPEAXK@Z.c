/*
 * XREFs of ?OnInputReport@SpatialRimDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800DAA60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096C94 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0SpatialRimDeviceCollectionCallbacks@@QEAA@PEAVSpatialRimDeviceCollection@@@Z @ 0x1800D7800 (--0SpatialRimDeviceCollectionCallbacks@@QEAA@PEAVSpatialRimDeviceCollection@@@Z.c)
 *     ??1SpatialRimDeviceCollectionCallbacks@@UEAA@XZ @ 0x1800D7DE4 (--1SpatialRimDeviceCollectionCallbacks@@UEAA@XZ.c)
 *     ?InputReportReceived_@RawInputProvidersContinuousTracing@@QEAAXKK@Z @ 0x1800D96BC (-InputReportReceived_@RawInputProvidersContinuousTracing@@QEAAXKK@Z.c)
 *     ?IsEnabled@RawInputProvidersContinuousTracing@@SA_NE_K@Z @ 0x1800D9794 (-IsEnabled@RawInputProvidersContinuousTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAAPEAVRawInputProvidersContinuousTracing@@P6AXXZ@Z @ 0x1800DCBA0 (-get@-$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAAPEAVRawInputProvidersC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialRimDeviceCollection::OnInputReport(
        SpatialRimDeviceCollection *this,
        unsigned int a2,
        void *a3,
        unsigned int a4)
{
  __int64 v8; // rcx
  RawInputProvidersContinuousTracing *v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  const char *v13; // r9
  int v15[10]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( RawInputProvidersContinuousTracing::IsEnabled((__int64)this) )
  {
    wil::details::static_lazy<RawInputProvidersContinuousTracing>::get(
      v8,
      _lambda_f655bc6deafeea110b0bcdbdac4bd35f_::_lambda_invoker_cdecl_);
    RawInputProvidersContinuousTracing::InputReportReceived_(v9, a2, a4);
  }
  if ( *((_QWORD *)this + 354) )
  {
    SpatialRimDeviceCollectionCallbacks::SpatialRimDeviceCollectionCallbacks(
      (SpatialRimDeviceCollectionCallbacks *)v15,
      this);
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void *, _QWORD, int *))(**((_QWORD **)this + 354) + 64LL))(
            *((_QWORD *)this + 354),
            a2,
            a3,
            a4,
            v15);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        634LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
        (const char *)(unsigned int)v10);
    SpatialRimDeviceCollectionCallbacks::~SpatialRimDeviceCollectionCallbacks(
      (SpatialRimDeviceCollectionCallbacks *)v15,
      v11,
      v12,
      v13);
  }
  return 0LL;
}
