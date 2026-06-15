/*
 * XREFs of ??$MakeAndInitialize@VCBridgeSourceEndpoint@@UIAudioEndpointRT@@AEAPEAUIDeviceGraphObjectCache@@AEA_JAEAPEAUIAudioMediaType@@AEAI@Details@WRL@Microsoft@@YAJPEAPEAUIAudioEndpointRT@@AEAPEAUIDeviceGraphObjectCache@@AEA_JAEAPEAUIAudioMediaType@@AEAI@Z @ 0x140078E1C
 * Callers:
 *     ?CreateBridgeSourceEndpointInstance@CEndpointInstance@@SAJPEAUIDeviceGraphObjectCache@@_JPEAUIAudioMediaType@@IPEAPEAV1@@Z @ 0x140060948 (-CreateBridgeSourceEndpointInstance@CEndpointInstance@@SAJPEAUIDeviceGraphObjectCache@@_JPEAUIAu.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCCPAudioHistoryControl@@@WRL@Microsoft@@QEAA@XZ @ 0x14004F094 (--1-$ComPtr@VCCPAudioHistoryControl@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14004F0CC (--1-$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0CBridgeSourceEndpoint@@QEAA@XZ @ 0x140079308 (--0CBridgeSourceEndpoint@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CBridgeSourceEndpoint@@QEAAJPEAUIDeviceGraphObjectCache@@_JPEAUIAudioMediaType@@I@Z @ 0x140079C8C (-RuntimeClassInitialize@CBridgeSourceEndpoint@@QEAAJPEAUIDeviceGraphObjectCache@@_JPEAUIAudioMed.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CBridgeSourceEndpoint,IAudioEndpointRT,IDeviceGraphObjectCache * &,__int64 &,IAudioMediaType * &,unsigned int &>(
        _QWORD *a1,
        struct IDeviceGraphObjectCache **a2,
        __int64 *a3,
        struct IAudioMediaType **a4,
        unsigned int *a5)
{
  void *v9; // rax
  int v10; // ebx
  CBridgeSourceEndpoint *v11; // rdi
  CBridgeSourceEndpoint *v13; // [rsp+30h] [rbp-28h] BYREF
  void *v14; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v9 = operator new(0xA8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v9;
  if ( v9 )
  {
    v11 = CBridgeSourceEndpoint::CBridgeSourceEndpoint((CBridgeSourceEndpoint *)v9);
    v13 = v11;
    v14 = 0LL;
    v10 = CBridgeSourceEndpoint::RuntimeClassInitialize(v11, *a2, *a3, *a4, *a5);
    if ( v10 >= 0 )
    {
      v10 = (**(__int64 (__fastcall ***)(CBridgeSourceEndpoint *, GUID *, _QWORD *))v11)(
              v11,
              &GUID_dfd2005f_a6e5_4d39_a265_939ada9fbb4d,
              a1);
      (*(void (__fastcall **)(CBridgeSourceEndpoint *))(*(_QWORD *)v11 + 16LL))(v11);
      return (unsigned int)v10;
    }
    Microsoft::WRL::ComPtr<CCPAudioHistoryControl>::~ComPtr<CCPAudioHistoryControl>(&v13);
  }
  else
  {
    v10 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>(&v14);
  return (unsigned int)v10;
}
