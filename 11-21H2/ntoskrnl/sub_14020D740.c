/*
 * XREFs of sub_14020D740 @ 0x14020D740
 * Callers:
 *     sub_140314BA0 @ 0x140314BA0 (sub_140314BA0.c)
 *     sub_1405B5BA0 @ 0x1405B5BA0 (sub_1405B5BA0.c)
 *     sub_1407F8FE0 @ 0x1407F8FE0 (sub_1407F8FE0.c)
 * Callees:
 *     sub_14020D86C @ 0x14020D86C (sub_14020D86C.c)
 */

__int64 __fastcall sub_14020D740(__int64 a1, __int64 a2, int a3, unsigned __int64 *a4)
{
  __int64 v6; // r8
  unsigned int v7; // esi
  unsigned __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // r9

  v7 = 1;
  v8 = 0xDE5DF13F878608F5uLL;
  v9 = 512;
  do
  {
    v10 = (unsigned int)(v9 - 8);
    v6 = (__int64)(*(_QWORD *)(a2 + 56) << 25) >> 16;
    v8 = *(_QWORD *)(v6 + 8 * v10)
       + __ROR8__(
           *(_QWORD *)(v6 + 8LL * (unsigned int)(v9 - 7))
         + __ROR8__(
             *(_QWORD *)(v6 + 8LL * (unsigned int)(v9 - 6))
           + __ROR8__(
               *(_QWORD *)(v6 + 8LL * (unsigned int)(v9 - 5)) ^ __ROR8__(
                                                                  *(_QWORD *)(v6 + 8LL * (unsigned int)(v9 - 4))
                                                                + __ROR8__(
                                                                    *(_QWORD *)(v6 + 8LL * (unsigned int)(v9 - 3))
                                                                  + __ROR8__(
                                                                      *(_QWORD *)(v6 + 8LL * (unsigned int)(v9 - 2))
                                                                    + __ROR8__(
                                                                        *(_QWORD *)(v6 + 8LL * (unsigned int)(v9 - 1))
                                                                      + __ROR8__(v8, 2),
                                                                        3),
                                                                      5),
                                                                    7),
                                                                  11),
               13),
             17),
           19);
    v9 -= 8;
  }
  while ( (_DWORD)v10 );
  if ( a3 && !(unsigned int)sub_14020D86C(a1, v8) )
    v7 = 0;
  *a4 = v8;
  return v7;
}
