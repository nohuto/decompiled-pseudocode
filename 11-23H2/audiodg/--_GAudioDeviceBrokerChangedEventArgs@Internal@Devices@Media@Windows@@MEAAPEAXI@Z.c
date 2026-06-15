/*
 * XREFs of ??_GAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@MEAAPEAXI@Z @ 0x140081CE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     ??1AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@MEAA@XZ @ 0x140080850 (--1AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@MEAA@XZ.c)
 */

Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *__fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs::`scalar deleting destructor'(
        Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *this,
        char a2)
{
  Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs::~AudioDeviceBrokerChangedEventArgs(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
