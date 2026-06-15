/*
 * XREFs of ?GetSoundLevel@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x180011640
 * Callers:
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProcess@@PEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBG@Z @ 0x18002CB0C (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProc.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSoundLevelForExtendedAudioCategory@AudioStateMonitorManager@@AEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAW4AUDIO_DIRECTION@@PEAKPEBG@Z @ 0x1800117B0 (-GetSoundLevelForExtendedAudioCategory@AudioStateMonitorManager@@AEAA-AW4__MIDL___MIDL_itf_audio.c)
 *     ??0CStreamPolicyVolumeClient@@QEAA@PEAUIAudioProcess@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KPEBG@Z @ 0x180011844 (--0CStreamPolicyVolumeClient@@QEAA@PEAUIAudioProcess@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_.c)
 *     ?GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@PEBU_tlgProvider_t@@PEAMPEA_JW4GPV_REASON@@@Z @ 0x180011880 (-GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@.c)
 *     ??$MakeAndInitialize@VAudioStateMonitorManager@@V1@AEAPEAVCWindowsPolicyManager@@PEAVCProcess@@@Details@WRL@Microsoft@@YAJPEAPEAVAudioStateMonitorManager@@AEAPEAVCWindowsPolicyManager@@$$QEAPEAVCProcess@@@Z @ 0x180023D54 (--$MakeAndInitialize@VAudioStateMonitorManager@@V1@AEAPEAVCWindowsPolicyManager@@PEAVCProcess@@@.c)
 *     ?DeriveAudioServerStreamCategory@@YAJW4_AUDIO_STREAM_CATEGORY@@KPEAK@Z @ 0x180040700 (-DeriveAudioServerStreamCategory@@YAJW4_AUDIO_STREAM_CATEGORY@@KPEAK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcess::GetSoundLevel(
        CProcess *this,
        enum AUDIO_DIRECTION *a2,
        enum _AUDIO_STREAM_CATEGORY *a3,
        const unsigned __int16 *a4,
        enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *a5)
{
  enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *v8; // r14
  __int64 *v9; // rdi
  int SoundLevelForExtendedAudioCategory; // ebx
  int v11; // eax
  unsigned int v12; // r12d
  __int64 v14; // r10
  __int64 v15; // r10
  int v16; // edi
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v17; // r8d
  __int64 v18; // r10
  __int64 v19; // r8
  _BYTE v20[48]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v8 = a5;
  if ( a5 )
  {
    v9 = (__int64 *)((char *)this + 704);
    SoundLevelForExtendedAudioCategory = 0;
    if ( !*((_QWORD *)this + 88) )
    {
      a5 = this;
      *v9 = 0LL;
      v11 = Microsoft::WRL::Details::MakeAndInitialize<AudioStateMonitorManager,AudioStateMonitorManager,CWindowsPolicyManager * &,CProcess *>(
              (char *)this + 704,
              a2,
              &a5);
      v12 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x10DA,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
          (const char *)(unsigned int)v11);
        return v12;
      }
    }
    v14 = *v9;
    LODWORD(a5) = 0;
    if ( a3 )
    {
      if ( (int)DeriveAudioServerStreamCategory(*a3, (unsigned int)a2, (unsigned int *)&a5) >= 0 )
        SoundLevelForExtendedAudioCategory = AudioStateMonitorManager::GetSoundLevelForExtendedAudioCategory(
                                               v15,
                                               a2,
                                               &a5,
                                               a4);
    }
    else
    {
      v16 = 2;
      if ( a2 )
        v17 = *(_DWORD *)a2 == 1;
      else
        v17 = eAll;
      CStreamPolicyVolumeClient::CStreamPolicyVolumeClient(
        (CStreamPolicyVolumeClient *)v20,
        *(struct IAudioProcess **)(v14 + 128),
        v17,
        0x18u,
        a4);
      LODWORD(a5) = 1065353216;
      GetPolicyVolumeForAudioStream(*(_QWORD *)(v18 + 120), v20, v19, &a5);
      if ( *(float *)&a5 < 1.0 )
      {
        v16 = 0;
        LOBYTE(v16) = *(float *)&a5 > 0.0;
      }
      SoundLevelForExtendedAudioCategory = v16;
    }
    *(_DWORD *)v8 = SoundLevelForExtendedAudioCategory;
  }
  return 2147500035LL;
}
