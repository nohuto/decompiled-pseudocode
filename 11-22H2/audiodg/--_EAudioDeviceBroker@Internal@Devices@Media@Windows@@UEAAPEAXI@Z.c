/*
 * XREFs of ??_EAudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAPEAXI@Z @ 0x140081CF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     ??1AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAA@XZ @ 0x140080750 (--1AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAA@XZ.c)
 */

Windows::Media::Devices::Internal::AudioDeviceBroker *__fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::`vector deleting destructor'(
        Windows::Media::Devices::Internal::AudioDeviceBroker *this,
        volatile int *a2)
{
  char v2; // bl

  v2 = (char)a2;
  Windows::Media::Devices::Internal::AudioDeviceBroker::~AudioDeviceBroker(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this);
  return this;
}
