/*
 * XREFs of ??1?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@QEAA@XZ @ 0x180015A18
 * Callers:
 *     _AudioStateMonitorManager::RegisterAudioStateMonitor_::_1_::dtor$1 @ 0x180049E0E (_AudioStateMonitorManager--RegisterAudioStateMonitor_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016C28 (--3@YAXPEAX_K@Z.c)
 *     ??1AudioStateMonitor@@QEAA@XZ @ 0x180024EB4 (--1AudioStateMonitor@@QEAA@XZ.c)
 */

void __fastcall wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>::~unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>(
        AudioStateMonitor **a1)
{
  AudioStateMonitor *v1; // rbx

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    AudioStateMonitor::~AudioStateMonitor(v1);
    operator delete(v1, 0x20uLL);
  }
}
