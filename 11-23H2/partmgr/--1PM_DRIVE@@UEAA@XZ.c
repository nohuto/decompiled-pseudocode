/*
 * XREFs of ??1PM_DRIVE@@UEAA@XZ @ 0x1C0027DD4
 * Callers:
 *     ??_GPM_DRIVE@@UEAAPEAXI@Z @ 0x1C0010080 (--_GPM_DRIVE@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1SC_DRIVE@@UEAA@XZ @ 0x1C0006FDC (--1SC_DRIVE@@UEAA@XZ.c)
 */

void __fastcall PM_DRIVE::~PM_DRIVE(PM_DRIVE *this)
{
  *(_QWORD *)this = &PM_DRIVE::`vftable';
  SC_DRIVE::~SC_DRIVE(this);
}
