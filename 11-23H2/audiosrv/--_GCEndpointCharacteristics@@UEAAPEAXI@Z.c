/*
 * XREFs of ??_GCEndpointCharacteristics@@UEAAPEAXI@Z @ 0x180005540
 * Callers:
 *     <none>
 * Callees:
 *     ??1CEndpointCharacteristics@@UEAA@XZ @ 0x18000557C (--1CEndpointCharacteristics@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 */

CEndpointCharacteristics *__fastcall CEndpointCharacteristics::`scalar deleting destructor'(
        CEndpointCharacteristics *this,
        char a2)
{
  CEndpointCharacteristics::~CEndpointCharacteristics(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x2070uLL);
  return this;
}
