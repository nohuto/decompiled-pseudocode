/*
 * XREFs of sub_1406A6448 @ 0x1406A6448
 * Callers:
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     ExEnumHandleTable @ 0x14066A8E0 (ExEnumHandleTable.c)
 *     sub_14066B3D8 @ 0x14066B3D8 (sub_14066B3D8.c)
 *     sub_1406A6378 @ 0x1406A6378 (sub_1406A6378.c)
 *     sub_1406A6520 @ 0x1406A6520 (sub_1406A6520.c)
 *     sub_1406AC130 @ 0x1406AC130 (sub_1406AC130.c)
 *     sub_1406AC404 @ 0x1406AC404 (sub_1406AC404.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14079D560 (SeAuditingWithTokenForSubcategory.c)
 *     sub_1407A2CB0 @ 0x1407A2CB0 (sub_1407A2CB0.c)
 */

__int64 __fastcall sub_1406A6448(struct _EX_RUNDOWN_REF *a1, __int64 a2, int a3, int a4)
{
  ULONG_PTR v8; // rdi
  int v9; // ebp
  __int64 v10; // rbp
  PVOID v12; // rbx
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  PVOID P; // [rsp+60h] [rbp+8h] BYREF

  P = 0LL;
  v13 = 0LL;
  if ( !a1 )
  {
    v8 = 0LL;
    v10 = sub_1406A6378(a2, 1LL);
LABEL_5:
    if ( v10 )
    {
      *(_QWORD *)(a2 + 1392) = v10;
      if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(123LL) )
      {
        *(_QWORD *)&v13 = a2;
        *((_QWORD *)&v13 + 1) = a1;
        ExEnumHandleTable(v10, (__int64)sub_140983E50, (__int64)&v13, 0LL);
      }
      if ( v8 )
        sub_1402AD030(a1 + 139);
      return 0LL;
    }
    else
    {
      *(_QWORD *)(a2 + 1392) = 0LL;
      if ( v8 )
        sub_1402AD030(a1 + 139);
      return 3221225626LL;
    }
  }
  v8 = sub_14066B3D8(a1);
  if ( !v8 )
    return 3221225738LL;
  v9 = sub_1406A6520(a2, v8, a3, a4, (__int64)&P);
  if ( v9 >= 0 )
  {
    v10 = (__int64)P;
    goto LABEL_5;
  }
  sub_1402AD030(a1 + 139);
  v12 = P;
  if ( P )
  {
    sub_1407A2CB0(a2, P, 0LL);
    sub_1406AC404(v12);
    sub_1406AC130(v12);
  }
  return (unsigned int)v9;
}
