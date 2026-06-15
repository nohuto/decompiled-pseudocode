/*
 * XREFs of ??1AudioEffectsWatcher@@UEAA@XZ @ 0x1800D57CC
 * Callers:
 *     ??_GAudioEffectsWatcher@@UEAAPEAXI@Z @ 0x1800D5B70 (--_GAudioEffectsWatcher@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1_WaitTask@@QEAA@XZ @ 0x1800140DC (--1_WaitTask@@QEAA@XZ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800486BC (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180066B50 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall AudioEffectsWatcher::~AudioEffectsWatcher(AudioEffectsWatcher *this)
{
  PTP_WAIT *v2; // rdi
  void *v3; // rdx
  void *v4; // rcx
  void *v5; // rdi
  wil::details *v6; // rcx
  void *v7; // rcx

  *(_QWORD *)this = &AudioEffectsWatcher::`vftable';
  *((_QWORD *)this + 1) = &AudioEffectsWatcher::`vftable'{for `IAudioEffectsWatcher'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IAudioEffectsWatcher>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  v2 = (PTP_WAIT *)*((_QWORD *)this + 20);
  *((_QWORD *)this + 20) = 0LL;
  if ( v2 )
  {
    _WaitTask::~_WaitTask(v2);
    operator delete(v2);
  }
  v3 = (void *)*((_QWORD *)this + 10);
  if ( v3 )
    ((void (__fastcall *)(struct IMMDeviceEnumerator *))g_DeviceEnumerator->lpVtbl->UnregisterEndpointNotificationCallback)(g_DeviceEnumerator);
  if ( *((_BYTE *)this + 88) )
    NtDeleteWnfStateName((char *)this + 92);
  v4 = (void *)*((_QWORD *)this + 21);
  *((_QWORD *)this + 21) = 0LL;
  if ( v4 )
    CoTaskMemFree(v4);
  v5 = (void *)*((_QWORD *)this + 20);
  if ( v5 )
  {
    _WaitTask::~_WaitTask(*((PTP_WAIT **)this + 20));
    operator delete(v5);
  }
  v6 = (wil::details *)*((_QWORD *)this + 19);
  if ( v6 )
    wil::details::CloseHandle(v6, v3);
  `eh vector destructor iterator'((char *)this + 104, 16LL, 3LL, (void (*)(void *))ApoData::~ApoData);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 10);
  v7 = (void *)*((_QWORD *)this + 7);
  if ( v7 )
    CoTaskMemFree(v7);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioEffectsWatcher>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioEffectsWatcher>((__int64)this);
}
