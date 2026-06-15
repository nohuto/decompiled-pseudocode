/*
 * XREFs of ?RegisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x1800399B0
 * Callers:
 *     ?RegisterAudioStateMonitor@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x180019C30 (-RegisterAudioStateMonitor@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEB.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002B0C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180013EB0 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ??1AudioStateMonitor@@QEAA@XZ @ 0x180014EF4 (--1AudioStateMonitor@@QEAA@XZ.c)
 *     ??$emplace@AEA_KPEAUAudioStateMonitor@@@?$_Hash@V?$_Umap_traits@_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@std@@_N@1@AEA_K$$QEAPEAUAudioStateMonitor@@@Z @ 0x180039470 (--$emplace@AEA_KPEAUAudioStateMonitor@@@-$_Hash@V-$_Umap_traits@_KV-$unique_ptr@UAudioStateMonit.c)
 *     ?GetSoundLevelForExtendedAudioCategory@AudioStateMonitorManager@@AEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAW4AUDIO_DIRECTION@@PEAKPEBG@Z @ 0x1800398B4 (-GetSoundLevelForExtendedAudioCategory@AudioStateMonitorManager@@AEAA-AW4__MIDL___MIDL_itf_audio.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall AudioStateMonitorManager::RegisterAudioStateMonitor(
        AudioStateMonitorManager *this,
        enum AUDIO_DIRECTION *a2,
        enum _AUDIO_STREAM_CATEGORY *a3,
        const unsigned __int16 *a4,
        unsigned __int64 *a5)
{
  AudioStateMonitorManager *v8; // rbp
  struct _RTL_CRITICAL_SECTION *v9; // rbx
  unsigned __int16 **v10; // rax
  __int64 v11; // rdx
  unsigned __int16 *v12; // rcx
  unsigned __int16 **v13; // rsi
  unsigned __int16 *v14; // rax
  unsigned __int16 *v15; // rbp
  DWORD LastError; // edi
  unsigned __int64 v17; // r9
  int v18; // eax
  unsigned int v19; // edi
  unsigned __int16 *v21; // rax
  unsigned __int16 *v22; // rdx
  __int64 v23; // rax
  unsigned __int16 *v24; // rcx
  int SoundLevelForExtendedAudioCategory; // edi
  unsigned __int16 *v26; // rax
  unsigned __int16 *v27; // rcx
  __int64 v28; // [rsp+20h] [rbp-68h]
  _QWORD v29[2]; // [rsp+38h] [rbp-50h] BYREF
  char v30[24]; // [rsp+48h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  AudioStateMonitorManager *v32; // [rsp+90h] [rbp+8h] BYREF

  v32 = this;
  v8 = this;
  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v29[1] = v9;
  v10 = (unsigned __int16 **)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v10;
  if ( v10 )
  {
    *v10 = 0LL;
    v10[1] = 0LL;
    v10[2] = 0LL;
    v10[3] = 0LL;
  }
  else
  {
    v13 = 0LL;
  }
  if ( !v13 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x50,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\audiostatemonitormanager\\audiostatemonitormanager.cpp",
      (const char *)0x8007000ELL);
    if ( v9 )
      goto LABEL_44;
    return 2147942414LL;
  }
  if ( a2 )
  {
    v12 = (unsigned __int16 *)operator new(4uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v12 )
      *(_DWORD *)v12 = *(_DWORD *)a2;
    else
      v12 = 0LL;
    v14 = *v13;
    *v13 = v12;
    if ( v14 )
    {
      operator delete(v14);
      v12 = *v13;
    }
    if ( !v12 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x54,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\audiostatemonitormanager\\audiostatemonitormanager.cpp",
        (const char *)0x8007000ELL);
      AudioStateMonitor::~AudioStateMonitor((AudioStateMonitor *)v13);
      operator delete(v13);
      if ( v9 )
        goto LABEL_44;
      return 2147942414LL;
    }
  }
  if ( a4 )
  {
    v15 = v13[2];
    if ( v15 )
    {
      LastError = GetLastError();
      CoTaskMemFree(v15);
      SetLastError(LastError);
    }
    v13[2] = 0LL;
    v17 = -1LL;
    do
      ++v17;
    while ( a4[v17] );
    v18 = _AllocStringWorker<CTCoAllocPolicy>((__int64)v12, v11, a4, v17, v28, v13 + 2);
    v19 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x59,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\audiostatemonitormanager\\audiostatemonitormanager.cpp",
        (const char *)(unsigned int)v18);
      AudioStateMonitor::~AudioStateMonitor((AudioStateMonitor *)v13);
      operator delete(v13);
      if ( !v9 )
        return v19;
LABEL_23:
      LeaveCriticalSection(v9);
      return v19;
    }
    v8 = v32;
  }
  if ( a3 )
  {
    v21 = (unsigned __int16 *)operator new(4uLL, (const struct std::nothrow_t *)&std::nothrow);
    v22 = v21;
    if ( !v21 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x60,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\audiostatemonitormanager\\audiostatemonitormanager.cpp",
        (const char *)0x8007000ELL);
      AudioStateMonitor::~AudioStateMonitor((AudioStateMonitor *)v13);
      operator delete(v13);
      if ( v9 )
        goto LABEL_44;
      return 2147942414LL;
    }
    *(_DWORD *)v21 = 0;
    v23 = *(int *)a3;
    if ( (unsigned int)v23 > 0xE )
    {
      v19 = -2147024809;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x61,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\audiostatemonitormanager\\audiostatemonitormanager.cpp",
        (const char *)0x80070057LL);
      AudioStateMonitor::~AudioStateMonitor((AudioStateMonitor *)v13);
      operator delete(v13);
      if ( !v9 )
        return v19;
      goto LABEL_23;
    }
    *(_DWORD *)v22 = 0;
    if ( (_DWORD)v23 )
      *(_DWORD *)v22 = dword_1800501F8[v23];
    v24 = v13[1];
    v13[1] = v22;
    if ( v24 )
      operator delete(v24);
  }
  SoundLevelForExtendedAudioCategory = AudioStateMonitorManager::GetSoundLevelForExtendedAudioCategory(
                                         (__int64)v8,
                                         a2,
                                         (unsigned int *)v13[1],
                                         (__int64)a4);
  v26 = (unsigned __int16 *)operator new(4uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v26 )
    *(_DWORD *)v26 = SoundLevelForExtendedAudioCategory;
  else
    v26 = 0LL;
  v27 = v13[3];
  v13[3] = v26;
  if ( v27 )
  {
    operator delete(v27);
    v26 = v13[3];
  }
  if ( !v26 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x68,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\audiostatemonitormanager\\audiostatemonitormanager.cpp",
      (const char *)0x8007000ELL);
    AudioStateMonitor::~AudioStateMonitor((AudioStateMonitor *)v13);
    operator delete(v13);
    if ( v9 )
LABEL_44:
      LeaveCriticalSection(v9);
    return 2147942414LL;
  }
  v32 = (AudioStateMonitorManager *)v13;
  v29[0] = v13;
  std::_Hash<std::_Umap_traits<unsigned __int64,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>,0>>::emplace<unsigned __int64 &,AudioStateMonitor *>(
    (__int64)v8 + 56,
    (__int64)v30,
    &v32,
    v29);
  *a5 = (unsigned __int64)v32;
  if ( v9 )
    LeaveCriticalSection(v9);
  return 0LL;
}
