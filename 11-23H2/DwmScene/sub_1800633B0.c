/*
 * XREFs of sub_1800633B0 @ 0x1800633B0
 * Callers:
 *     sub_180064EF0 @ 0x180064EF0 (sub_180064EF0.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_18001EA34 @ 0x18001EA34 (sub_18001EA34.c)
 *     sub_18002F250 @ 0x18002F250 (sub_18002F250.c)
 *     sub_180042B30 @ 0x180042B30 (sub_180042B30.c)
 *     sub_180062C58 @ 0x180062C58 (sub_180062C58.c)
 *     sub_1800640AC @ 0x1800640AC (sub_1800640AC.c)
 *     sub_18006E4EC @ 0x18006E4EC (sub_18006E4EC.c)
 *     sub_18006E520 @ 0x18006E520 (sub_18006E520.c)
 *     sub_18006EAEC @ 0x18006EAEC (sub_18006EAEC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800633B0(_QWORD *a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rbp
  unsigned __int64 v8; // rax
  _QWORD *v9; // r15
  _QWORD *v11; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v12; // [rsp+28h] [rbp-30h]
  __int64 v13[5]; // [rsp+30h] [rbp-28h] BYREF

  v6 = (__int64)a3;
  if ( (unsigned __int64)a3[3] >= 8 )
    v6 = *a3;
  v7 = sub_18001EA34(v6, a3[2]);
  sub_180062C58(a1, v13, a3, v7);
  if ( v13[1] )
  {
    *(_QWORD *)a2 = v13[1];
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    sub_18006E4EC(a1);
    v11 = a1 + 1;
    v8 = sub_18002F250(1uLL);
    v9 = (_QWORD *)sub_18001090C(v8);
    v12 = v9;
    v9[2] = 0LL;
    v9[4] = 0LL;
    v9[5] = 0LL;
    *((_OWORD *)v9 + 1) = *(_OWORD *)a3;
    *((_OWORD *)v9 + 2) = *((_OWORD *)a3 + 1);
    a3[2] = 0LL;
    a3[3] = 7LL;
    *(_WORD *)a3 = 0;
    if ( (unsigned __int8)sub_18006E520(a1) )
    {
      sub_18006EAEC(a1);
      *(_OWORD *)v13 = *(_OWORD *)sub_180062C58(a1, v13, v9 + 2, v7);
    }
    v12 = 0LL;
    *(_QWORD *)a2 = sub_180042B30(a1, v7, v13[0], v9);
    *(_BYTE *)(a2 + 8) = 1;
    sub_1800640AC(&v11);
  }
  return a2;
}
