/*
 * XREFs of ?CreateApoEndpoint@@YAJPEAPEAUIAudioEndpointRT@@PEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUIAudioMediaType@@I@Z @ 0x14004FB9C
 * Callers:
 *     ?CreateApoEndpointInstance@CEndpointInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUIAudioMediaType@@IPEAPEAV1@@Z @ 0x14005C9BC (-CreateApoEndpointInstance@CEndpointInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1400295BC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCApoEndpoint@@V1@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUBRIDGE_STREAM_DESCRIPTOR@@AEAPEAUIAudioProcessingObject@@AEAPEAUIAudioMediaType@@AEAI@Details@WRL@Microsoft@@YAJPEAPEAVCApoEndpoint@@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUBRIDGE_STREAM_DESCRIPTOR@@AEAPEAUIAudioProcessingObject@@AEAPEAUIAudioMediaType@@AEAI@Z @ 0x14004F7A8 (--$MakeAndInitialize@VCApoEndpoint@@V1@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUBRIDGE_STREAM_DESC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 CreateApoEndpoint(
        struct IAudioEndpointRT **a1,
        struct IDeviceGraphObjectCache *a2,
        struct BRIDGE_STREAM_DESCRIPTOR *a3,
        struct IAudioProcessingObject *a4,
        struct IAudioMediaType *a5,
        ...)
{
  int v6; // ebx
  CApoEndpoint *v8; // [rsp+50h] [rbp+20h] BYREF
  struct IDeviceGraphObjectCache *v9; // [rsp+58h] [rbp+28h] BYREF
  struct BRIDGE_STREAM_DESCRIPTOR *v10; // [rsp+60h] [rbp+30h] BYREF
  struct IAudioProcessingObject *v11; // [rsp+68h] [rbp+38h] BYREF
  va_list va; // [rsp+78h] [rbp+48h] BYREF

  va_start(va, a5);
  v11 = a4;
  v10 = a3;
  v9 = a2;
  *a1 = 0LL;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v8);
  v6 = Microsoft::WRL::Details::MakeAndInitialize<CApoEndpoint,CApoEndpoint,IDeviceGraphObjectCache * &,BRIDGE_STREAM_DESCRIPTOR * &,IAudioProcessingObject * &,IAudioMediaType * &,unsigned int &>(
         &v8,
         &v9,
         &v10,
         &v11,
         &a5,
         (unsigned int *)va);
  if ( v6 >= 0 )
    v6 = (**(__int64 (__fastcall ***)(CApoEndpoint *, GUID *, struct IAudioEndpointRT **))v8)(
           v8,
           &GUID_dfd2005f_a6e5_4d39_a265_939ada9fbb4d,
           a1);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v8);
  return (unsigned int)v6;
}
