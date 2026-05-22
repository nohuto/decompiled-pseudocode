/*
 * XREFs of ??_GConsumerControlGenericDevice@@EEAAPEAXI@Z @ 0x1800FD5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002BAE4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1ConsumerControlGenericDevice@@EEAA@XZ @ 0x1800FD550 (--1ConsumerControlGenericDevice@@EEAA@XZ.c)
 */

HSTRING *__fastcall ConsumerControlGenericDevice::`scalar deleting destructor'(HSTRING *this, char a2)
{
  ConsumerControlGenericDevice::~ConsumerControlGenericDevice(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
