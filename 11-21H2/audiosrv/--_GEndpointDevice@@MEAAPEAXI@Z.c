/*
 * XREFs of ??_GEndpointDevice@@MEAAPEAXI@Z @ 0x18015DBAC
 * Callers:
 *     ??_EEndpointDevice@@O7EAAPEAXI@Z @ 0x18006C4E0 (--_EEndpointDevice@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1EndpointDevice@@MEAA@XZ @ 0x18015DAA0 (--1EndpointDevice@@MEAA@XZ.c)
 */

EndpointDevice *__fastcall EndpointDevice::`scalar deleting destructor'(EndpointDevice *this, char a2)
{
  EndpointDevice::~EndpointDevice(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
