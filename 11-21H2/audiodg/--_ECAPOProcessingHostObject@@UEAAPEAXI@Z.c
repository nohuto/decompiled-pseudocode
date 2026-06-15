/*
 * XREFs of ??_ECAPOProcessingHostObject@@UEAAPEAXI@Z @ 0x14001DCB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAPOProcessingHostObject@@UEAA@XZ @ 0x14001DC0C (--1CAPOProcessingHostObject@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 */

CAPOProcessingHostObject *__fastcall CAPOProcessingHostObject::`vector deleting destructor'(
        CAPOProcessingHostObject *this,
        char a2)
{
  CAPOProcessingHostObject::~CAPOProcessingHostObject(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
