/*
 * XREFs of ??_GCMeterControlBase@@MEAAPEAXI@Z @ 0x1800C93A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CMeterControlBase@@MEAA@XZ @ 0x18004B7C0 (--1CMeterControlBase@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 */

CMeterControlBase *__fastcall CMeterControlBase::`scalar deleting destructor'(CMeterControlBase *this, char a2)
{
  CMeterControlBase::~CMeterControlBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
