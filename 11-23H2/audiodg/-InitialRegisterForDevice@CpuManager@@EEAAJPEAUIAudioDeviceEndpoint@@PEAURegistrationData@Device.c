/*
 * XREFs of ?InitialRegisterForDevice@CpuManager@@EEAAJPEAUIAudioDeviceEndpoint@@PEAURegistrationData@DeviceRegistrations@1@@Z @ 0x140053B20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CpuManager::InitialRegisterForDevice(
        CpuManager *this,
        struct IAudioDeviceEndpoint *a2,
        struct CpuManager::DeviceRegistrations::RegistrationData *a3)
{
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0LL;
  v6 = ((__int64 (__fastcall *)(struct IAudioDeviceEndpoint *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_44b2c783_5fa3_4983_9d74_9207de1f9e63,
         &v9);
  if ( v6 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 56LL))(
           v9,
           *((unsigned __int16 *)this + 272),
           *((_QWORD *)this + 69));
    if ( v6 >= 0 )
    {
      *(_QWORD *)a3 = a2;
      ((void (__fastcall *)(struct IAudioDeviceEndpoint *))a2->lpVtbl->AddRef)(a2);
      v6 = 0;
    }
  }
  v7 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return (unsigned int)v6;
}
