/*
 * XREFs of sub_1408449C8 @ 0x1408449C8
 * Callers:
 *     sub_140B1B1D0 @ 0x140B1B1D0 (sub_140B1B1D0.c)
 * Callees:
 *     sub_140779850 @ 0x140779850 (sub_140779850.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1408449C8(int a1)
{
  unsigned int v1; // ebx
  PVOID P[2]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)P = 0LL;
  HIDWORD(P[1]) = a1;
  v1 = sub_140779850(qword_140008500[5 * a1], (__int64)sub_14083F090, (__int64)P);
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0x5A706E50u);
  return v1;
}
