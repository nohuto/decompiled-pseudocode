/*
 * XREFs of ?InitialRegisterForDevice@GraphStreamingResourceManager@@EEAAJPEAUIAudioDeviceEndpoint@@PEAURegistrationData@DeviceRegistrations@1@@Z @ 0x14002CC60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall GraphStreamingResourceManager::InitialRegisterForDevice(
        GraphStreamingResourceManager *this,
        struct IAudioDeviceEndpoint *a2,
        struct GraphStreamingResourceManager::DeviceRegistrations::RegistrationData *a3)
{
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  v4 = *((_QWORD *)this + 35);
  if ( !v4
    || (result = (*(__int64 (__fastcall **)(__int64, struct IAudioDeviceEndpoint *, __int64 *))(*(_QWORD *)v4 + 64LL))(
                   v4,
                   a2,
                   &v7),
        (int)result >= 0) )
  {
    *(_QWORD *)a3 = a2;
    ((void (__fastcall *)(struct IAudioDeviceEndpoint *))a2->lpVtbl->AddRef)(a2);
    *((_QWORD *)a3 + 1) = v7;
    return 0LL;
  }
  return result;
}
