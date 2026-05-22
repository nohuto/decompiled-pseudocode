/*
 * XREFs of ??_EHIDDeviceCollection@@UEAAPEAXI@Z @ 0x1800CB8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180021504 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1HIDDeviceCollection@@UEAA@XZ @ 0x1800CB890 (--1HIDDeviceCollection@@UEAA@XZ.c)
 */

HIDDeviceCollection *__fastcall HIDDeviceCollection::`vector deleting destructor'(HIDDeviceCollection *this, char a2)
{
  HIDDeviceCollection::~HIDDeviceCollection(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
