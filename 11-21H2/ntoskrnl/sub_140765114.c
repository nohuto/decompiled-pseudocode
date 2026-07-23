/*
 * XREFs of sub_140765114 @ 0x140765114
 * Callers:
 *     sub_1402DDAE4 @ 0x1402DDAE4 (sub_1402DDAE4.c)
 *     sub_1406602DC @ 0x1406602DC (sub_1406602DC.c)
 *     sub_14067B998 @ 0x14067B998 (sub_14067B998.c)
 *     sub_1406CF970 @ 0x1406CF970 (sub_1406CF970.c)
 *     sub_140747740 @ 0x140747740 (sub_140747740.c)
 *     sub_140749294 @ 0x140749294 (sub_140749294.c)
 *     sub_14074C8DC @ 0x14074C8DC (sub_14074C8DC.c)
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 *     sub_14076FAB0 @ 0x14076FAB0 (sub_14076FAB0.c)
 *     sub_1407743C8 @ 0x1407743C8 (sub_1407743C8.c)
 *     sub_140777578 @ 0x140777578 (sub_140777578.c)
 *     sub_14081059C @ 0x14081059C (sub_14081059C.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     sub_140862BA0 @ 0x140862BA0 (sub_140862BA0.c)
 *     sub_1409457D0 @ 0x1409457D0 (sub_1409457D0.c)
 *     sub_140946EF8 @ 0x140946EF8 (sub_140946EF8.c)
 *     sub_140947A8C @ 0x140947A8C (sub_140947A8C.c)
 *     sub_14094F860 @ 0x14094F860 (sub_14094F860.c)
 *     sub_14095975C @ 0x14095975C (sub_14095975C.c)
 * Callees:
 *     sub_14076520C @ 0x14076520C (sub_14076520C.c)
 *     sub_14076FB70 @ 0x14076FB70 (sub_14076FB70.c)
 *     sub_140772044 @ 0x140772044 (sub_140772044.c)
 *     sub_140779A50 @ 0x140779A50 (sub_140779A50.c)
 *     sub_140779DC4 @ 0x140779DC4 (sub_140779DC4.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14079D560 (SeAuditingWithTokenForSubcategory.c)
 *     sub_14095B624 @ 0x14095B624 (sub_14095B624.c)
 */

void __fastcall sub_140765114(__int64 a1, int a2, int a3)
{
  int v3; // edi
  unsigned int v5; // esi
  int v7; // r14d
  __int64 v8; // rcx
  __int64 v9; // rdx
  PVOID P; // [rsp+60h] [rbp+8h] BYREF

  P = 0LL;
  v3 = a3;
  v5 = *(_DWORD *)(a1 + 404);
  v7 = *(_DWORD *)(a1 + 408);
  if ( (*(_DWORD *)(a1 + 396) & 0x2000) == 0 || v5 != a2 || v7 != a3 )
  {
    sub_140779DC4(&P);
    sub_14076FB70(a1, 0x2000LL);
    v9 = *(_QWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 404) = a2;
    *(_DWORD *)(a1 + 408) = v3;
    if ( v9 )
    {
      if ( a2 != v5 )
      {
        sub_140772044(v8, v9, 12LL);
        v3 = *(_DWORD *)(a1 + 408);
      }
      if ( v3 != v7 )
      {
        sub_140772044(v8, *(_QWORD *)(a1 + 48), 13LL);
        v3 = *(_DWORD *)(a1 + 408);
      }
      sub_14076520C(a1 + 40, a1 + 56, *(_DWORD *)(a1 + 300), *(_DWORD *)(a1 + 404), v3, v5, v7);
      if ( *(_DWORD *)(a1 + 404) == 22 && (unsigned __int8)SeAuditingWithTokenForSubcategory(137LL) )
        sub_14095B624(a1 + 40, v5, *(unsigned int *)(a1 + 404));
    }
    if ( P )
      sub_140779A50(P);
  }
}
