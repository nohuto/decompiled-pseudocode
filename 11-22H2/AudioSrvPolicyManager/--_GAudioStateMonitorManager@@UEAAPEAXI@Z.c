/*
 * XREFs of ??_GAudioStateMonitorManager@@UEAAPEAXI@Z @ 0x180025830
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016E18 (--3@YAXPEAX_K@Z.c)
 *     ??1AudioStateMonitorManager@@UEAA@XZ @ 0x180025110 (--1AudioStateMonitorManager@@UEAA@XZ.c)
 */

AudioStateMonitorManager *__fastcall AudioStateMonitorManager::`scalar deleting destructor'(
        AudioStateMonitorManager *this,
        char a2)
{
  AudioStateMonitorManager::~AudioStateMonitorManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
