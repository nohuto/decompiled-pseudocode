/*
 * XREFs of ??_GCEndpointCharacteristics@@UEAAPEAXI@Z @ 0x180144BC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1CEndpointCharacteristics@@UEAA@XZ @ 0x18014433C (--1CEndpointCharacteristics@@UEAA@XZ.c)
 */

CEndpointCharacteristics *__fastcall CEndpointCharacteristics::`scalar deleting destructor'(
        CEndpointCharacteristics *this,
        char a2)
{
  CEndpointCharacteristics::~CEndpointCharacteristics(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
