/*
 * XREFs of sub_1402225D0 @ 0x1402225D0
 * Callers:
 *     sub_140314BA0 @ 0x140314BA0 (sub_140314BA0.c)
 *     sub_1405B5BA0 @ 0x1405B5BA0 (sub_1405B5BA0.c)
 *     sub_140B2D454 @ 0x140B2D454 (sub_140B2D454.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_1402225D0(__int64 a1)
{
  unsigned __int64 result; // rax
  unsigned int i; // r9d
  __int64 v4; // rax
  __int64 v5; // rcx

  result = 0xDE5DF13F878608F5uLL;
  for ( i = 510; i != -2; i -= 8 )
  {
    v4 = *(_QWORD *)(a1 + 8LL * (i - 5))
       + __ROR8__(
           *(_QWORD *)(a1 + 8LL * (i - 4))
         + __ROR8__(
             *(_QWORD *)(a1 + 8LL * (i - 3)) ^ __ROR8__(
                                                 *(_QWORD *)(a1 + 8LL * (i - 2))
                                               + __ROR8__(
                                                   *(_QWORD *)(a1 + 8LL * (i - 1))
                                                 + __ROR8__(
                                                     *(_QWORD *)(a1 + 8LL * i)
                                                   + __ROR8__(*(_QWORD *)(a1 + 8LL * (i + 1)) + __ROR8__(result, 2), 3),
                                                     5),
                                                   7),
                                                 11),
             13),
           17);
    v5 = i - 6;
    result = *(_QWORD *)(a1 + 8 * v5) + __ROR8__(v4, 19);
  }
  return result;
}
