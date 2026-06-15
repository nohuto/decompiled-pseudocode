/*
 * XREFs of ??_GAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAPEAXI@Z @ 0x140022660
 * Callers:
 *     <none>
 * Callees:
 *     ??1AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAA@XZ @ 0x1400224FC (--1AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 */

Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *__fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::`scalar deleting destructor'(
        Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *this,
        char a2)
{
  Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::~AudioDeviceBrokerDevice(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
