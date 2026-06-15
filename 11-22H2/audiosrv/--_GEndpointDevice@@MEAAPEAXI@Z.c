/*
 * XREFs of ??_GEndpointDevice@@MEAAPEAXI@Z @ 0x180006670
 * Callers:
 *     ??_EEndpointDevice@@O7EAAPEAXI@Z @ 0x180077F20 (--_EEndpointDevice@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??1EndpointDevice@@MEAA@XZ @ 0x1800066AC (--1EndpointDevice@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 */

EndpointDevice *__fastcall EndpointDevice::`scalar deleting destructor'(EndpointDevice *this, char a2)
{
  EndpointDevice::~EndpointDevice(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xB8uLL);
  return this;
}
