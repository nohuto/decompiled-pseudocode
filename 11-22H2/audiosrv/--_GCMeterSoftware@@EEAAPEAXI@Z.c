/*
 * XREFs of ??_GCMeterSoftware@@EEAAPEAXI@Z @ 0x18012A670
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ??1CMeterSoftware@@EEAA@XZ @ 0x18012A620 (--1CMeterSoftware@@EEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall CMeterSoftware::`scalar deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this,
        char a2)
{
  CMeterSoftware::~CMeterSoftware(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
