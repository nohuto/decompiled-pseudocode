/*
 * XREFs of ??0CStreamPolicyVolumeClient@@QEAA@PEAUIAudioProcess@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KPEBG@Z @ 0x180011844
 * Callers:
 *     ?RecalculateVolume@AudioStateMonitorManager@@QEAAJXZ @ 0x180008780 (-RecalculateVolume@AudioStateMonitorManager@@QEAAJXZ.c)
 *     ?GetSoundLevel@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x180011640 (-GetSoundLevel@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEAW4__MIDL.c)
 *     ?GetSoundLevelForExtendedAudioCategory@AudioStateMonitorManager@@AEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAW4AUDIO_DIRECTION@@PEAKPEBG@Z @ 0x1800117B0 (-GetSoundLevelForExtendedAudioCategory@AudioStateMonitorManager@@AEAA-AW4__MIDL___MIDL_itf_audio.c)
 * Callees:
 *     <none>
 */

CStreamPolicyVolumeClient *__fastcall CStreamPolicyVolumeClient::CStreamPolicyVolumeClient(
        CStreamPolicyVolumeClient *this,
        struct IAudioProcess *a2,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a3,
        int a4,
        const unsigned __int16 *a5)
{
  CStreamPolicyVolumeClient *result; // rax

  *((_QWORD *)this + 1) = a2;
  *(_QWORD *)this = &CStreamPolicyVolumeClient::`vftable';
  *((_QWORD *)this + 3) = a5;
  result = this;
  *((_DWORD *)this + 4) = a3;
  *((_DWORD *)this + 5) = a4;
  *((_BYTE *)this + 32) = 0;
  return result;
}
