/*
 * XREFs of ??_GPM_DRIVE@@UEAAPEAXI@Z @ 0x1C0010080
 * Callers:
 *     <none>
 * Callees:
 *     ??1PM_DRIVE@@UEAA@XZ @ 0x1C0027DD4 (--1PM_DRIVE@@UEAA@XZ.c)
 */

PM_DRIVE *__fastcall PM_DRIVE::`scalar deleting destructor'(PM_DRIVE *P, char a2)
{
  PM_DRIVE::~PM_DRIVE(P);
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(P, 0);
  return P;
}
