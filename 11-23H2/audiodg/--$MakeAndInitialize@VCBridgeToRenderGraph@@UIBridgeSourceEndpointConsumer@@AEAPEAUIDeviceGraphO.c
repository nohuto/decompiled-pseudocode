/*
 * XREFs of ??$MakeAndInitialize@VCBridgeToRenderGraph@@UIBridgeSourceEndpointConsumer@@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUICrossProcessMemory@@AEAPEAUSYSTEM_AUDIO_STREAM@@AEAIAEAI@Details@WRL@Microsoft@@YAJPEAPEAUIBridgeSourceEndpointConsumer@@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUICrossProcessMemory@@AEAPEAUSYSTEM_AUDIO_STREAM@@AEAI4@Z @ 0x140079FF8
 * Callers:
 *     ?CreateStreamInstance@CBridgeSinkProcessNode@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIDeviceGraphObjectCache@@_JIPEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14005DA00 (-CreateStreamInstance@CBridgeSinkProcessNode@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIDevi.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIBridgeSourceEndpointConsumer@@@WRL@Microsoft@@QEAA@XZ @ 0x14004F038 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIBridgeSourceEndpointConsumer@@@WRL@M.c)
 *     ??1?$ComPtr@VCCPAudioHistoryControl@@@WRL@Microsoft@@QEAA@XZ @ 0x14004F094 (--1-$ComPtr@VCCPAudioHistoryControl@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14004F0CC (--1-$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CBridgeToRenderGraph@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUICrossProcessMemory@@PEAUSYSTEM_AUDIO_STREAM@@II@Z @ 0x14007A23C (-RuntimeClassInitialize@CBridgeToRenderGraph@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUICrossProces.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CBridgeToRenderGraph,IBridgeSourceEndpointConsumer,IDeviceGraphObjectCache * &,ICrossProcessMemory * &,SYSTEM_AUDIO_STREAM * &,unsigned int &,unsigned int &>(
        _QWORD *a1,
        struct IDeviceGraphObjectCache **a2,
        struct ICrossProcessMemory **a3,
        struct SYSTEM_AUDIO_STREAM **a4,
        unsigned int *a5,
        unsigned int *a6)
{
  _QWORD *v10; // rax
  _QWORD *v11; // rdi
  int v12; // ebx
  _QWORD *v14; // [rsp+30h] [rbp-28h] BYREF
  void *v15; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v10;
  v15 = v10;
  if ( v10 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IBridgeSourceEndpointConsumer>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IBridgeSourceEndpointConsumer>((__int64)v10);
    *v11 = &CBridgeToRenderGraph::`vftable';
    v11[2] = 0LL;
    v11[3] = 0LL;
    v11[4] = 0LL;
    v11[5] = 0LL;
    v11[6] = 0LL;
    v11[7] = 0LL;
    v11[8] = 0LL;
    v11[9] = 0LL;
    *((_WORD *)v11 + 40) = 0;
    *((_DWORD *)v11 + 21) = 0;
    v14 = v11;
    v15 = 0LL;
    v12 = CBridgeToRenderGraph::RuntimeClassInitialize((CBridgeToRenderGraph *)v11, *a2, *a3, *a4, *a5, *a6);
    if ( v12 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))*v11)(
              v11,
              &GUID_c5a98dcf_a056_4ec0_a0b5_43e5a9a384e2,
              a1);
      (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
      return (unsigned int)v12;
    }
    Microsoft::WRL::ComPtr<CCPAudioHistoryControl>::~ComPtr<CCPAudioHistoryControl>(&v14);
  }
  else
  {
    v12 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>(&v15);
  return (unsigned int)v12;
}
