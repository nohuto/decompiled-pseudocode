/*
 * XREFs of ?DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z @ 0x1800E7558
 * Callers:
 *     ?OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800E9320 (-OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x1800E3F9C (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ??$MakeAndInitialize@VSpatialRimDevice@SpatialInteractions@Internal@Windows@@UIHidDevice@234@AEAPEAVHIDDevice@@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIHidDevice@SpatialInteractions@Internal@Windows@@AEAPEAVHIDDevice@@AEAPEAX@Z @ 0x1800E4C70 (--$MakeAndInitialize@VSpatialRimDevice@SpatialInteractions@Internal@Windows@@UIHidDevice@234@AEA.c)
 *     ??0?$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800E6370 (--0-$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0Is.c)
 *     ??0SpatialRimDeviceCollectionCallbacks@@QEAA@PEAVSpatialRimDeviceCollection@@@Z @ 0x1800E66D0 (--0SpatialRimDeviceCollectionCallbacks@@QEAA@PEAVSpatialRimDeviceCollection@@@Z.c)
 *     wil::details::lambda_call__lambda_aa67300acd5065abc23a85a7f508fe1a___::_lambda_call__lambda_aa67300acd5065abc23a85a7f508fe1a___ @ 0x1800E692C (wil--details--lambda_call__lambda_aa67300acd5065abc23a85a7f508fe1a___--_lambda_call__lambda_aa67.c)
 *     ??1DeviceAttached@RawInputProvidersTracing@@QEAA@XZ @ 0x1800E6A50 (--1DeviceAttached@RawInputProvidersTracing@@QEAA@XZ.c)
 *     ??1SpatialRimDeviceCollectionCallbacks@@UEAA@XZ @ 0x1800E6CEC (--1SpatialRimDeviceCollectionCallbacks@@UEAA@XZ.c)
 *     ?EnsureSpatialInteractionInitialized@SpatialRimDeviceCollection@@AEAAJXZ @ 0x1800E793C (-EnsureSpatialInteractionInitialized@SpatialRimDeviceCollection@@AEAAJXZ.c)
 *     ?StartActivity@DeviceAttached@RawInputProvidersTracing@@QEAAXK@Z @ 0x1800EAAA8 (-StartActivity@DeviceAttached@RawInputProvidersTracing@@QEAAXK@Z.c)
 *     ?Stop@DeviceAttached@RawInputProvidersTracing@@QEAAXJK@Z @ 0x1800EB070 (-Stop@DeviceAttached@RawInputProvidersTracing@@QEAAXJK@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall SpatialRimDeviceCollection::DoDeviceAttach(void **this, unsigned int a2, struct DeviceInfo *a3)
{
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
  struct RIMDevice *v21; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v22; // [rsp+58h] [rbp-A8h]
  RawInputProvidersTracing::DeviceAttached *v23; // [rsp+68h] [rbp-98h]
  __int128 v24; // [rsp+70h] [rbp-90h] BYREF
  _QWORD *v25; // [rsp+80h] [rbp-80h]
  char v26; // [rsp+88h] [rbp-78h]
  _BYTE v27[32]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v28[40]; // [rsp+B0h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+128h]

  v18 = 0;
  v19 = 0;
  wil::ActivityBase<RawInputProvidersTracing,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<RawInputProvidersTracing,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v28);
  v28[0] = &RawInputProvidersTracing::DeviceAttached::`vftable';
  RawInputProvidersTracing::DeviceAttached::StartActivity((RawInputProvidersTracing::DeviceAttached *)v28, a2);
  *(_QWORD *)&v22 = &v18;
  *((_QWORD *)&v22 + 1) = &v19;
  v6 = (RawInputProvidersTracing::DeviceAttached *)v28;
  v23 = (RawInputProvidersTracing::DeviceAttached *)v28;
  v24 = v22;
  v25 = v28;
  v26 = 1;
  v21 = 0LL;
  Device = RIMDeviceCollection::FindDevice((RIMDeviceCollection *)this, a2, 0LL, &v21, 0LL);
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
             &v21,
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
        (SpatialRimDeviceCollectionCallbacks *)v27,
        (struct SpatialRimDeviceCollection *)this);
      v10 = (*(__int64 (__fastcall **)(void *, _QWORD, _QWORD, __int64, char *, _BYTE *))(*(_QWORD *)this[354] + 48LL))(
              this[354],
              a2,
              v19,
              v20,
              (char *)a3 + 596,
              v27);
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
          (SpatialRimDeviceCollectionCallbacks *)v27,
          v14,
          v15,
          v16);
        goto LABEL_9;
      }
      SpatialRimDeviceCollectionCallbacks::~SpatialRimDeviceCollectionCallbacks(
        (SpatialRimDeviceCollectionCallbacks *)v27,
        v11,
        v12,
        v13);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v20);
      v6 = v23;
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
  wil::details::lambda_call__lambda_aa67300acd5065abc23a85a7f508fe1a___::_lambda_call__lambda_aa67300acd5065abc23a85a7f508fe1a___((__int64)&v24);
LABEL_13:
  RawInputProvidersTracing::DeviceAttached::~DeviceAttached((RawInputProvidersTracing::DeviceAttached *)v28);
  return v8;
}
