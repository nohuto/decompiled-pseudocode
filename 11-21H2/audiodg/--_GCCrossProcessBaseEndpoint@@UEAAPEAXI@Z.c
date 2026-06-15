/*
 * XREFs of ??_GCCrossProcessBaseEndpoint@@UEAAPEAXI@Z @ 0x1400839E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCrossProcessBaseEndpoint@@UEAA@XZ @ 0x140021BE0 (--1CCrossProcessBaseEndpoint@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 */

CCrossProcessBaseEndpoint *__fastcall CCrossProcessBaseEndpoint::`scalar deleting destructor'(
        CCrossProcessBaseEndpoint *this,
        char a2)
{
  CCrossProcessBaseEndpoint::~CCrossProcessBaseEndpoint(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
