/*
 * XREFs of sub_180070EDC @ 0x180070EDC
 * Callers:
 *     sub_180070E90 @ 0x180070E90 (sub_180070E90.c)
 *     sub_180070EDC @ 0x180070EDC (sub_180070EDC.c)
 * Callees:
 *     sub_18003E330 @ 0x18003E330 (sub_18003E330.c)
 *     sub_180070C2C @ 0x180070C2C (sub_180070C2C.c)
 *     sub_180070EDC @ 0x180070EDC (sub_180070EDC.c)
 */

char __fastcall sub_180070EDC(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4)
{
  _QWORD *v7; // rbx
  __int64 v8; // rax
  _QWORD *v9; // rdx
  _QWORD *v10; // rbp
  _QWORD *i; // rbx
  int v13; // [rsp+20h] [rbp-18h]
  _QWORD *v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = (_QWORD *)a2;
  v7 = (_QWORD *)a2;
  sub_18003E330(a2);
  v8 = v7[56] & a3[66];
  if ( v8 == a3[65] )
  {
    sub_18003E330((__int64)v7);
    if ( (v7[56] & a3[64]) == a3[63] )
    {
      v9 = (_QWORD *)a4[1];
      if ( v9 == (_QWORD *)a4[2] )
      {
        sub_180070C2C(a4, (__int64)v9, &v14);
        v7 = v14;
      }
      else
      {
        *v9 = v7;
        a4[1] += 8LL;
      }
    }
    LOBYTE(v8) = sub_18003E330((__int64)v7);
    v10 = (_QWORD *)v7[5];
    for ( i = (_QWORD *)v7[4]; i != v10; i += 2 )
      LOBYTE(v8) = sub_180070EDC(a1, *i, a3, a4, v13);
  }
  return v8;
}
