/*
 * XREFs of KeFreeCalloutStack @ 0x14080BB20
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A0B28 @ 0x1403A0B28 (sub_1403A0B28.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall KeFreeCalloutStack(_BYTE *P)
{
  __int64 v1; // rdi
  unsigned int i; // ebp

  v1 = 0LL;
  for ( i = P[4] != 0; (unsigned int)v1 < (unsigned __int8)P[5]; v1 = (unsigned int)(v1 + 1) )
  {
    sub_1403A0B28(*(_QWORD *)&P[8 * v1 + 64], i);
    *(_QWORD *)&P[8 * v1 + 64] = (char *)MmBadPointer + 4096;
  }
  ExFreePoolWithTag(P, 0);
}
