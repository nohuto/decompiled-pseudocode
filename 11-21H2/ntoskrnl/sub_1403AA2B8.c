/*
 * XREFs of sub_1403AA2B8 @ 0x1403AA2B8
 * Callers:
 *     sub_1403A8390 @ 0x1403A8390 (sub_1403A8390.c)
 *     sub_1403AA258 @ 0x1403AA258 (sub_1403AA258.c)
 *     sub_1403AA7E0 @ 0x1403AA7E0 (sub_1403AA7E0.c)
 *     sub_1403CABF8 @ 0x1403CABF8 (sub_1403CABF8.c)
 *     sub_140AABF48 @ 0x140AABF48 (sub_140AABF48.c)
 *     sub_140AAC868 @ 0x140AAC868 (sub_140AAC868.c)
 *     sub_140AAD338 @ 0x140AAD338 (sub_140AAD338.c)
 *     sub_140AAD404 @ 0x140AAD404 (sub_140AAD404.c)
 *     sub_140AAD490 @ 0x140AAD490 (sub_140AAD490.c)
 *     sub_140AADC00 @ 0x140AADC00 (sub_140AADC00.c)
 *     sub_140AAE560 @ 0x140AAE560 (sub_140AAE560.c)
 *     sub_140AAE79C @ 0x140AAE79C (sub_140AAE79C.c)
 *     sub_140B55C50 @ 0x140B55C50 (sub_140B55C50.c)
 *     sub_140B5616C @ 0x140B5616C (sub_140B5616C.c)
 *     sub_140B56268 @ 0x140B56268 (sub_140B56268.c)
 *     sub_140B565BC @ 0x140B565BC (sub_140B565BC.c)
 *     sub_140B5678C @ 0x140B5678C (sub_140B5678C.c)
 *     sub_140B568E8 @ 0x140B568E8 (sub_140B568E8.c)
 *     sub_140B56A6C @ 0x140B56A6C (sub_140B56A6C.c)
 * Callees:
 *     sub_140221A30 @ 0x140221A30 (sub_140221A30.c)
 *     MmAllocatePagesForMdlEx @ 0x1402630A0 (MmAllocatePagesForMdlEx.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     sub_1403AA42C @ 0x1403AA42C (sub_1403AA42C.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1403AA2B8(unsigned __int64 a1)
{
  int v1; // ebp
  __int64 v2; // rdi
  ULONG_PTR v3; // rbx
  unsigned int v4; // r14d
  __int64 v5; // r15
  SIZE_T v6; // rsi
  __int64 Pool2; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rax
  PMDL PagesForMdl; // rax

  if ( !a1 )
    return 0LL;
  if ( (dword_140C0DF90 & 0x800) == 0 )
  {
    v1 = dword_140C0DF90 & 0x8000;
    v2 = 0LL;
    v3 = 0LL;
    v4 = v1 != 0 ? 1262634818 : 1263093570;
    v5 = v1 != 0 ? 48LL : 32LL;
    v6 = v5 + a1;
    if ( v5 + a1 >= a1 && v6 < 0xFFFFEFFF )
    {
      if ( v6 < 0x1000 )
      {
        Pool2 = ExAllocatePool2(64LL, v6, v4);
LABEL_7:
        if ( !Pool2 )
          goto LABEL_20;
        v2 = v5 + Pool2;
        if ( v1 )
        {
          v8 = qword_140C0E060;
          v9 = (_QWORD *)(v2 - 40);
          if ( *(__int64 **)(qword_140C0E060 + 8) != &qword_140C0E060 )
            __fastfail(3u);
          *v9 = qword_140C0E060;
          v9[1] = &qword_140C0E060;
          *(_QWORD *)(v8 + 8) = v9;
          qword_140C0E060 = v2 - 40;
        }
        *(_DWORD *)(v2 - 24) = v4;
        *(_QWORD *)(v2 - 16) = v6;
        *(_QWORD *)(v2 - 8) = v3;
        if ( !v2 )
        {
LABEL_20:
          if ( v3 )
          {
            sub_140221A30(v3, 0);
            sub_140348B40(v3);
          }
        }
        return v2;
      }
      v6 = (v6 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, v6, MmCached, 5u);
      v3 = (ULONG_PTR)PagesForMdl;
      if ( PagesForMdl )
      {
        if ( (PagesForMdl->MdlFlags & 5) != 0 )
          Pool2 = (__int64)PagesForMdl->MappedSystemVa;
        else
          Pool2 = (__int64)MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000010u);
        goto LABEL_7;
      }
    }
    return v2;
  }
  return sub_1403AA42C();
}
