/*
 * XREFs of ??_GDeviceInputHost@@UEAAPEAXI@Z @ 0x180097144
 * Callers:
 *     ??_EDeviceInputHost@@W7EAAPEAXI@Z @ 0x180065A70 (--_EDeviceInputHost@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002A1C4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1DeviceInputHost@@UEAA@XZ @ 0x1800970BC (--1DeviceInputHost@@UEAA@XZ.c)
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
