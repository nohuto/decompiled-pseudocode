/*
 * XREFs of PiDmListInit @ 0x1408449C8
 * Callers:
 *     PiDmInit @ 0x140B1B1D0 (PiDmInit.c)
 * Callees:
 *     PiDmEnumObjectsWithCallback @ 0x140779850 (PiDmEnumObjectsWithCallback.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDmListInit(int a1)
{
  unsigned int v1; // ebx
  PVOID P[2]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)P = 0LL;
  HIDWORD(P[1]) = a1;
  v1 = PiDmEnumObjectsWithCallback(
         qword_140008500[5 * a1],
         (__int64 (__fastcall *)(void *, __int64, _BYTE *))PiDmListInitEnumCallback,
         (__int64)P);
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0x5A706E50u);
  return v1;
}
