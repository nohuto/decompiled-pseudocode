/*
 * XREFs of sub_1407A4638 @ 0x1407A4638
 * Callers:
 *     sub_1406DA9E8 @ 0x1406DA9E8 (sub_1406DA9E8.c)
 *     sub_1407A45E4 @ 0x1407A45E4 (sub_1407A45E4.c)
 * Callees:
 *     sub_1407A4774 @ 0x1407A4774 (sub_1407A4774.c)
 *     sub_1407A4858 @ 0x1407A4858 (sub_1407A4858.c)
 *     sub_1407A58A4 @ 0x1407A58A4 (sub_1407A58A4.c)
 *     sub_1407A5A54 @ 0x1407A5A54 (sub_1407A5A54.c)
 *     sub_1407A6A34 @ 0x1407A6A34 (sub_1407A6A34.c)
 *     sub_1407A7EB0 @ 0x1407A7EB0 (sub_1407A7EB0.c)
 *     sub_1407B0F40 @ 0x1407B0F40 (sub_1407B0F40.c)
 */

__int64 __fastcall sub_1407A4638(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rax
  ULONG_PTR v13; // rbx
  int v14; // esi
  ULONG_PTR v15; // rdi
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp+10h] BYREF

  if ( (*(_DWORD *)a2 & 0xFFF8FFFF) != 0 )
    return 3221225485LL;
  v8 = *(_QWORD *)(a3 + 144);
  BugCheckParameter2 = v8;
  if ( v8 )
  {
    *(_QWORD *)(a3 + 144) = 0LL;
    sub_1407A6A34(*(_QWORD *)(v8 + 16));
    --*(_DWORD *)(v8 + 76);
    sub_1407B0F40(*(_QWORD *)(v8 + 16));
    if ( (*(_DWORD *)a2 & 0x10000) != 0 )
      sub_1407A58A4(v8);
    sub_1407A5A54(v8);
  }
  *(_DWORD *)(a3 + 40) &= ~0x4000u;
  v9 = *(_QWORD *)(a2 + 8);
  if ( !v9 )
    return 0LL;
  v10 = *(_QWORD *)(a2 + 16);
  if ( !v10 )
    return 3221225793LL;
  v11 = *(_QWORD *)(a1 + 16);
  if ( !v11 )
    return 3221225480LL;
  v12 = sub_1407A7EB0(v11 + 40, v9, qword_140002E20);
  v13 = v12;
  if ( !v12 )
    return 3221225480LL;
  v14 = sub_1407A4858(v12, a1, v10, &BugCheckParameter2);
  if ( v14 >= 0 )
  {
    v15 = BugCheckParameter2;
    v14 = sub_1407A4774(BugCheckParameter2);
    if ( v14 < 0 )
      sub_1407A5A54(v15);
    else
      *(_QWORD *)(a4 + 40) = v15;
  }
  sub_1407A5A54(v13);
  return (unsigned int)v14;
}
