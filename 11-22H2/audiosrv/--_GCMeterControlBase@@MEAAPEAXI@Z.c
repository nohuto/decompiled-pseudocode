/*
 * XREFs of ??_GCMeterControlBase@@MEAAPEAXI@Z @ 0x18010FD60
 * Callers:
 *     <none>
 * Callees:
 *     ??1CMeterControlBase@@MEAA@XZ @ 0x180020E5C (--1CMeterControlBase@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 */

CMeterControlBase *__fastcall CMeterControlBase::`scalar deleting destructor'(CMeterControlBase *this, char a2)
{
  CMeterControlBase::~CMeterControlBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
