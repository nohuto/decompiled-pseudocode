/*
 * XREFs of ??_GAudioDeviceModule@Devices@Media@Windows@@MEAAPEAXI@Z @ 0x140081D20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     ??1AudioDeviceModule@Devices@Media@Windows@@MEAA@XZ @ 0x140080A30 (--1AudioDeviceModule@Devices@Media@Windows@@MEAA@XZ.c)
 */

Windows::Media::Devices::AudioDeviceModule *__fastcall Windows::Media::Devices::AudioDeviceModule::`scalar deleting destructor'(
        Windows::Media::Devices::AudioDeviceModule *this,
        char a2)
{
  Windows::Media::Devices::AudioDeviceModule::~AudioDeviceModule(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
