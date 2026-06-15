/*
 * XREFs of ??_GCMeterHardware@@EEAAPEAXI@Z @ 0x18004B730
 * Callers:
 *     <none>
 * Callees:
 *     ??1CMeterHardware@@EEAA@XZ @ 0x18004B810 (--1CMeterHardware@@EEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 */

CMeterHardware *__fastcall CMeterHardware::`scalar deleting destructor'(CMeterHardware *this, char a2)
{
  CMeterHardware::~CMeterHardware(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x30uLL);
  return this;
}
