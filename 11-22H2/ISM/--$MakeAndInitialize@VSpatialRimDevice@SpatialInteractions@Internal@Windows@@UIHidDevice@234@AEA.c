/*
 * XREFs of ??$MakeAndInitialize@VSpatialRimDevice@SpatialInteractions@Internal@Windows@@UIHidDevice@234@AEAPEAVHIDDevice@@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIHidDevice@SpatialInteractions@Internal@Windows@@AEAPEAVHIDDevice@@AEAPEAX@Z @ 0x1800E4C70
 * Callers:
 *     ?DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z @ 0x1800E7558 (-DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058434 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ @ 0x18005A98C (--1-$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18006A110 (--1-$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0SpatialRimDevice@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x1800E6604 (--0SpatialRimDevice@SpatialInteractions@Internal@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@SpatialRimDevice@SpatialInteractions@Internal@Windows@@QEAAJPEAVHIDDevice@@PEAX@Z @ 0x1800F4C2C (-RuntimeClassInitialize@SpatialRimDevice@SpatialInteractions@Internal@Windows@@QEAAJPEAVHIDDevic.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::SpatialInteractions::SpatialRimDevice,Windows::Internal::SpatialInteractions::IHidDevice,HIDDevice * &,void * &>(
        _QWORD *a1,
        struct HIDDevice **a2,
        void **a3)
{
  void *v6; // rax
  int v7; // ebx
  Windows::Internal::SpatialInteractions::SpatialRimDevice *v8; // rdi
  void *v10; // [rsp+40h] [rbp+8h] BYREF
  Windows::Internal::SpatialInteractions::SpatialRimDevice *v11; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v6 = operator new(0xB0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v6;
  if ( v6 )
  {
    v8 = (Windows::Internal::SpatialInteractions::SpatialRimDevice *)Windows::Internal::SpatialInteractions::SpatialRimDevice::SpatialRimDevice((Windows::Internal::SpatialInteractions::SpatialRimDevice *)v6);
    v11 = v8;
    v10 = 0LL;
    v7 = Windows::Internal::SpatialInteractions::SpatialRimDevice::RuntimeClassInitialize(v8, *a2, *a3);
    if ( v7 >= 0 )
    {
      v7 = (**(__int64 (__fastcall ***)(Windows::Internal::SpatialInteractions::SpatialRimDevice *, GUID *, _QWORD *))v8)(
             v8,
             &GUID_e5a2edb6_da79_47c5_b6a8_8869c36f0f6f,
             a1);
      (*(void (__fastcall **)(Windows::Internal::SpatialInteractions::SpatialRimDevice *))(*(_QWORD *)v8 + 16LL))(v8);
      return (unsigned int)v7;
    }
    Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>(&v11);
  }
  else
  {
    v7 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<ForegroundManager>::~MakeAllocator<ForegroundManager>(&v10);
  return (unsigned int)v7;
}
