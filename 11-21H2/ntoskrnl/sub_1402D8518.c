/*
 * XREFs of sub_1402D8518 @ 0x1402D8518
 * Callers:
 *     sub_1402D86CC @ 0x1402D86CC (sub_1402D86CC.c)
 *     sub_1402DB738 @ 0x1402DB738 (sub_1402DB738.c)
 *     sub_1405FEF04 @ 0x1405FEF04 (sub_1405FEF04.c)
 *     sub_1405FEF58 @ 0x1405FEF58 (sub_1405FEF58.c)
 *     sub_140A7F132 @ 0x140A7F132 (sub_140A7F132.c)
 *     sub_140A8AAE0 @ 0x140A8AAE0 (sub_140A8AAE0.c)
 *     sub_140A8AB50 @ 0x140A8AB50 (sub_140A8AB50.c)
 *     sub_140A8AD1C @ 0x140A8AD1C (sub_140A8AD1C.c)
 *     sub_140A8AE08 @ 0x140A8AE08 (sub_140A8AE08.c)
 *     sub_140A8B064 @ 0x140A8B064 (sub_140A8B064.c)
 *     sub_140A8B190 @ 0x140A8B190 (sub_140A8B190.c)
 *     sub_140A8B2AC @ 0x140A8B2AC (sub_140A8B2AC.c)
 *     sub_140A8B450 @ 0x140A8B450 (sub_140A8B450.c)
 *     sub_140A8B588 @ 0x140A8B588 (sub_140A8B588.c)
 *     sub_140A8B654 @ 0x140A8B654 (sub_140A8B654.c)
 *     sub_140A916B8 @ 0x140A916B8 (sub_140A916B8.c)
 *     sub_140A91728 @ 0x140A91728 (sub_140A91728.c)
 *     sub_140A91AD0 @ 0x140A91AD0 (sub_140A91AD0.c)
 *     sub_140A91EDC @ 0x140A91EDC (sub_140A91EDC.c)
 *     sub_140A91F88 @ 0x140A91F88 (sub_140A91F88.c)
 *     sub_140A9EFF8 @ 0x140A9EFF8 (sub_140A9EFF8.c)
 *     sub_140A9F0C0 @ 0x140A9F0C0 (sub_140A9F0C0.c)
 *     sub_140A9F1DC @ 0x140A9F1DC (sub_140A9F1DC.c)
 *     sub_140AA0F00 @ 0x140AA0F00 (sub_140AA0F00.c)
 *     sub_140AA144C @ 0x140AA144C (sub_140AA144C.c)
 *     sub_140AA1590 @ 0x140AA1590 (sub_140AA1590.c)
 *     sub_140AA16A4 @ 0x140AA16A4 (sub_140AA16A4.c)
 * Callees:
 *     sub_1402D82D0 @ 0x1402D82D0 (sub_1402D82D0.c)
 *     sub_1402D8304 @ 0x1402D8304 (sub_1402D8304.c)
 *     sub_1402D8360 @ 0x1402D8360 (sub_1402D8360.c)
 *     sub_1402D8398 @ 0x1402D8398 (sub_1402D8398.c)
 *     sub_1402D8440 @ 0x1402D8440 (sub_1402D8440.c)
 *     RtlLookupElementGenericTableFullAvl @ 0x1402DF320 (RtlLookupElementGenericTableFullAvl.c)
 */

PVOID __fastcall sub_1402D8518(__int64 *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  PVOID v4; // rbx
  __int64 v5; // r14
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  __int64 v13; // rcx
  unsigned __int64 v15; // r12
  unsigned __int64 i; // r14
  unsigned __int64 v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // [rsp+20h] [rbp-20h]
  unsigned __int64 v21; // [rsp+20h] [rbp-20h]
  unsigned __int64 Buffer; // [rsp+28h] [rbp-18h] BYREF
  __int64 v23; // [rsp+30h] [rbp-10h]
  __int64 v24; // [rsp+38h] [rbp-8h]
  TABLE_SEARCH_RESULT SearchResult; // [rsp+90h] [rbp+50h] BYREF
  PVOID NodeOrParent; // [rsp+98h] [rbp+58h] BYREF

  v24 = 0LL;
  v4 = 0LL;
  v5 = a4;
  if ( !a4 )
    v5 = *a1;
  v9 = a3 & 0xFFFFFFFFFFFFF000uLL;
  v10 = (v5 + (a3 & 0xFFF) + 4095) >> 12;
  if ( (a3 & 0xFFFFFFFFFFFFF000uLL) == a3 )
    goto LABEL_9;
  Buffer = a3;
  v11 = v5;
  if ( v10 > 1 )
    v11 = 4096LL;
  v23 = v11;
  sub_1402D8440((__int64)a1, (__int64)&Buffer);
  v12 = sub_1402D8398((__int64)a1, Buffer);
  sub_1402D8360(a2);
  v20 = 192 * v12;
  sub_1402D8304(192 * v12 + a1[2], a2);
  v13 = a1[2];
  NodeOrParent = 0LL;
  SearchResult = TableEmptyTree;
  v4 = RtlLookupElementGenericTableFullAvl((PRTL_AVL_TABLE)(192 * v12 + v13), &Buffer, &NodeOrParent, &SearchResult);
  if ( !v4 )
  {
    sub_1402D82D0(v20 + a1[2], a2);
    --v10;
    v9 += 4096LL;
LABEL_9:
    v15 = v5 + a3;
    for ( i = 0LL; i < v10; ++i )
    {
      Buffer = v9;
      v21 = v9 + 4096;
      if ( v9 + 4096 <= v15 )
        v23 = 4096LL;
      else
        v23 = v15 - v9;
      sub_1402D8440((__int64)a1, (__int64)&Buffer);
      v17 = sub_1402D8398((__int64)a1, Buffer);
      sub_1402D8360(a2);
      v18 = 192 * v17;
      sub_1402D8304(192 * v17 + a1[2], a2);
      v19 = a1[2];
      NodeOrParent = 0LL;
      SearchResult = TableEmptyTree;
      v4 = RtlLookupElementGenericTableFullAvl((PRTL_AVL_TABLE)(192 * v17 + v19), &Buffer, &NodeOrParent, &SearchResult);
      if ( v4 )
        break;
      sub_1402D82D0(v18 + a1[2], a2);
      v9 = v21;
    }
  }
  return v4;
}
