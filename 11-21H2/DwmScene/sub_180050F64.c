/*
 * XREFs of sub_180050F64 @ 0x180050F64
 * Callers:
 *     sub_180050C00 @ 0x180050C00 (sub_180050C00.c)
 *     sub_1800535FC @ 0x1800535FC (sub_1800535FC.c)
 * Callees:
 *     memset @ 0x18000C0CC (memset.c)
 *     sub_180050B9C @ 0x180050B9C (sub_180050B9C.c)
 */

_QWORD *__fastcall sub_180050F64(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rsi
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx

  v2 = a2;
  v3 = a1;
  if ( a2 )
  {
    v4 = a1 + 6;
    do
    {
      memset(v3 + 1, 0, 0x50uLL);
      *v3 = 0LL;
      v3 += 11;
      *(v4 - 5) = 0LL;
      *((_DWORD *)v4 - 7) = 0;
      *(v4 - 3) = 0LL;
      *(v4 - 2) = 0LL;
      *(v4 - 1) = 0LL;
      *v4 = 0LL;
      v4[1] = 0LL;
      v4[2] = 0LL;
      v4[3] = 0LL;
      v4[4] = 0LL;
      *((_BYTE *)v4 - 32) = 1;
      v4 += 11;
      --v2;
    }
    while ( v2 );
  }
  sub_180050B9C((__int64)v3, (__int64)v3);
  return v3;
}
