/*
 * XREFs of ??1?$list@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@V?$allocator@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@2@@std@@QEAA@XZ @ 0x180014BD4
 * Callers:
 *     ??_GAudioStateMonitorManager@@UEAAPEAXI@Z @ 0x1800154F0 (--_GAudioStateMonitorManager@@UEAAPEAXI@Z.c)
 *     _AudioStateMonitorManager::AudioStateMonitorManager_::_1_::dtor$5 @ 0x1800451C0 (_AudioStateMonitorManager--AudioStateMonitorManager_--_1_--dtor$5.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1AudioStateMonitor@@QEAA@XZ @ 0x180014EF4 (--1AudioStateMonitor@@QEAA@XZ.c)
 */

void __fastcall std::list<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>::~list<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>(
        char **a1)
{
  char *v1; // rdx
  char *v3; // rbx
  AudioStateMonitor *v4; // rdi
  char *v5; // rbp

  v1 = *a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *(char **)v1;
  if ( *(_QWORD *)v1 )
  {
    do
    {
      v4 = (AudioStateMonitor *)*((_QWORD *)v3 + 3);
      v5 = *(char **)v3;
      *((_QWORD *)v3 + 3) = 0LL;
      if ( v4 )
      {
        AudioStateMonitor::~AudioStateMonitor(v4);
        operator delete(v4);
      }
      std::_Deallocate<16,0>(v3, 0x20uLL);
      v3 = v5;
    }
    while ( v5 );
  }
  std::_Deallocate<16,0>(*a1, 0x20uLL);
}
