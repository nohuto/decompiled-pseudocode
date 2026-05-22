/*
 * XREFs of ??_EConsumerControlNexusDevice@@EEAAPEAXI@Z @ 0x1800D3690
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180021504 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1ConsumerControlNexusDevice@@EEAA@XZ @ 0x1800D3570 (--1ConsumerControlNexusDevice@@EEAA@XZ.c)
 */

ConsumerControlNexusDevice *__fastcall ConsumerControlNexusDevice::`vector deleting destructor'(
        ConsumerControlNexusDevice *this,
        char a2)
{
  ConsumerControlNexusDevice::~ConsumerControlNexusDevice(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
