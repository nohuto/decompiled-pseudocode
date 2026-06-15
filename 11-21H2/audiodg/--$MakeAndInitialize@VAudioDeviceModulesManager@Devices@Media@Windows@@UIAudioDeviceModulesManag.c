/*
 * XREFs of ??$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManager@234@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@$$QEAPEAX@Z @ 0x1400219C0
 * Callers:
 *     ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140004CBC (-CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@.c)
 * Callees:
 *     ??0AudioDeviceModulesManager@Devices@Media@Windows@@QEAA@XZ @ 0x1400201B4 (--0AudioDeviceModulesManager@Devices@Media@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x1400218B4 (-RuntimeClassInitialize@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Media::Devices::AudioDeviceModulesManager,Windows::Media::Devices::IAudioDeviceModulesManager,void *>(
        _QWORD *a1,
        void **a2)
{
  RTL_SRWLOCK *v4; // rax
  RTL_SRWLOCK *v5; // rdi
  int v6; // esi

  *a1 = 0LL;
  v4 = (RTL_SRWLOCK *)operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = Windows::Media::Devices::AudioDeviceModulesManager::AudioDeviceModulesManager(v4);
    v6 = Windows::Media::Devices::AudioDeviceModulesManager::RuntimeClassInitialize(
           (Windows::Media::Devices::AudioDeviceModulesManager *)v5,
           *a2);
    if ( v6 >= 0 )
      v6 = (*(__int64 (__fastcall **)(RTL_SRWLOCK *, GUID *, _QWORD *))v5->Ptr)(
             v5,
             &GUID_6aa40c4d_960a_4d1c_b318_0022604547ed,
             a1);
    if ( v5 )
      (*((void (__fastcall **)(RTL_SRWLOCK *))v5->Ptr + 2))(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v6;
}
