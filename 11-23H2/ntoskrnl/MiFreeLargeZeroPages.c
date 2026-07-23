/*
 * XREFs of MiFreeLargeZeroPages @ 0x140212098
 * Callers:
 *     MiCleanupPageTablePages @ 0x140212030 (MiCleanupPageTablePages.c)
 *     MiPruneProcessLargePageCaches @ 0x14021E690 (MiPruneProcessLargePageCaches.c)
 *     MiCommitExistingVad @ 0x140276CC0 (MiCommitExistingVad.c)
 *     MiAllocateFastLargePagesForMdl @ 0x14038B6E4 (MiAllocateFastLargePagesForMdl.c)
 *     MiPfnRangeIsZero @ 0x14038F364 (MiPfnRangeIsZero.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x14066768C (MiAllocateLargeProcessPagesFromCache.c)
 *     MiCreateLargePfnList @ 0x140667F3C (MiCreateLargePfnList.c)
 *     MiFreeLargeProcessPagesToCache @ 0x140668B94 (MiFreeLargeProcessPagesToCache.c)
 *     MiCreatePagingFileMap @ 0x140747B84 (MiCreatePagingFileMap.c)
 *     MiAllocateFastAwePages @ 0x140A40454 (MiAllocateFastAwePages.c)
 * Callees:
 *     MiInsertLargePageInNodeList @ 0x1402D6E70 (MiInsertLargePageInNodeList.c)
 *     MiReleaseFreshPage @ 0x1402E81B0 (MiReleaseFreshPage.c)
 *     MiUpdateLargePageBitMap @ 0x1402E8B9C (MiUpdateLargePageBitMap.c)
 *     MiLockPageInline @ 0x1402EF910 (MiLockPageInline.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

__int64 __fastcall MiFreeLargeZeroPages(int a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  __int64 v4; // rbp
  _QWORD **v8; // rcx
  _QWORD *v9; // rsi
  _QWORD *v11; // rax
  __int64 v12; // rdi
  char v13; // al
  __int128 v14; // [rsp+30h] [rbp-68h] BYREF
  __int128 v15; // [rsp+40h] [rbp-58h]

  v3 = 0LL;
  v14 = 0LL;
  v4 = 0LL;
  v15 = 0LL;
  do
  {
    while ( 1 )
    {
      v8 = (_QWORD **)(a2 + 24 * v4);
      v9 = *v8;
      if ( *v8 == v8 )
        break;
      if ( (_QWORD **)v9[1] != v8 || (v11 = (_QWORD *)*v9, *(_QWORD **)(*v9 + 8LL) != v9) )
        __fastfail(3u);
      *v8 = v11;
      v11[1] = v8;
      if ( (_DWORD)v4 == 3 )
      {
        MiReleaseFreshPage(v9);
        ++v3;
      }
      else
      {
        v12 = MiLargePageSizes[v4];
        MiUpdateLargePageBitMap(a1, -1431655765 * ((__int64)(v9 + 0x44000000000LL) >> 4), v12, 0, 1);
        v13 = MiLockPageInline(v9);
        v15 = 0LL;
        *(_QWORD *)&v14 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v9 + 0x44000000000LL) >> 4);
        *((_QWORD *)&v14 + 1) = a3;
        LOBYTE(v15) = v13;
        MiInsertLargePageInNodeList(&v14);
        v3 += v12;
      }
    }
    v4 = (unsigned int)(v4 + 1);
  }
  while ( (unsigned int)v4 < 4 );
  return v3;
}
