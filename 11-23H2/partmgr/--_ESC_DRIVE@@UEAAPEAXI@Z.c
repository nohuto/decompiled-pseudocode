/*
 * XREFs of ??_ESC_DRIVE@@UEAAPEAXI@Z @ 0x1C0010EC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SC_DRIVE@@UEAA@XZ @ 0x1C0006FDC (--1SC_DRIVE@@UEAA@XZ.c)
 */

SC_DRIVE *__fastcall SC_DRIVE::`vector deleting destructor'(SC_DRIVE *P, char a2)
{
  SC_DRIVE::~SC_DRIVE(P);
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(P, 0);
  return P;
}
