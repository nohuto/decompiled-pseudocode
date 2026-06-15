/*
 * XREFs of ??_GCMeterHardware@@EEAAPEAXI@Z @ 0x18004A820
 * Callers:
 *     <none>
 * Callees:
 *     ??1CMeterHardware@@EEAA@XZ @ 0x180020E24 (--1CMeterHardware@@EEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 */

CMeterHardware *__fastcall CMeterHardware::`scalar deleting destructor'(CMeterHardware *this, char a2)
{
  CMeterHardware::~CMeterHardware(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x30uLL);
  return this;
}
