/*
 * XREFs of ??_GCMuteHardware@@EEAAPEAXI@Z @ 0x180110AA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     ??1CMuteHardware@@EEAA@XZ @ 0x1801109B8 (--1CMuteHardware@@EEAA@XZ.c)
 */

CMuteHardware *__fastcall CMuteHardware::`scalar deleting destructor'(CMuteHardware *this, char a2)
{
  CMuteHardware::~CMuteHardware(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
