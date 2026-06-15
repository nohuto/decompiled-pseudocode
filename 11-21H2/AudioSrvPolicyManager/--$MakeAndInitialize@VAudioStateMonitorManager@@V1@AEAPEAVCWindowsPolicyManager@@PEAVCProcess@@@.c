/*
 * XREFs of ??$MakeAndInitialize@VAudioStateMonitorManager@@V1@AEAPEAVCWindowsPolicyManager@@PEAVCProcess@@@Details@WRL@Microsoft@@YAJPEAPEAVAudioStateMonitorManager@@AEAPEAVCWindowsPolicyManager@@$$QEAPEAVCProcess@@@Z @ 0x1800138E0
 * Callers:
 *     ?GetSoundLevel@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x180017A20 (-GetSoundLevel@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEAW4__MIDL.c)
 *     ?RegisterAudioStateMonitor@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x180019C30 (-RegisterAudioStateMonitor@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEB.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002B0C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0AudioStateMonitorManager@@QEAA@XZ @ 0x1800147C0 (--0AudioStateMonitorManager@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AudioStateMonitorManager,AudioStateMonitorManager,CWindowsPolicyManager * &,CProcess *>(
        AudioStateMonitorManager **a1,
        __int64 a2,
        _QWORD *a3)
{
  AudioStateMonitorManager *v5; // rax
  AudioStateMonitorManager *v7; // rbx
  CWindowsPolicyManager *v8; // rdx

  *a1 = 0LL;
  v5 = (AudioStateMonitorManager *)operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v5 )
    return 2147942414LL;
  v7 = AudioStateMonitorManager::AudioStateMonitorManager(v5);
  v8 = g_PolicyManager;
  *((_QWORD *)v7 + 16) = *a3;
  *((_QWORD *)v7 + 15) = v8;
  (*(void (__fastcall **)(AudioStateMonitorManager *))(*(_QWORD *)v7 + 8LL))(v7);
  *a1 = v7;
  (*(void (__fastcall **)(AudioStateMonitorManager *))(*(_QWORD *)v7 + 16LL))(v7);
  return 0LL;
}
