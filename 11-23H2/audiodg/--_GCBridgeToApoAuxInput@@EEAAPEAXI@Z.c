/*
 * XREFs of ??_GCBridgeToApoAuxInput@@EEAAPEAXI@Z @ 0x14004F250
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     ??1CBridgeToApoAuxInput@@EEAA@XZ @ 0x14004F148 (--1CBridgeToApoAuxInput@@EEAA@XZ.c)
 */

CBridgeToApoAuxInput *__fastcall CBridgeToApoAuxInput::`scalar deleting destructor'(
        CBridgeToApoAuxInput *this,
        char a2)
{
  CBridgeToApoAuxInput::~CBridgeToApoAuxInput(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
