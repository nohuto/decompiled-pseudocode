/*
 * XREFs of ??_GEndpointIterator@@MEAAPEAXI@Z @ 0x18015D1D0
 * Callers:
 *     ??_EEndpointIterator@@O7EAAPEAXI@Z @ 0x18006C480 (--_EEndpointIterator@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1EndpointIterator@@MEAA@XZ @ 0x18015D124 (--1EndpointIterator@@MEAA@XZ.c)
 */

EndpointIterator *__fastcall EndpointIterator::`scalar deleting destructor'(EndpointIterator *this, char a2)
{
  EndpointIterator::~EndpointIterator(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
