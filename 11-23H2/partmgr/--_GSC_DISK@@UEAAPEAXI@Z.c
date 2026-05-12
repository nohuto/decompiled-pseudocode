/*
 * XREFs of ??_GSC_DISK@@UEAAPEAXI@Z @ 0x1C00109F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SC_DISK@@UEAA@XZ @ 0x1C0009618 (--1SC_DISK@@UEAA@XZ.c)
 */

SC_DISK *__fastcall SC_DISK::`scalar deleting destructor'(SC_DISK *P, char a2)
{
  SC_DISK::~SC_DISK(P);
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(P, 0);
  return P;
}
