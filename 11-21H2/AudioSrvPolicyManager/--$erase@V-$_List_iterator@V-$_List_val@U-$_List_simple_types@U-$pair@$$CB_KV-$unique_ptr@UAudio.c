/*
 * XREFs of ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@1@V21@@Z @ 0x1800396C4
 * Callers:
 *     ?UnregisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEA_K@Z @ 0x180039DF0 (-UnregisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEA_K@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1AudioStateMonitor@@QEAA@XZ @ 0x180014EF4 (--1AudioStateMonitor@@QEAA@XZ.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned __int64,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>>>,0>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v5; // r8
  unsigned __int64 i; // r9
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rsi
  AudioStateMonitor *v13; // rdi
  _QWORD *result; // rax

  v5 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
  {
    v8 = *((unsigned __int8 *)a3 + i + 16);
    v5 = 0x100000001B3LL * (v8 ^ v5);
  }
  v9 = a1[3];
  v10 = 2 * (v5 & a1[6]);
  if ( *(__int64 **)(v9 + 16 * (v5 & a1[6]) + 8) == a3 )
  {
    if ( *(__int64 **)(v9 + 16 * (v5 & a1[6])) == a3 )
    {
      v11 = a1[1];
      *(_QWORD *)(v9 + 16 * (v5 & a1[6])) = v11;
    }
    else
    {
      v11 = a3[1];
    }
    *(_QWORD *)(v9 + 8 * v10 + 8) = v11;
  }
  else if ( *(__int64 **)(v9 + 16 * (v5 & a1[6])) == a3 )
  {
    *(_QWORD *)(v9 + 16 * (v5 & a1[6])) = *a3;
  }
  v12 = *a3;
  --a1[2];
  *(_QWORD *)a3[1] = v12;
  *(_QWORD *)(v12 + 8) = a3[1];
  v13 = (AudioStateMonitor *)a3[3];
  a3[3] = 0LL;
  if ( v13 )
  {
    AudioStateMonitor::~AudioStateMonitor(v13);
    operator delete(v13);
  }
  std::_Deallocate<16,0>((char *)a3, 0x20uLL);
  result = a2;
  *a2 = v12;
  return result;
}
