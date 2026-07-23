/*
 * XREFs of sub_14083A490 @ 0x14083A490
 * Callers:
 *     sub_14083A1D0 @ 0x14083A1D0 (sub_14083A1D0.c)
 *     RtlCopyRangeList @ 0x14083A400 (RtlCopyRangeList.c)
 *     RtlMergeRangeLists @ 0x1409B59D0 (RtlMergeRangeLists.c)
 * Callees:
 *     sub_140202234 @ 0x140202234 (sub_140202234.c)
 *     sub_14083984C @ 0x14083984C (sub_14083984C.c)
 */

__int64 __fastcall sub_14083A490(__int64 a1)
{
  PSLIST_ENTRY v2; // rax
  __int64 v3; // rbx
  PSLIST_ENTRY v5; // rdi
  __int64 v6; // r14
  __int64 i; // rax
  __int64 v8; // rsi
  PSLIST_ENTRY v9; // rax
  PSLIST_ENTRY v10; // rdx
  PSLIST_ENTRY *v11; // rax
  PSLIST_ENTRY *v12; // rdx

  v2 = sub_140202234((__int64)&stru_140CF92C0);
  v3 = (__int64)v2;
  if ( v2 )
  {
    *v2 = *(PSLIST_ENTRY)a1;
    v2[1] = *(PSLIST_ENTRY)(a1 + 16);
    v2[2] = *(PSLIST_ENTRY)(a1 + 32);
    v2[3].Next = *(_SLIST_ENTRY **)(a1 + 48);
    if ( (BYTE1(v2[2].Next) & 0x10) != 0 )
      ++LODWORD(v2[1].Next->Next);
    if ( (*(_BYTE *)(a1 + 34) & 1) != 0 )
    {
      v5 = v2 + 1;
      v6 = a1 + 16;
      *((_QWORD *)&v2[1].Next + 1) = v2 + 1;
      v2[1].Next = v2 + 1;
      for ( i = *(_QWORD *)(a1 + 16); ; i = *(_QWORD *)(v8 + 40) )
      {
        v8 = i - 40;
        if ( v6 == i )
          break;
        v9 = sub_140202234((__int64)&stru_140CF92C0);
        v10 = v9;
        if ( !v9 )
        {
          sub_14083984C(v3);
          return 0LL;
        }
        *v9 = *(PSLIST_ENTRY)v8;
        v9[1] = *(PSLIST_ENTRY)(v8 + 16);
        v9[2] = *(PSLIST_ENTRY)(v8 + 32);
        v9[3].Next = *(_SLIST_ENTRY **)(v8 + 48);
        if ( (BYTE1(v9[2].Next) & 0x10) != 0 )
          ++LODWORD(v9[1].Next->Next);
        v11 = *(PSLIST_ENTRY **)(v3 + 24);
        v12 = &v10[2].Next + 1;
        if ( *v11 != v5 )
          __fastfail(3u);
        *v12 = v5;
        v12[1] = (PSLIST_ENTRY)v11;
        *v11 = (PSLIST_ENTRY)v12;
        *(_QWORD *)(v3 + 24) = v12;
      }
    }
  }
  return v3;
}
