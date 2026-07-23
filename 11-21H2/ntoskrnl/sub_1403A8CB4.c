/*
 * XREFs of sub_1403A8CB4 @ 0x1403A8CB4
 * Callers:
 *     sub_1403A8C98 @ 0x1403A8C98 (sub_1403A8C98.c)
 *     sub_1403A8E50 @ 0x1403A8E50 (sub_1403A8E50.c)
 *     sub_1403AA7E0 @ 0x1403AA7E0 (sub_1403AA7E0.c)
 *     sub_140AAB07C @ 0x140AAB07C (sub_140AAB07C.c)
 *     sub_140AAB7D4 @ 0x140AAB7D4 (sub_140AAB7D4.c)
 *     sub_140AABA70 @ 0x140AABA70 (sub_140AABA70.c)
 *     sub_140AAC1BC @ 0x140AAC1BC (sub_140AAC1BC.c)
 *     sub_140AAC868 @ 0x140AAC868 (sub_140AAC868.c)
 *     sub_140AAD1C4 @ 0x140AAD1C4 (sub_140AAD1C4.c)
 *     sub_140AAD338 @ 0x140AAD338 (sub_140AAD338.c)
 *     sub_140AAD3E0 @ 0x140AAD3E0 (sub_140AAD3E0.c)
 *     sub_140AAD490 @ 0x140AAD490 (sub_140AAD490.c)
 *     sub_140AADBBC @ 0x140AADBBC (sub_140AADBBC.c)
 *     sub_140AADC00 @ 0x140AADC00 (sub_140AADC00.c)
 *     sub_140AAE560 @ 0x140AAE560 (sub_140AAE560.c)
 *     sub_140AAE79C @ 0x140AAE79C (sub_140AAE79C.c)
 *     sub_140AAE918 @ 0x140AAE918 (sub_140AAE918.c)
 *     sub_140AAE968 @ 0x140AAE968 (sub_140AAE968.c)
 *     unknown_libname_5 @ 0x140AAE9C8 (unknown_libname_5.c)
 *     sub_140AAE9F4 @ 0x140AAE9F4 (sub_140AAE9F4.c)
 *     sub_140AAEAF4 @ 0x140AAEAF4 (sub_140AAEAF4.c)
 *     sub_140AAEBD8 @ 0x140AAEBD8 (sub_140AAEBD8.c)
 *     sub_140AAECA0 @ 0x140AAECA0 (sub_140AAECA0.c)
 *     sub_140AAED14 @ 0x140AAED14 (sub_140AAED14.c)
 *     sub_140B55C50 @ 0x140B55C50 (sub_140B55C50.c)
 *     sub_140B5616C @ 0x140B5616C (sub_140B5616C.c)
 *     sub_140B565BC @ 0x140B565BC (sub_140B565BC.c)
 *     sub_140B5678C @ 0x140B5678C (sub_140B5678C.c)
 *     sub_140B568E8 @ 0x140B568E8 (sub_140B568E8.c)
 *     sub_140B56A6C @ 0x140B56A6C (sub_140B56A6C.c)
 * Callees:
 *     sub_140221A30 @ 0x140221A30 (sub_140221A30.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     RtlClearBits @ 0x140347580 (RtlClearBits.c)
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 */

void __fastcall sub_1403A8CB4(__int64 a1)
{
  __int64 v1; // rax
  int v2; // edx
  __int64 v3; // rdx
  __int64 v4; // r8
  _QWORD *v5; // r9
  __int64 v6; // rdx
  struct _MDL *v7; // rcx
  ULONG v8; // ebx
  struct _MDL *v9; // rbx

  v1 = a1 - 24;
  v2 = *(_DWORD *)(a1 - 24);
  if ( v2 == 1262700354 )
  {
    v8 = v1 - qword_140C54910 - 8;
    RtlClearBits(&stru_140C54920, v8, *(_DWORD *)(v1 + 8));
    if ( v8 < dword_140C54918 )
      dword_140C54918 = v8;
  }
  else
  {
    if ( v2 == 1262634818 )
    {
      v3 = a1 - 40;
      v4 = *(_QWORD *)(a1 - 40);
      if ( *(_QWORD *)(v4 + 8) != a1 - 40 || (v5 = *(_QWORD **)(v3 + 8), *v5 != v3) )
        __fastfail(3u);
      *v5 = v4;
      v6 = 48LL;
      *(_QWORD *)(v4 + 8) = v5;
    }
    else
    {
      v6 = 32LL;
    }
    v7 = (struct _MDL *)(a1 - v6);
    if ( *(_QWORD *)(v1 + 8) >= 0x1000uLL )
    {
      v9 = *(struct _MDL **)(v1 + 16);
      MmUnmapLockedPages(v7, v9);
      sub_140221A30((ULONG_PTR)v9, 0);
      v7 = v9;
    }
    sub_140348B40((ULONG_PTR)v7);
  }
}
