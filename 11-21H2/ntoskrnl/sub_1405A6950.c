/*
 * XREFs of sub_1405A6950 @ 0x1405A6950
 * Callers:
 *     sub_1402BEEA0 @ 0x1402BEEA0 (sub_1402BEEA0.c)
 *     sub_1403B76EC @ 0x1403B76EC (sub_1403B76EC.c)
 *     sub_1403B7A10 @ 0x1403B7A10 (sub_1403B7A10.c)
 *     sub_140AF66BC @ 0x140AF66BC (sub_140AF66BC.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

_QWORD *__fastcall sub_1405A6950(ULONG_PTR BugCheckParameter2)
{
  int v1; // edx
  _QWORD *result; // rax
  int v4; // r9d
  int v5; // eax
  _QWORD *v6; // rcx

  v1 = dword_140C506D4;
  if ( dword_140C506D0 > (unsigned int)dword_140C506D4
    || (result = (char *)qword_140C50710 + 16 * dword_140C506D0, BugCheckParameter2 < *result)
    || dword_140C506D0 != dword_140C506D4 && BugCheckParameter2 >= result[2] )
  {
    v4 = 0;
    if ( dword_140C506D4 < 0 )
LABEL_13:
      KeBugCheckEx(0x1Au, 0x6202uLL, BugCheckParameter2, 0LL, 0LL);
    while ( 1 )
    {
      v5 = (v4 + v1) >> 1;
      v6 = (char *)qword_140C50710 + 16 * v5;
      if ( BugCheckParameter2 >= *v6 )
      {
        if ( v5 == dword_140C506D4 || BugCheckParameter2 < v6[2] )
        {
          dword_140C506D0 = (v4 + v1) >> 1;
          return (char *)qword_140C50710 + 16 * v5;
        }
        v4 = v5 + 1;
      }
      else
      {
        if ( !v5 )
          KeBugCheckEx(0x1Au, 0x6200uLL, BugCheckParameter2, (ULONG_PTR)v6, 0LL);
        v1 = v5 - 1;
      }
      if ( v1 < v4 )
        goto LABEL_13;
    }
  }
  return result;
}
