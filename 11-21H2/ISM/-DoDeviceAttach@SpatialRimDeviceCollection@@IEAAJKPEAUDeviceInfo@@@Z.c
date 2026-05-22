/*
 * XREFs of ?DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z @ 0x1800BF6E4
 * Callers:
 *     ?OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800C1400 (-OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x1800BBFE0 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ??$?0AEAK@DeviceAttached@RawInputProvidersTracing@@AEAA@U?$integral_constant@D$0A@@wistd@@AEAK@Z @ 0x1800BCC6C (--$-0AEAK@DeviceAttached@RawInputProvidersTracing@@AEAA@U-$integral_constant@D$0A@@wistd@@AEAK@Z.c)
 *     ??$MakeAndInitialize@VSpatialRimDevice@SpatialInteractions@Internal@Windows@@UIHidDevice@234@AEAPEAVHIDDevice@@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIHidDevice@SpatialInteractions@Internal@Windows@@AEAPEAVHIDDevice@@AEAPEAX@Z @ 0x1800BCF34 (--$MakeAndInitialize@VSpatialRimDevice@SpatialInteractions@Internal@Windows@@UIHidDevice@234@AEA.c)
 *     ??0SpatialRimDeviceCollectionCallbacks@@QEAA@PEAVSpatialRimDeviceCollection@@@Z @ 0x1800BE87C (--0SpatialRimDeviceCollectionCallbacks@@QEAA@PEAVSpatialRimDeviceCollection@@@Z.c)
 *     ??1DeviceAttached@RawInputProvidersTracing@@QEAA@XZ @ 0x1800BEBE0 (--1DeviceAttached@RawInputProvidersTracing@@QEAA@XZ.c)
 *     ??1SpatialRimDeviceCollectionCallbacks@@UEAA@XZ @ 0x1800BEE78 (--1SpatialRimDeviceCollectionCallbacks@@UEAA@XZ.c)
 *     ?EnsureSpatialInteractionInitialized@SpatialRimDeviceCollection@@AEAAJXZ @ 0x1800BFA94 (-EnsureSpatialInteractionInitialized@SpatialRimDeviceCollection@@AEAAJXZ.c)
 *     ?Stop@DeviceAttached@RawInputProvidersTracing@@QEAAXJK@Z @ 0x1800C30F0 (-Stop@DeviceAttached@RawInputProvidersTracing@@QEAAXJK@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SpatialRimDeviceCollection::DoDeviceAttach(void **this, __int64 a2, struct DeviceInfo *a3)
{
  int v4; // ebx
  int Device; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  const char *v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  const char *v15; // r9
  int v17; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v18; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v19; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  struct RIMDevice *v21; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v22; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE *v23; // [rsp+70h] [rbp-90h]
  __int128 v24; // [rsp+80h] [rbp-80h]
  _BYTE *v25; // [rsp+90h] [rbp-70h]
  char v26; // [rsp+98h] [rbp-68h]
  _BYTE v27[320]; // [rsp+A0h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+108h]

  v4 = a2;
  v19 = a2;
  v17 = 0;
  v18 = 0;
  RawInputProvidersTracing::DeviceAttached::DeviceAttached((RawInputProvidersTracing::DeviceAttached *)v27, a2, &v19);
  *(_QWORD *)&v22 = &v17;
  *((_QWORD *)&v22 + 1) = &v18;
  v23 = v27;
  v24 = v22;
  v25 = v27;
  v26 = 1;
  v21 = 0LL;
  Device = RIMDeviceCollection::FindDevice((RIMDeviceCollection *)this, v4, 0LL, &v21, 0LL);
  v7 = Device;
  v17 = Device;
  if ( Device >= 0 )
  {
    if ( (int)SpatialRimDeviceCollection::EnsureSpatialInteractionInitialized((SpatialRimDeviceCollection *)this) >= 0
      && this[354] )
    {
      _InterlockedExchange(
        &MPCInputInfoHelper::m_nextSpectrumId,
        (MPCInputInfoHelper::m_nextSpectrumId - 2000000000) % 0x3B9AC9FFu + 2000000001);
      v18 = MPCInputInfoHelper::m_nextSpectrumId;
      v20 = 0LL;
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v20);
      v8 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::SpatialInteractions::SpatialRimDevice,Windows::Internal::SpatialInteractions::IHidDevice,HIDDevice * &,void * &>(
             &v20,
             &v21,
             this + 10);
      v7 = v8;
      v17 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x252,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
          (const char *)(unsigned int)v8);
LABEL_9:
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v20);
        goto LABEL_12;
      }
      SpatialRimDeviceCollectionCallbacks::SpatialRimDeviceCollectionCallbacks(
        (SpatialRimDeviceCollectionCallbacks *)&v22,
        (struct SpatialRimDeviceCollection *)this);
      v9 = (*(__int64 (__fastcall **)(void *, _QWORD, _QWORD, __int64, char *, __int128 *))(*(_QWORD *)this[354] + 48LL))(
             this[354],
             v19,
             v18,
             v20,
             (char *)a3 + 596,
             &v22);
      v7 = v9;
      v17 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x258,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
          (const char *)(unsigned int)v9);
        SpatialRimDeviceCollectionCallbacks::~SpatialRimDeviceCollectionCallbacks(
          (SpatialRimDeviceCollectionCallbacks *)&v22,
          v13,
          v14,
          v15);
        goto LABEL_9;
      }
      SpatialRimDeviceCollectionCallbacks::~SpatialRimDeviceCollectionCallbacks(
        (SpatialRimDeviceCollectionCallbacks *)&v22,
        v10,
        v11,
        v12);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v20);
    }
    v7 = 0;
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x248,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
    (const char *)(unsigned int)Device);
LABEL_12:
  RawInputProvidersTracing::DeviceAttached::Stop((RawInputProvidersTracing::DeviceAttached *)v27, v17, v18);
  RawInputProvidersTracing::DeviceAttached::~DeviceAttached((RawInputProvidersTracing::DeviceAttached *)v27);
  return v7;
}
