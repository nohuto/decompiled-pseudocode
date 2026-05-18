/*
 * XREFs of sub_1800CB584 @ 0x1800CB584
 * Callers:
 *     sub_1800CA57C @ 0x1800CA57C (sub_1800CA57C.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_18001D3F8 @ 0x18001D3F8 (sub_18001D3F8.c)
 *     sub_180028C50 @ 0x180028C50 (sub_180028C50.c)
 *     sub_18002EB00 @ 0x18002EB00 (sub_18002EB00.c)
 */

_QWORD *__fastcall sub_1800CB584(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rdi
  __int64 v6; // r10
  __int64 v10; // r10
  __int64 v11; // r10
  __int64 *v12; // rax
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v4 = (_QWORD *)*a1;
  v6 = a3;
  v13 = a3;
  if ( a3 == *v4 && *(_BYTE *)(a4 + 25) )
  {
    sub_18002EB00((__int64)a1, (__int64)a1, v4[1]);
    v4[1] = v4;
    *v4 = v4;
    v4[2] = v4;
    a1[1] = 0LL;
  }
  else
  {
    while ( v6 != a4 )
    {
      sub_18001D3F8(&v13);
      v14 = v10;
      sub_18001D3F8(&v14);
      v12 = sub_180028C50(a1, v11);
      sub_1800100E8(v12, 0x30uLL);
      v6 = v13;
    }
  }
  *a2 = a4;
  return a2;
}
