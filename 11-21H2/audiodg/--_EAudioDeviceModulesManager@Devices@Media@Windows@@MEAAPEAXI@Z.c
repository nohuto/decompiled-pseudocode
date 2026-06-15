/*
 * XREFs of ??_EAudioDeviceModulesManager@Devices@Media@Windows@@MEAAPEAXI@Z @ 0x14002A460
 * Callers:
 *     <none>
 * Callees:
 *     ??1AudioDeviceModulesManager@Devices@Media@Windows@@MEAA@XZ @ 0x14002A49C (--1AudioDeviceModulesManager@Devices@Media@Windows@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 */

Windows::Media::Devices::AudioDeviceModulesManager *__fastcall Windows::Media::Devices::AudioDeviceModulesManager::`vector deleting destructor'(
        Windows::Media::Devices::AudioDeviceModulesManager *this,
        char a2)
{
  Windows::Media::Devices::AudioDeviceModulesManager::~AudioDeviceModulesManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
