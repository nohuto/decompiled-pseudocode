/*
 * XREFs of ??_EPM_DISK@@UEAAPEAXI@Z @ 0x1C000E460
 * Callers:
 *     <none>
 * Callees:
 *     ??1PM_DISK@@UEAA@XZ @ 0x1C00215C8 (--1PM_DISK@@UEAA@XZ.c)
 */

PM_DISK *__fastcall PM_DISK::`vector deleting destructor'(PM_DISK *P, char a2)
{
  PM_DISK::~PM_DISK(P);
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(P, 0);
  return P;
}
