/*
 * XREFs of ??_GCAPOProcessingHost@@UEAAPEAXI@Z @ 0x140065100
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 *     ??1CAPOProcessingHost@@UEAA@XZ @ 0x140064DF8 (--1CAPOProcessingHost@@UEAA@XZ.c)
 */

CAPOProcessingHost *__fastcall CAPOProcessingHost::`scalar deleting destructor'(CAPOProcessingHost *this, char a2)
{
  CAPOProcessingHost::~CAPOProcessingHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
