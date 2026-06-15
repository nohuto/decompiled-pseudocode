/*
 * XREFs of ?GetSoundLevel@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x180017A20
 * Callers:
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProcess@@PEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBG@Z @ 0x180020078 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProc.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VAudioStateMonitorManager@@V1@AEAPEAVCWindowsPolicyManager@@PEAVCProcess@@@Details@WRL@Microsoft@@YAJPEAPEAVAudioStateMonitorManager@@AEAPEAVCWindowsPolicyManager@@$$QEAPEAVCProcess@@@Z @ 0x1800138E0 (--$MakeAndInitialize@VAudioStateMonitorManager@@V1@AEAPEAVCWindowsPolicyManager@@PEAVCProcess@@@.c)
 *     ?GetSoundLevelForExtendedAudioCategory@AudioStateMonitorManager@@AEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAW4AUDIO_DIRECTION@@PEAKPEBG@Z @ 0x1800398B4 (-GetSoundLevelForExtendedAudioCategory@AudioStateMonitorManager@@AEAA-AW4__MIDL___MIDL_itf_audio.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcess::GetSoundLevel(
        CProcess *this,
        enum AUDIO_DIRECTION *a2,
        enum _AUDIO_STREAM_CATEGORY *a3,
        const unsigned __int16 *a4,
        enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *a5)
{
  enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *v9; // r14
  int SoundLevelForExtendedAudioCategory; // ebx
  AudioStateMonitorManager **v11; // rdi
  AudioStateMonitorManager *v12; // rcx
  int v13; // eax
  unsigned int v14; // esi
  enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 **v16; // r8
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v9 = a5;
  SoundLevelForExtendedAudioCategory = 0;
  if ( !a5 )
    return 2147500035LL;
  v11 = (AudioStateMonitorManager **)((char *)this + 704);
  v12 = (AudioStateMonitorManager *)*((_QWORD *)this + 88);
  if ( !v12 )
  {
    a5 = this;
    *v11 = 0LL;
    v13 = Microsoft::WRL::Details::MakeAndInitialize<AudioStateMonitorManager,AudioStateMonitorManager,CWindowsPolicyManager * &,CProcess *>(
            v11,
            (__int64)a2,
            &a5);
    v14 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10DA,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
        (const char *)(unsigned int)v13);
      return v14;
    }
    v12 = *v11;
  }
  if ( !a3 )
  {
    v16 = 0LL;
LABEL_12:
    SoundLevelForExtendedAudioCategory = AudioStateMonitorManager::GetSoundLevelForExtendedAudioCategory(
                                           v12,
                                           a2,
                                           v16,
                                           a4);
    goto LABEL_13;
  }
  if ( *a3 <= (unsigned int)(AudioCategory_Movie|AudioCategory_Alerts) )
  {
    LODWORD(a5) = 0;
    if ( *a3 )
      LODWORD(a5) = dword_1800501F8[*(int *)a3];
    v16 = &a5;
    goto LABEL_12;
  }
LABEL_13:
  *(_DWORD *)v9 = SoundLevelForExtendedAudioCategory;
  return 2147500035LL;
}
