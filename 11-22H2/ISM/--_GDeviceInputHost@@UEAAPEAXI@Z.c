/*
 * XREFs of ??_GDeviceInputHost@@UEAAPEAXI@Z @ 0x1800A97E4
 * Callers:
 *     ??_EDeviceInputHost@@W7EAAPEAXI@Z @ 0x1800794F0 (--_EDeviceInputHost@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002BAE4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1DeviceInputHost@@UEAA@XZ @ 0x1800A975C (--1DeviceInputHost@@UEAA@XZ.c)
 */

DeviceInputHost *__fastcall DeviceInputHost::`scalar deleting destructor'(DeviceInputHost *this, char a2)
{
  DeviceInputHost::~DeviceInputHost(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
