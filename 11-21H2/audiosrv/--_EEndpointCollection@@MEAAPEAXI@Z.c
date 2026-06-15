/*
 * XREFs of ??_EEndpointCollection@@MEAAPEAXI@Z @ 0x18015D194
 * Callers:
 *     ??_EEndpointCollection@@O7EAAPEAXI@Z @ 0x18006C460 (--_EEndpointCollection@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1EndpointCollection@@MEAA@XZ @ 0x18015D0D4 (--1EndpointCollection@@MEAA@XZ.c)
 */

EndpointCollection *__fastcall EndpointCollection::`vector deleting destructor'(EndpointCollection *this, char a2)
{
  EndpointCollection::~EndpointCollection(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
