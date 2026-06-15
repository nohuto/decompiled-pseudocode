/*
 * XREFs of ?CleanupRouting@PhoneCallAudio@@AEAAJXZ @ 0x18013C090
 * Callers:
 *     ?OnEndpointDeviceRemoved@PhoneCallAudio@@UEAAXPEAUIEndpointDevice@@@Z @ 0x180003FF0 (-OnEndpointDeviceRemoved@PhoneCallAudio@@UEAAXPEAUIEndpointDevice@@@Z.c)
 *     _lambda_725372baeb855ae858d01405b3bc3564_::operator() @ 0x18013BFA4 (_lambda_725372baeb855ae858d01405b3bc3564_--operator().c)
 *     ?OnPhoneCallEndTimeout@PhoneCallAudio@@QEAAJXZ @ 0x18013CD38 (-OnPhoneCallEndTimeout@PhoneCallAudio@@QEAAJXZ.c)
 *     ?StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x18013D510 (-StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 * Callees:
 *     ?RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_J@Z @ 0x180140130 (-RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_J@Z.c)
 */

__int64 __fastcall PhoneCallAudio::CleanupRouting(PhoneCallAudio *this)
{
  struct IAudioProcess *v1; // rdx
  __int64 v3; // r8
  struct IAudioProcess *v4; // rdx
  DynamicAudioEndpointManager *v5; // rcx

  v1 = (struct IAudioProcess *)*((_QWORD *)this + 17);
  if ( v1 )
  {
    DynamicAudioEndpointManager::RemoveRule(g_DynamicAudioEndpointManager, v1, *((_QWORD *)this + 19));
    v3 = *((_QWORD *)this + 18);
    v4 = (struct IAudioProcess *)*((_QWORD *)this + 17);
    v5 = g_DynamicAudioEndpointManager;
    *((_QWORD *)this + 19) = 0LL;
    DynamicAudioEndpointManager::RemoveRule(v5, v4, v3);
    *((_QWORD *)this + 18) = 0LL;
  }
  return 0LL;
}
