/*
 * XREFs of ??$MakeAndInitialize@VCBridgeToApoAuxInput@@UIBridgeSourceEndpointConsumer@@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUBRIDGE_STREAM_DESCRIPTOR@@AEAPEAUIAudioProcessingObject@@AEAPEAUIAudioMediaType@@AEAI@Details@WRL@Microsoft@@YAJPEAPEAUIBridgeSourceEndpointConsumer@@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUBRIDGE_STREAM_DESCRIPTOR@@AEAPEAUIAudioProcessingObject@@AEAPEAUIAudioMediaType@@AEAI@Z @ 0x14004EEA4
 * Callers:
 *     ?CreateBridgeToApo@CBridgeToAPOProcessNode@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@I@Z @ 0x14005D764 (-CreateBridgeToApo@CBridgeToAPOProcessNode@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIBridgeSourceEndpointConsumer@@@WRL@Microsoft@@QEAA@XZ @ 0x14004F038 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIBridgeSourceEndpointConsumer@@@WRL@M.c)
 *     ??1?$ComPtr@VCCPAudioHistoryControl@@@WRL@Microsoft@@QEAA@XZ @ 0x14004F094 (--1-$ComPtr@VCCPAudioHistoryControl@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14004F0CC (--1-$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CBridgeToApoAuxInput@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUIAudioMediaType@@I@Z @ 0x14004F59C (-RuntimeClassInitialize@CBridgeToApoAuxInput@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREA.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CBridgeToApoAuxInput,IBridgeSourceEndpointConsumer,IDeviceGraphObjectCache * &,BRIDGE_STREAM_DESCRIPTOR * &,IAudioProcessingObject * &,IAudioMediaType * &,unsigned int &>(
        _QWORD *a1,
        void *a2,
        struct BRIDGE_STREAM_DESCRIPTOR **a3,
        struct IAudioProcessingObject **a4,
        struct IAudioMediaType **a5,
        unsigned int *a6)
{
  _QWORD *v9; // rax
  _QWORD *v10; // rdi
  int v11; // ebx
  _QWORD *v13; // [rsp+50h] [rbp+8h] BYREF
  void *v14; // [rsp+58h] [rbp+10h] BYREF

  v14 = a2;
  *a1 = 0LL;
  v9 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  v14 = v9;
  if ( v9 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IBridgeSourceEndpointConsumer>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IBridgeSourceEndpointConsumer>(v9);
    *v10 = &CBridgeToApoAuxInput::`vftable';
    v10[2] = 0LL;
    v10[3] = 0LL;
    v10[4] = 0LL;
    *((_DWORD *)v10 + 10) = 0;
    *((_DWORD *)v10 + 11) = 1094930515;
    v13 = v10;
    v14 = 0LL;
    v11 = CBridgeToApoAuxInput::RuntimeClassInitialize(
            (CBridgeToApoAuxInput *)v10,
            (struct IDeviceGraphObjectCache *)*a6,
            *a3,
            *a4,
            *a5,
            *a6);
    if ( v11 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))*v10)(
              v10,
              &GUID_c5a98dcf_a056_4ec0_a0b5_43e5a9a384e2,
              a1);
      (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
      return (unsigned int)v11;
    }
    Microsoft::WRL::ComPtr<CCPAudioHistoryControl>::~ComPtr<CCPAudioHistoryControl>(&v13);
  }
  else
  {
    v11 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>(&v14);
  return (unsigned int)v11;
}
