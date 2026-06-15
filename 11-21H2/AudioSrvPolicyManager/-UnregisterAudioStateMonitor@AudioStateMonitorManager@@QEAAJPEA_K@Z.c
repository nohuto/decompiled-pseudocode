/*
 * XREFs of ?UnregisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEA_K@Z @ 0x180039DF0
 * Callers:
 *     ?UnregisterAudioStateMonitor@CProcess@@UEAAJPEA_K@Z @ 0x18001C9D0 (-UnregisterAudioStateMonitor@CProcess@@UEAAJPEA_K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@1@V21@@Z @ 0x1800396C4 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CB_KV-$unique_ptr@UAudio.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioStateMonitorManager::UnregisterAudioStateMonitor(
        AudioStateMonitorManager *this,
        unsigned __int64 *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 v5; // r8
  unsigned __int64 i; // r9
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 *v9; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v5 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
    v5 = 0x100000001B3LL * (*((unsigned __int8 *)a2 + i) ^ (unsigned __int64)v5);
  v7 = 2 * (v5 & *((_QWORD *)this + 13));
  v8 = *((_QWORD *)this + 10);
  v9 = *(__int64 **)(v8 + 16 * (v5 & *((_QWORD *)this + 13)) + 8);
  if ( v9 == *((__int64 **)this + 8) )
    goto LABEL_8;
  while ( *a2 != v9[2] )
  {
    if ( v9 == *(__int64 **)(v8 + 8 * v7) )
      goto LABEL_8;
    v9 = (__int64 *)v9[1];
  }
  if ( !v9 )
LABEL_8:
    v9 = (__int64 *)*((_QWORD *)this + 8);
  if ( v9 == *((__int64 **)this + 8) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x75,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\audiostatemonitormanager\\audiostatemonitormanager.cpp",
      (const char *)0x80070490LL);
    if ( v4 )
      LeaveCriticalSection(v4);
    return 2147943568LL;
  }
  else
  {
    std::_Hash<std::_Umap_traits<unsigned __int64,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>>>,0>(
      (_QWORD *)this + 7,
      &v12,
      v9);
    *a2 = 0LL;
    if ( v4 )
      LeaveCriticalSection(v4);
    return 0LL;
  }
}
