/*
 * XREFs of sub_140764FE4 @ 0x140764FE4
 * Callers:
 *     sub_1402DDAE4 @ 0x1402DDAE4 (sub_1402DDAE4.c)
 *     sub_1406602DC @ 0x1406602DC (sub_1406602DC.c)
 *     sub_140660388 @ 0x140660388 (sub_140660388.c)
 *     sub_1406CF970 @ 0x1406CF970 (sub_1406CF970.c)
 *     sub_1406EAC14 @ 0x1406EAC14 (sub_1406EAC14.c)
 *     sub_140747740 @ 0x140747740 (sub_140747740.c)
 *     sub_140749448 @ 0x140749448 (sub_140749448.c)
 *     sub_1407655BC @ 0x1407655BC (sub_1407655BC.c)
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 *     sub_1407743C8 @ 0x1407743C8 (sub_1407743C8.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     sub_1409428B8 @ 0x1409428B8 (sub_1409428B8.c)
 *     sub_1409457D0 @ 0x1409457D0 (sub_1409457D0.c)
 *     sub_140946EF8 @ 0x140946EF8 (sub_140946EF8.c)
 *     sub_140947934 @ 0x140947934 (sub_140947934.c)
 *     sub_14094F860 @ 0x14094F860 (sub_14094F860.c)
 * Callees:
 *     sub_1407650B0 @ 0x1407650B0 (sub_1407650B0.c)
 *     sub_14076FBEC @ 0x14076FBEC (sub_14076FBEC.c)
 *     sub_140772044 @ 0x140772044 (sub_140772044.c)
 *     sub_140779A50 @ 0x140779A50 (sub_140779A50.c)
 *     sub_140779DC4 @ 0x140779DC4 (sub_140779DC4.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14079D560 (SeAuditingWithTokenForSubcategory.c)
 *     sub_14095B624 @ 0x14095B624 (sub_14095B624.c)
 */

_UNKNOWN **__fastcall sub_140764FE4(__int64 a1)
{
  _UNKNOWN **result; // rax
  unsigned int v3; // edi
  unsigned int v4; // ebp
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  result = &retaddr;
  P = 0LL;
  v3 = *(_DWORD *)(a1 + 404);
  v4 = *(_DWORD *)(a1 + 408);
  if ( (*(_DWORD *)(a1 + 396) & 0x2000) != 0 || v3 )
  {
    sub_140779DC4(&P);
    result = (_UNKNOWN **)sub_14076FBEC(a1, 0x2000LL);
    v6 = *(_QWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 404) = 0;
    *(_DWORD *)(a1 + 408) = 0;
    if ( v6 )
    {
      sub_140772044(v5, v6, 12LL);
      if ( *(_DWORD *)(a1 + 408) != v4 )
        sub_140772044(v7, *(_QWORD *)(a1 + 48), 13LL);
      result = (_UNKNOWN **)sub_1407650B0(a1 + 40, a1 + 56, v3, v4);
      if ( v3 == 22 )
      {
        result = (_UNKNOWN **)SeAuditingWithTokenForSubcategory(137LL);
        if ( (_BYTE)result )
          result = (_UNKNOWN **)sub_14095B624(a1 + 40, 22LL, *(unsigned int *)(a1 + 404));
      }
    }
    if ( P )
      return (_UNKNOWN **)sub_140779A50(P);
  }
  return result;
}
