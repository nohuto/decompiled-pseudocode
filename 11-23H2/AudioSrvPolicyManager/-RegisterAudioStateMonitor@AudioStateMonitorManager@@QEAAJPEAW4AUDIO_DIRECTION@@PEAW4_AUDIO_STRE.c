/*
 * XREFs of ?RegisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x1800407D0
 * Callers:
 *     ?RegisterAudioStateMonitor@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x180028740 (-RegisterAudioStateMonitor@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEB.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B580 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSoundLevelForExtendedAudioCategory@AudioStateMonitorManager@@AEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAW4AUDIO_DIRECTION@@PEAKPEBG@Z @ 0x1800117B0 (-GetSoundLevelForExtendedAudioCategory@AudioStateMonitorManager@@AEAA-AW4__MIDL___MIDL_itf_audio.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180015960 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??3@YAXPEAX_K@Z @ 0x180016C28 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180016C6C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800241D0 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ??1AudioStateMonitor@@QEAA@XZ @ 0x180024EB4 (--1AudioStateMonitor@@QEAA@XZ.c)
 *     ??$emplace@AEA_KPEAUAudioStateMonitor@@@?$_Hash@V?$_Umap_traits@_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@std@@_N@1@AEA_K$$QEAPEAUAudioStateMonitor@@@Z @ 0x18004047C (--$emplace@AEA_KPEAUAudioStateMonitor@@@-$_Hash@V-$_Umap_traits@_KV-$unique_ptr@UAudioStateMonit.c)
 *     ?DeriveAudioServerStreamCategory@@YAJW4_AUDIO_STREAM_CATEGORY@@KPEAK@Z @ 0x180040700 (-DeriveAudioServerStreamCategory@@YAJW4_AUDIO_STREAM_CATEGORY@@KPEAK@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AudioStateMonitorManager::RegisterAudioStateMonitor(
        AudioStateMonitorManager *this,
        enum AUDIO_DIRECTION *a2,
        enum _AUDIO_STREAM_CATEGORY *a3,
        const unsigned __int16 *a4,
        unsigned __int64 *a5)
{
  struct _RTL_CRITICAL_SECTION *v9; // rbx
  void **v10; // rax
  void **v11; // rdi
  unsigned int v12; // ebx
  _DWORD *v13; // rax
  void *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  SIZE_T v17; // rcx
  unsigned __int64 v18; // r9
  int v19; // eax
  __int64 v20; // r9
  __int64 v21; // rdx
  unsigned int *v22; // r8
  int v23; // eax
  void *v24; // r8
  void *v25; // rcx
  int SoundLevelForExtendedAudioCategory; // ebx
  _DWORD *v27; // rax
  void *v28; // rcx
  __int64 v30; // [rsp+20h] [rbp-40h]
  struct _RTL_CRITICAL_SECTION *v31; // [rsp+30h] [rbp-30h] BYREF
  void **v32; // [rsp+38h] [rbp-28h]
  void **v33; // [rsp+40h] [rbp-20h] BYREF
  char v34[24]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  unsigned __int64 v36; // [rsp+90h] [rbp+30h] BYREF

  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v31 = v9;
  v10 = (void **)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v10;
  if ( v10 )
  {
    *v10 = 0LL;
    v10[1] = 0LL;
    v10[2] = 0LL;
    v10[3] = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  v32 = v11;
  if ( v11 )
  {
    if ( a2 )
    {
      v13 = operator new(4uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v13 )
        *v13 = *(_DWORD *)a2;
      else
        v13 = 0LL;
      v14 = *v11;
      *v11 = v13;
      if ( v14 )
        operator delete(v14);
      if ( !*v11 )
      {
        v15 = 84LL;
LABEL_33:
        v12 = -2147024882;
        v20 = 2147942414LL;
        goto LABEL_34;
      }
    }
    if ( a4 )
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        v11 + 2,
        0LL);
      v18 = -1LL;
      do
        ++v18;
      while ( a4[v18] );
      v19 = _AllocStringWorker<CTCoAllocPolicy>(v17, v16, a4, v18, v30, (unsigned __int16 **)v11 + 2);
      v12 = v19;
      if ( v19 < 0 )
      {
        v20 = (unsigned int)v19;
        v15 = 89LL;
LABEL_34:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (int)"avcore\\audiocore\\server\\audiosrv\\audiostatemonitormanager\\audiostatemonitormanager.cpp",
          (const char *)v20);
        AudioStateMonitor::~AudioStateMonitor((AudioStateMonitor *)v11);
        operator delete(v11);
        goto LABEL_36;
      }
    }
    if ( a3 )
    {
      v22 = (unsigned int *)operator new(4uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( !v22 )
      {
        v15 = 96LL;
        goto LABEL_33;
      }
      *v22 = 0;
      v23 = DeriveAudioServerStreamCategory(*a3, v21, v22);
      v12 = v23;
      if ( v23 < 0 )
      {
        v20 = (unsigned int)v23;
        v15 = 97LL;
        goto LABEL_34;
      }
      v25 = v11[1];
      v11[1] = v24;
      if ( v25 )
        operator delete(v25);
    }
    SoundLevelForExtendedAudioCategory = AudioStateMonitorManager::GetSoundLevelForExtendedAudioCategory(
                                           (__int64)this,
                                           a2,
                                           (unsigned int *)v11[1],
                                           a4);
    v27 = operator new(4uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v27 )
      *v27 = SoundLevelForExtendedAudioCategory;
    else
      v27 = 0LL;
    v28 = v11[3];
    v11[3] = v27;
    if ( v28 )
      operator delete(v28);
    if ( v11[3] )
    {
      v36 = (unsigned __int64)v11;
      v32 = 0LL;
      v33 = v11;
      std::_Hash<std::_Umap_traits<unsigned __int64,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>,0>>::emplace<unsigned __int64 &,AudioStateMonitor *>(
        (float *)this + 14,
        (__int64)v34,
        &v36,
        &v33);
      *a5 = v36;
      v12 = 0;
      goto LABEL_36;
    }
    v15 = 104LL;
    goto LABEL_33;
  }
  v12 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x50,
    (int)"avcore\\audiocore\\server\\audiosrv\\audiostatemonitormanager\\audiostatemonitormanager.cpp",
    (const char *)0x8007000ELL);
LABEL_36:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v31);
  return v12;
}
