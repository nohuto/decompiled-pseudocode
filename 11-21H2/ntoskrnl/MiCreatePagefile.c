/*
 * XREFs of MiCreatePagefile @ 0x14084B698
 * Callers:
 *     MmStoreRegister @ 0x14084A7D0 (MmStoreRegister.c)
 *     MiCreatePagingFile @ 0x14084AA8C (MiCreatePagingFile.c)
 *     MiCreateSpecialPurposeMemoryPageFile @ 0x14096E2E0 (MiCreateSpecialPurposeMemoryPageFile.c)
 * Callees:
 *     MiInitializePagefileBitmapsCache @ 0x14025F1A4 (MiInitializePagefileBitmapsCache.c)
 *     RtlSetAllBits @ 0x140262CA0 (RtlSetAllBits.c)
 *     MiAllocateModWriterEntry @ 0x1402820F4 (MiAllocateModWriterEntry.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     InitializeSListHead @ 0x1402A05A0 (InitializeSListHead.c)
 *     RtlClearBits @ 0x140347580 (RtlClearBits.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     MiReservePageHash @ 0x1403CF824 (MiReservePageHash.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiCreatePageFileSpaceBitmaps @ 0x14084BA14 (MiCreatePageFileSpaceBitmaps.c)
 *     MiDeletePagefile @ 0x14096F074 (MiDeletePagefile.c)
 */

_BYTE *__fastcall MiCreatePagefile(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        UNICODE_STRING *a6,
        int a7,
        char a8)
{
  _BYTE *Pool; // rax
  _BYTE *v12; // r14
  UNICODE_STRING *v13; // rcx
  __int64 v14; // rdi
  unsigned int v15; // ebx
  PVOID v16; // rax
  unsigned int v17; // r12d
  __int64 v18; // rax
  __int64 v19; // rsi
  _QWORD *ModWriterEntry; // rax
  _QWORD *v21; // rdi
  int v22; // ecx
  int v23; // eax
  ULONG_PTR v24; // rax
  __int64 PageFileSpaceBitmaps; // rax
  __int64 v26; // rdi
  RTL_BITMAP *v27; // rdi
  PVOID v28; // rax
  __int64 v31; // [rsp+28h] [rbp-160h]
  _BYTE v32[288]; // [rsp+30h] [rbp-158h] BYREF

  memset(v32, 0, sizeof(v32));
  Pool = MiAllocatePool(64, 0x120uLL, 0x20206D4Du);
  v12 = v32;
  if ( Pool )
    v12 = Pool;
  *((_QWORD *)v12 + 1) = a5;
  *((_QWORD *)v12 + 7) = a2;
  *((_QWORD *)v12 + 3) = a4 - 2;
  *((_QWORD *)v12 + 6) = a4 - 2;
  *((_QWORD *)v12 + 28) = a3;
  *(_QWORD *)v12 = a4;
  *((_QWORD *)v12 + 2) = a4;
  *((_DWORD *)v12 + 31) = dword_140D051CC;
  *((_DWORD *)v12 + 34) = 4 * dword_140D051CC;
  *((_QWORD *)v12 + 31) = a1;
  InitializeSListHead((PSLIST_HEADER)v12 + 5);
  v13 = (UNICODE_STRING *)(v12 + 96);
  *((_QWORD *)v12 + 30) = 0LL;
  if ( a6 )
    *v13 = *a6;
  else
    RtlInitUnicodeString(v13, 0LL);
  if ( a7 < 0 )
  {
    *((_WORD *)v12 + 102) |= 0xB0u;
  }
  else if ( (a8 & 2) != 0 )
  {
    *((_WORD *)v12 + 102) |= 0x60u;
  }
  else if ( (a8 & 4) != 0 )
  {
    *((_WORD *)v12 + 102) |= 0x8A0u;
    *((_QWORD *)v12 + 32) = 0LL;
    *((_QWORD *)v12 + 33) = 0LL;
  }
  else
  {
    if ( (a7 & 0x40000000) != 0 )
      *((_WORD *)v12 + 102) |= 0x20u;
    if ( (a7 & 0x2000000) != 0 )
      *((_WORD *)v12 + 102) |= 0x80u;
  }
  if ( (a7 & 0x1000000) != 0 )
    *((_WORD *)v12 + 102) |= 0x400u;
  if ( (a8 & 1) != 0 )
    *((_WORD *)v12 + 102) |= 0x200u;
  if ( (a7 & 0x3C000000) != 0 )
    *((_DWORD *)v12 + 50) = (a7 & 0x3C000000u) >> 26;
  if ( v12 == v32 )
    goto LABEL_47;
  v14 = (unsigned int)dword_140D051CC;
  v31 = (unsigned int)dword_140D051CC;
  v15 = 2;
  if ( a7 < 0 )
  {
    v15 = 1;
  }
  else
  {
    if ( (a8 & 2) != 0 )
      goto LABEL_29;
    if ( (a8 & 4) != 0 )
    {
      v15 = KeNumberProcessors_0;
      if ( !(_DWORD)KeNumberProcessors_0 )
        goto LABEL_29;
    }
  }
  v16 = MiAllocatePool(64, 8LL * v15, 0x20206D4Du);
  *((_QWORD *)v12 + 8) = v16;
  if ( !v16 )
    goto LABEL_47;
  v17 = 0;
  if ( v15 )
  {
    v18 = a1;
    v19 = 0LL;
    do
    {
      ModWriterEntry = MiAllocateModWriterEntry(v18, v14, 0);
      v21 = ModWriterEntry;
      if ( !ModWriterEntry )
        goto LABEL_47;
      memset(ModWriterEntry, 0, 0x108uLL);
      v18 = a1;
      ++v17;
      v21[24] = a1;
      v21[18] = v12;
      *(_QWORD *)(v19 + *((_QWORD *)v12 + 8)) = v21;
      v19 += 8LL;
      ++*((_DWORD *)v12 + 18);
      v14 = v31;
    }
    while ( v17 < v15 );
  }
LABEL_29:
  v22 = 0;
  v23 = 0;
  if ( (a8 & 4) == 0 )
  {
    LOBYTE(v22) = (a8 & 2) == 0;
    v23 = v22;
  }
  if ( v23 )
  {
    v24 = MiReservePageHash(*((_DWORD *)v12 + 2));
    if ( !v24 )
      goto LABEL_47;
    *((_QWORD *)v12 + 27) = v24;
  }
  PageFileSpaceBitmaps = MiCreatePageFileSpaceBitmaps(*((unsigned int *)v12 + 2));
  v26 = PageFileSpaceBitmaps;
  if ( PageFileSpaceBitmaps )
  {
    *((_QWORD *)v12 + 14) = PageFileSpaceBitmaps;
    RtlSetAllBits((PRTL_BITMAP)(PageFileSpaceBitmaps + 8));
    RtlClearBits((PRTL_BITMAP)(v26 + 8), 2u, *(_DWORD *)v12 - 2);
    v27 = (RTL_BITMAP *)(v26 + 24);
    RtlSetAllBits(v27);
    if ( (a8 & 2) == 0 )
      RtlClearBits(v27, 2u, *(_DWORD *)v12 - 2);
    *((_DWORD *)v12 + 30) = 2;
    if ( (a8 & 2) != 0 )
      return v12;
    v28 = MiAllocatePool(64, 0x7000uLL, 0x6342694Du);
    *((_QWORD *)v12 + 24) = v28;
    if ( v28 )
    {
      MiInitializePagefileBitmapsCache((__int64)v12);
      return v12;
    }
  }
LABEL_47:
  MiDeletePagefile(v12);
  return 0LL;
}
