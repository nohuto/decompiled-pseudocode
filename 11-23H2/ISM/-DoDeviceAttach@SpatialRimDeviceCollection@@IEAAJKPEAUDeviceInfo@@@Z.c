/*
 * XREFs of ?DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z @ 0x1800D8638
 * Callers:
 *     ?OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DA3C0 (-OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x1800D50AC (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ??$?0AEAK@DeviceAttached@RawInputProvidersTracing@@AEAA@U?$integral_constant@D$0A@@wistd@@AEAK@Z @ 0x1800D5B7C (--$-0AEAK@DeviceAttached@RawInputProvidersTracing@@AEAA@U-$integral_constant@D$0A@@wistd@@AEAK@Z.c)
 *     ??$MakeAndInitialize@VSpatialRimDevice@SpatialInteractions@Internal@Windows@@UIHidDevice@234@AEAPEAVHIDDevice@@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIHidDevice@SpatialInteractions@Internal@Windows@@AEAPEAVHIDDevice@@AEAPEAX@Z @ 0x1800D5E44 (--$MakeAndInitialize@VSpatialRimDevice@SpatialInteractions@Internal@Windows@@UIHidDevice@234@AEA.c)
 *     ??0SpatialRimDeviceCollectionCallbacks@@QEAA@PEAVSpatialRimDeviceCollection@@@Z @ 0x1800D7800 (--0SpatialRimDeviceCollectionCallbacks@@QEAA@PEAVSpatialRimDeviceCollection@@@Z.c)
 *     wil::details::lambda_call__lambda_aa67300acd5065abc23a85a7f508fe1a___::_lambda_call__lambda_aa67300acd5065abc23a85a7f508fe1a___ @ 0x1800D7A24 (wil--details--lambda_call__lambda_aa67300acd5065abc23a85a7f508fe1a___--_lambda_call__lambda_aa67.c)
 *     ??1DeviceAttached@RawInputProvidersTracing@@QEAA@XZ @ 0x1800D7B48 (--1DeviceAttached@RawInputProvidersTracing@@QEAA@XZ.c)
 *     ??1SpatialRimDeviceCollectionCallbacks@@UEAA@XZ @ 0x1800D7DE4 (--1SpatialRimDeviceCollectionCallbacks@@UEAA@XZ.c)
 *     ?EnsureSpatialInteractionInitialized@SpatialRimDeviceCollection@@AEAAJXZ @ 0x1800D8A00 (-EnsureSpatialInteractionInitialized@SpatialRimDeviceCollection@@AEAAJXZ.c)
 *     ?Stop@DeviceAttached@RawInputProvidersTracing@@QEAAXJK@Z @ 0x1800DC110 (-Stop@DeviceAttached@RawInputProvidersTracing@@QEAAXJK@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SpatialRimDeviceCollection::DoDeviceAttach(void **this, __int64 a2, struct DeviceInfo *a3)
{
  int v4; // ebx
  RawInputProvidersTracing::DeviceAttached *v6; // rsi
  int Device; // eax
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  const char *v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  const char *v16; // r9
  int v18; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v19; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v20; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v21; // [rsp+50h] [rbp-B0h] BYREF
  struct RIMDevice *v22; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v23; // [rsp+60h] [rbp-A0h]
  RawInputProvidersTracing::DeviceAttached *v24; // [rsp+70h] [rbp-90h]
  __int128 v25; // [rsp+78h] [rbp-88h] BYREF
  _BYTE *v26; // [rsp+88h] [rbp-78h]
  char v27; // [rsp+90h] [rbp-70h]
  _BYTE v28[40]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v29[320]; // [rsp+C0h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+238h] [rbp+138h]

  v4 = a2;
  v21 = a2;
  v18 = 0;
  v19 = 0;
  RawInputProvidersTracing::DeviceAttached::DeviceAttached((RawInputProvidersTracing::DeviceAttached *)v29, a2, &v21);
  *(_QWORD *)&v23 = &v18;
  *((_QWORD *)&v23 + 1) = &v19;
  v6 = (RawInputProvidersTracing::DeviceAttached *)v29;
  v24 = (RawInputProvidersTracing::DeviceAttached *)v29;
  v25 = v23;
  v26 = v29;
  v27 = 1;
  v22 = 0LL;
  Device = RIMDeviceCollection::FindDevice((RIMDeviceCollection *)this, v4, 0LL, &v22, 0LL);
  v8 = Device;
  v18 = Device;
  if ( Device >= 0 )
  {
    if ( (int)SpatialRimDeviceCollection::EnsureSpatialInteractionInitialized((SpatialRimDeviceCollection *)this) >= 0
      && this[354] )
    {
      _InterlockedExchange(
        &MPCInputInfoHelper::m_nextSpectrumId,
        (MPCInputInfoHelper::m_nextSpectrumId - 2000000000) % 0x3B9AC9FFu + 2000000001);
      v19 = MPCInputInfoHelper::m_nextSpectrumId;
      v20 = 0LL;
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v20);
      v9 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::SpatialInteractions::SpatialRimDevice,Windows::Internal::SpatialInteractions::IHidDevice,HIDDevice * &,void * &>(
             &v20,
             &v22,
             this + 10);
      v8 = v9;
      v18 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x252,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
          (const char *)(unsigned int)v9);
LABEL_9:
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v20);
        goto LABEL_10;
      }
      SpatialRimDeviceCollectionCallbacks::SpatialRimDeviceCollectionCallbacks(
        (SpatialRimDeviceCollectionCallbacks *)v28,
        (struct SpatialRimDeviceCollection *)this);
      v10 = (*(__int64 (__fastcall **)(void *, _QWORD, _QWORD, __int64, char *, _BYTE *))(*(_QWORD *)this[354] + 48LL))(
              this[354],
              v21,
              v19,
              v20,
              (char *)a3 + 596,
              v28);
      v8 = v10;
      v18 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x258,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
          (const char *)(unsigned int)v10);
        SpatialRimDeviceCollectionCallbacks::~SpatialRimDeviceCollectionCallbacks(
          (SpatialRimDeviceCollectionCallbacks *)v28,
          v14,
          v15,
          v16);
        goto LABEL_9;
      }
      SpatialRimDeviceCollectionCallbacks::~SpatialRimDeviceCollectionCallbacks(
        (SpatialRimDeviceCollectionCallbacks *)v28,
        v11,
        v12,
        v13);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v20);
      v6 = v24;
    }
    RawInputProvidersTracing::DeviceAttached::Stop(v6, v18, v19);
    v8 = 0;
    goto LABEL_13;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x248,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
    (const char *)(unsigned int)Device);
LABEL_10:
  wil::details::lambda_call__lambda_aa67300acd5065abc23a85a7f508fe1a___::_lambda_call__lambda_aa67300acd5065abc23a85a7f508fe1a___((__int64)&v25);
LABEL_13:
  RawInputProvidersTracing::DeviceAttached::~DeviceAttached((RawInputProvidersTracing::DeviceAttached *)v29);
  return v8;
}
