/*
 * XREFs of sub_140678A28 @ 0x140678A28
 * Callers:
 *     sub_140207100 @ 0x140207100 (sub_140207100.c)
 *     sub_1406D4808 @ 0x1406D4808 (sub_1406D4808.c)
 * Callees:
 *     sub_140207478 @ 0x140207478 (sub_140207478.c)
 *     sub_1406D4EFC @ 0x1406D4EFC (sub_1406D4EFC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140678A28(__int64 a1)
{
  unsigned int v1; // edi
  PVOID v3; // rbx
  __int64 v5; // rax
  PVOID P[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  if ( *(_QWORD *)(a1 + 1632) )
  {
    sub_1406D4EFC(a1 + 1592);
    v1 = 1;
  }
  P[1] = P;
  P[0] = P;
  sub_140207478(a1, (__int64)P);
  while ( 1 )
  {
    v3 = P[0];
    if ( P[0] == P )
      break;
    if ( *((PVOID **)P[0] + 1) != P || (v5 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
      __fastfail(3u);
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v5 + 8) = P;
    sub_1406D4EFC(v3);
    ExFreePoolWithTag(v3, 0);
    ++v1;
  }
  return v1;
}
