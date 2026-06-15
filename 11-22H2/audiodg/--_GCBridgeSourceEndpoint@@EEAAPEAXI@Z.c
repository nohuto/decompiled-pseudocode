/*
 * XREFs of ??_GCBridgeSourceEndpoint@@EEAAPEAXI@Z @ 0x140079630
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     ??1CBridgeSourceEndpoint@@EEAA@XZ @ 0x140079484 (--1CBridgeSourceEndpoint@@EEAA@XZ.c)
 */

CBridgeSourceEndpoint *__fastcall CBridgeSourceEndpoint::`scalar deleting destructor'(
        CBridgeSourceEndpoint *this,
        char a2)
{
  CBridgeSourceEndpoint::~CBridgeSourceEndpoint(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
