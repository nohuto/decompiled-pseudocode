/*
 * XREFs of sub_1405B2670 @ 0x1405B2670
 * Callers:
 *     sub_1405B25B4 @ 0x1405B25B4 (sub_1405B25B4.c)
 * Callees:
 *     sub_14023FD0C @ 0x14023FD0C (sub_14023FD0C.c)
 *     sub_140246E70 @ 0x140246E70 (sub_140246E70.c)
 *     sub_140268284 @ 0x140268284 (sub_140268284.c)
 *     sub_1403C6CDC @ 0x1403C6CDC (sub_1403C6CDC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1405B2670(_QWORD *P)
{
  void *v2; // rcx
  _QWORD *v3; // rsi
  __int64 i; // rdi
  _QWORD *v5; // rbp
  __int64 v6; // rcx

  v2 = (void *)P[38];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v3 = (_QWORD *)P[18];
  if ( v3 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)P + 39); i = (unsigned int)(i + 1) )
    {
      v5 = (_QWORD *)v3[5 * i + 1];
      if ( v5 )
      {
        sub_140246E70(v3[5 * i + 1]);
        sub_140268284((__int64)(v5 + 11));
        sub_1403C6CDC((__int64)v5);
        v6 = v5[30];
        if ( v6 )
          sub_14023FD0C(v6, 1);
        ExFreePoolWithTag(v5, 0);
      }
    }
    ExFreePoolWithTag(v3, 0);
  }
  ExFreePoolWithTag(P, 0);
}
