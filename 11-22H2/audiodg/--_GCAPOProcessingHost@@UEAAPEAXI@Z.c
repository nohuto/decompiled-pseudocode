/*
 * XREFs of ??_GCAPOProcessingHost@@UEAAPEAXI@Z @ 0x14006BF00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     ??1CAPOProcessingHost@@UEAA@XZ @ 0x14006BBB4 (--1CAPOProcessingHost@@UEAA@XZ.c)
 */

CAPOProcessingHost *__fastcall CAPOProcessingHost::`scalar deleting destructor'(CAPOProcessingHost *this, char a2)
{
  CAPOProcessingHost::~CAPOProcessingHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
