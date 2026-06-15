/*
 * XREFs of ??$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManager@234@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@$$QEAPEAX@Z @ 0x14001B550
 * Callers:
 *     ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14001B78C (-CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@.c)
 * Callees:
 *     ??0AudioDeviceModulesManager@Devices@Media@Windows@@QEAA@XZ @ 0x140003D40 (--0AudioDeviceModulesManager@Devices@Media@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x14001C5A8 (-RuntimeClassInitialize@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAX@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCCPAudioHistoryControl@@@WRL@Microsoft@@QEAA@XZ @ 0x14004F0D4 (--1-$ComPtr@VCCPAudioHistoryControl@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14004F10C (--1-$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Media::Devices::AudioDeviceModulesManager,Windows::Media::Devices::IAudioDeviceModulesManager,void *>(
        _QWORD *a1,
        void **a2)
{
  RTL_SRWLOCK *v4; // rax
  Windows::Media::Devices::AudioDeviceModulesManager *v5; // rdi
  int v6; // ebx
  RTL_SRWLOCK *v8; // [rsp+30h] [rbp+8h] BYREF
  void *v9; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = (RTL_SRWLOCK *)operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v4;
  v9 = v4;
  if ( !v4 )
  {
    v6 = -2147024882;
LABEL_7:
    Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>(&v8);
    return (unsigned int)v6;
  }
  v5 = (Windows::Media::Devices::AudioDeviceModulesManager *)Windows::Media::Devices::AudioDeviceModulesManager::AudioDeviceModulesManager(v4);
  v9 = v5;
  v8 = 0LL;
  v6 = Windows::Media::Devices::AudioDeviceModulesManager::RuntimeClassInitialize(v5, *a2);
  if ( v6 < 0 )
  {
    Microsoft::WRL::ComPtr<CCPAudioHistoryControl>::~ComPtr<CCPAudioHistoryControl>(&v9);
    goto LABEL_7;
  }
  v6 = (**(__int64 (__fastcall ***)(Windows::Media::Devices::AudioDeviceModulesManager *, GUID *, _QWORD *))v5)(
         v5,
         &GUID_6aa40c4d_960a_4d1c_b318_0022604547ed,
         a1);
  (*(void (__fastcall **)(Windows::Media::Devices::AudioDeviceModulesManager *))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)v6;
}
