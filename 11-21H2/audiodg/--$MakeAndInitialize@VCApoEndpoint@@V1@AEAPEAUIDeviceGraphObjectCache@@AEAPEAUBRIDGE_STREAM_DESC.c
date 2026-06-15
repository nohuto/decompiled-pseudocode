/*
 * XREFs of ??$MakeAndInitialize@VCApoEndpoint@@V1@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUBRIDGE_STREAM_DESCRIPTOR@@AEAPEAUIAudioProcessingObject@@AEAPEAUIAudioMediaType@@AEAI@Details@WRL@Microsoft@@YAJPEAPEAVCApoEndpoint@@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUBRIDGE_STREAM_DESCRIPTOR@@AEAPEAUIAudioProcessingObject@@AEAPEAUIAudioMediaType@@AEAI@Z @ 0x14004F7A8
 * Callers:
 *     ?CreateApoEndpoint@@YAJPEAPEAUIAudioEndpointRT@@PEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUIAudioMediaType@@I@Z @ 0x14004FB9C (-CreateApoEndpoint@@YAJPEAPEAUIAudioEndpointRT@@PEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_D.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1400295BC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CApoEndpoint@@QEAA@XZ @ 0x14004F8BC (--0CApoEndpoint@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CApoEndpoint@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUIAudioMediaType@@I@Z @ 0x14004FF1C (-RuntimeClassInitialize@CApoEndpoint@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRI.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CApoEndpoint,CApoEndpoint,IDeviceGraphObjectCache * &,BRIDGE_STREAM_DESCRIPTOR * &,IAudioProcessingObject * &,IAudioMediaType * &,unsigned int &>(
        CApoEndpoint **a1,
        struct IDeviceGraphObjectCache **a2,
        struct BRIDGE_STREAM_DESCRIPTOR **a3,
        struct IAudioProcessingObject **a4,
        struct IAudioMediaType **a5,
        unsigned int *a6)
{
  CApoEndpoint *v10; // rax
  int v11; // edi
  CApoEndpoint *v12; // rbx
  CApoEndpoint *v14; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = (CApoEndpoint *)operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v10 )
  {
    v12 = CApoEndpoint::CApoEndpoint(v10);
    v14 = v12;
    v11 = CApoEndpoint::RuntimeClassInitialize(v12, *a2, *a3, *a4, *a5, *a6);
    if ( v11 >= 0 )
    {
      if ( v12 )
        (*(void (__fastcall **)(CApoEndpoint *))(*(_QWORD *)v12 + 8LL))(v12);
      *a1 = v12;
      v11 = 0;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v11;
}
