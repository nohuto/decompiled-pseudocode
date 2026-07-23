/*
 * XREFs of RtlVirtualUnwind2 @ 0x180111010
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSanitizeContext @ 0x180020430 (RtlpSanitizeContext.c)
 *     RtlpxVirtualUnwind @ 0x180020E30 (RtlpxVirtualUnwind.c)
 */

__int64 __fastcall RtlVirtualUnwind2(
        int a1,
        __int64 a2,
        char *a3,
        unsigned int *a4,
        _DWORD *a5,
        _BYTE *a6,
        _QWORD *a7,
        char ***a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        _QWORD *a12,
        int a13)
{
  _QWORD v18[4]; // [rsp+60h] [rbp-28h] BYREF

  if ( a13 )
    return 3221225485LL;
  RtlpSanitizeContext(a5);
  v18[2] = a9;
  v18[0] = a10;
  v18[1] = a11;
  return RtlpxVirtualUnwind(a1, a2, a3, a4, (__int64)a5, a6, a7, a8, a12, (__int64)v18, 0);
}
