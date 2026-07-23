/*
 * XREFs of sub_140921D8C @ 0x140921D8C
 * Callers:
 *     sub_1402260D0 @ 0x1402260D0 (sub_1402260D0.c)
 * Callees:
 *     Allocate @ 0x14024AC60 (Allocate.c)
 *     sub_14069F1CC @ 0x14069F1CC (sub_14069F1CC.c)
 *     sub_14069F45C @ 0x14069F45C (sub_14069F45C.c)
 *     sub_140921BE8 @ 0x140921BE8 (sub_140921BE8.c)
 *     sub_140921D5C @ 0x140921D5C (sub_140921D5C.c)
 */

__int64 __fastcall sub_140921D8C(__int64 a1, __int16 *a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4)
{
  __int16 v4; // bx
  __int16 v7; // di
  PVOID v8; // rax
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 *v13; // rdi
  __int16 v14; // dx
  __int64 v15; // rdx
  __int64 v16; // rdx
  ULONG_PTR v17; // rcx
  __int64 v18; // r9

  v4 = *a2;
  if ( (__int16)(*a2 + 1) > 2 )
  {
    v7 = v4 - 1;
    v8 = Allocate(PagedPool, 32LL * (__int16)(v4 - 1), 0x39374D43u, a4);
    *(_QWORD *)(a1 + 80) = v8;
    if ( !v8 )
      return 3221225626LL;
    if ( v7 > 0 )
    {
      v10 = 0LL;
      v11 = (unsigned __int16)v7;
      do
      {
        v12 = *(_QWORD *)(a1 + 80);
        *(_OWORD *)(v10 + v12) = 0LL;
        *(_OWORD *)(v10 + v12 + 16) = 0LL;
        v10 += 32LL;
        --v11;
      }
      while ( v11 );
    }
  }
  for ( *(_WORD *)(a1 + 8) = v4; v4 >= 0; --v4 )
  {
    v13 = (__int64 *)sub_14069F1CC((__int64)a2, v4);
    sub_140921D5C(a1, v14);
    v15 = v13[2];
    if ( v15 )
    {
      if ( (unsigned int)sub_14069F45C(*v13, v15) == 1 )
        return 0LL;
      result = sub_140921BE8(v18, v17, v16);
      if ( (int)result < 0 )
        return result;
      if ( (unsigned int)sub_14069F45C(*v13, v13[2]) )
        return 0LL;
    }
  }
  return 0LL;
}
