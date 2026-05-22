/*
 * XREFs of ??_GDeviceInputHost@@UEAAPEAXI@Z @ 0x1800801E0
 * Callers:
 *     ??_EDeviceInputHost@@W7EAAPEAXI@Z @ 0x18004EAE0 (--_EDeviceInputHost@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180021504 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1DeviceInputHost@@UEAA@XZ @ 0x180080158 (--1DeviceInputHost@@UEAA@XZ.c)
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
