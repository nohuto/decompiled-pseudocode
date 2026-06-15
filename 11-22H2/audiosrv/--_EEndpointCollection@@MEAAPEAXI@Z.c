/*
 * XREFs of ??_EEndpointCollection@@MEAAPEAXI@Z @ 0x18016389C
 * Callers:
 *     ??_EEndpointCollection@@O7EAAPEAXI@Z @ 0x180077E60 (--_EEndpointCollection@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ??1EndpointCollection@@MEAA@XZ @ 0x18016384C (--1EndpointCollection@@MEAA@XZ.c)
 */

EndpointCollection *__fastcall EndpointCollection::`vector deleting destructor'(EndpointCollection *this, char a2)
{
  EndpointCollection::~EndpointCollection(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
