/*
 * XREFs of ??1AudioStateMonitor@@QEAA@XZ @ 0x180014EF4
 * Callers:
 *     ??1?$list@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@V?$allocator@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@2@@std@@QEAA@XZ @ 0x180014BD4 (--1-$list@U-$pair@$$CB_KV-$unique_ptr@UAudioStateMonitor@@U-$default_delete@UAudioStateMonitor@@.c)
 *     ??1?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@QEAA@XZ @ 0x180014D88 (--1-$unique_ptr@UAudioStateMonitor@@U-$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@QEAA@X.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@1@V21@@Z @ 0x1800396C4 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CB_KV-$unique_ptr@UAudio.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800397B8 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CB_KV-$unique_ptr@UAudioStateMo.c)
 *     ?RegisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x1800399B0 (-RegisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STRE.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AudioStateMonitor::~AudioStateMonitor(AudioStateMonitor *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx

  v2 = (void *)*((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = 0LL;
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_QWORD *)this + 2);
  if ( v3 )
    CoTaskMemFree(v3);
  v4 = (void *)*((_QWORD *)this + 1);
  *((_QWORD *)this + 1) = 0LL;
  if ( v4 )
    operator delete(v4);
  v5 = *(void **)this;
  *(_QWORD *)this = 0LL;
  if ( v5 )
    operator delete(v5);
}
