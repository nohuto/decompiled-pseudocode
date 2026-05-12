/*
 * XREFs of ??_GSC_DEVICE@@UEAAPEAXI@Z @ 0x1C00117B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SC_DEVICE@@UEAA@XZ @ 0x1C0009718 (--1SC_DEVICE@@UEAA@XZ.c)
 */

SC_DEVICE *__fastcall SC_DEVICE::`scalar deleting destructor'(SC_DEVICE *P, char a2)
{
  SC_DEVICE::~SC_DEVICE(P);
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(P, 0);
  return P;
}
