/*
 * XREFs of ?EnableHeadEventHandler@SpatialRimDeviceCollection@@AEAAJXZ @ 0x1800BF968
 * Callers:
 *     ?AcquireInterestInHeadEvent@SpatialRimDeviceCollection@@UEAAJXZ @ 0x1800BF1E0 (-AcquireInterestInHeadEvent@SpatialRimDeviceCollection@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180047284 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B738 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18004D754 (--1-$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VSpectrumListener@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B65FC (-InternalRelease@-$ComPtr@VSpectrumListener@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z @ 0x1800BB148 (-IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x1800BB8B4 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 *     ??0SpatialRimDeviceCollectionHeadEventHandler@@QEAA@XZ @ 0x1800BE8E8 (--0SpatialRimDeviceCollectionHeadEventHandler@@QEAA@XZ.c)
 *     ?HeadEventHandlerEnabled_@RawInputProvidersTracing@@QEAAXJ@Z @ 0x1800C0314 (-HeadEventHandlerEnabled_@RawInputProvidersTracing@@QEAAXJ@Z.c)
 *     ?SetOwner@SpatialRimDeviceCollectionHeadEventHandler@@QEAAJPEAVSpatialRimDeviceCollection@@PEAUIMessageSession@@@Z @ 0x1800C2900 (-SetOwner@SpatialRimDeviceCollectionHeadEventHandler@@QEAAJPEAVSpatialRimDeviceCollection@@PEAUI.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialRimDeviceCollection::EnableHeadEventHandler(SpatialRimDeviceCollection *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  SpatialRimDeviceCollectionHeadEventHandler **v3; // rdi
  SpatialRimDeviceCollectionHeadEventHandler *v4; // rax
  __int64 v5; // rcx
  int v6; // esi
  SpatialRimDeviceCollectionHeadEventHandler *v7; // rax
  volatile int *v8; // rdx
  SpatialRimDeviceCollectionHeadEventHandler *v9; // r10
  __int64 v10; // rcx
  RawInputProvidersTracing *v11; // rcx
  int v12; // eax
  unsigned int v13; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  SpatialRimDeviceCollectionHeadEventHandler *v16; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+48h] [rbp+10h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 2848);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 2848));
  v17 = v2;
  v3 = (SpatialRimDeviceCollectionHeadEventHandler **)((char *)this + 2888);
  if ( *((_QWORD *)this + 361) )
    goto LABEL_12;
  Microsoft::WRL::ComPtr<SpectrumListener>::InternalRelease((volatile int **)this + 361);
  *v3 = 0LL;
  v4 = (SpatialRimDeviceCollectionHeadEventHandler *)operator new(0xC8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v4;
  if ( v4 )
  {
    v7 = SpatialRimDeviceCollectionHeadEventHandler::SpatialRimDeviceCollectionHeadEventHandler(v4);
    v9 = v7;
    v16 = v7;
    if ( v7 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference(
        (SpatialRimDeviceCollectionHeadEventHandler *)((char *)v7 + 12),
        v8);
    *v3 = v9;
    Microsoft::WRL::ComPtr<SpectrumListener>::InternalRelease((volatile int **)&v16);
    v6 = 0;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<ForegroundManager>::~MakeAllocator<ForegroundManager>((void **)&v16);
    v6 = -2147024882;
  }
  if ( RawInputProvidersTracing::IsEnabled(v5) )
  {
    wil::details::static_lazy<RawInputProvidersTracing>::get(
      v10,
      _lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_);
    RawInputProvidersTracing::HeadEventHandlerEnabled_(v11, v6);
  }
  if ( v6 < 0
    || (v12 = SpatialRimDeviceCollectionHeadEventHandler::SetOwner(*v3, this, *((struct IMessageSession **)this + 345)),
        v13 = v12,
        v12 >= 0) )
  {
LABEL_12:
    v13 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x136,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)(unsigned int)v12);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return v13;
}
