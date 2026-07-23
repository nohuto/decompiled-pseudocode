/*
 * XREFs of HalInitializeBios @ 0x1403D0150
 * Callers:
 *     sub_140A57680 @ 0x140A57680 (sub_140A57680.c)
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140215340 (MmMapIoSpaceEx.c)
 *     MmUnmapVideoDisplay @ 0x140215660 (MmUnmapVideoDisplay.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     sub_1403A3520 @ 0x1403A3520 (sub_1403A3520.c)
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     sub_1403D0428 @ 0x1403D0428 (sub_1403D0428.c)
 *     _strupr @ 0x1403E03F0 (_strupr.c)
 *     strstr @ 0x1403E0C40 (strstr.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall HalInitializeBios(int a1, _QWORD *a2)
{
  char *v3; // rcx
  char *v5; // rax
  __int64 Pool2; // rax
  struct _MDL *v7; // rdi
  __int64 *v8; // r9
  unsigned int v9; // edx
  __int64 v10; // r8
  __int64 v11; // rcx
  int *v12; // rax
  _QWORD *v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // rcx
  char *v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rcx
  void *v19; // r15
  int *v20; // rax
  unsigned __int64 v21; // rdx
  _QWORD *v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rax
  __int64 v25; // r8
  unsigned int v26; // eax
  unsigned __int64 v27; // r8
  __int64 v28; // rax

  v3 = (char *)a2[27];
  if ( !v3 || (v5 = strupr(v3), !strstr(v5, "NOVGA")) )
  {
    if ( a1 != -1 )
    {
      Pool2 = ExAllocatePool2(64LL, 2096LL, 1181507912LL);
      v7 = (struct _MDL *)Pool2;
      if ( !Pool2 )
        return;
      *(_QWORD *)Pool2 = 0LL;
      v8 = (__int64 *)(Pool2 + 48);
      *(_QWORD *)(Pool2 + 32) = 0LL;
      v9 = 0;
      *(_DWORD *)(Pool2 + 44) = 0;
      *(_WORD *)(Pool2 + 8) = 2096;
      v10 = 0LL;
      *(_DWORD *)(Pool2 + 40) = 0x100000;
      *(_WORD *)(Pool2 + 10) = 2050;
      do
      {
        v11 = v10;
        if ( v9 - 160 <= 0x1F )
          v11 = 240LL;
        ++v9;
        ++v10;
        *v8++ = v11;
      }
      while ( v9 < 0x100 );
      v28 = a2[45];
      if ( (v28 & 1) != 0 )
      {
        if ( v28 == 1 )
          goto LABEL_15;
        v14 = v28 ^ ((unsigned __int64)(a2 + 44) | 1);
      }
      else
      {
        v14 = a2[45];
      }
      while ( v14 )
      {
        v21 = *(_QWORD *)(v14 + 32);
        if ( v21 < 0x100 )
        {
          v24 = *(int *)(v14 + 24);
          if ( (unsigned int)v24 > 0x23 || (v25 = 0xBC0400040LL, !_bittest64(&v25, v24)) )
          {
            v26 = *(_QWORD *)(v14 + 32);
            v27 = *(_QWORD *)(v14 + 40) + v21 - 1;
            v21 = (unsigned int)v21;
            if ( v27 > 0xFF )
              v27 = 255LL;
            if ( (unsigned int)v21 <= v27 )
            {
              do
              {
                ++v26;
                *((_QWORD *)&v7[1].Next + v21) = 240LL;
                v21 = v26;
              }
              while ( v26 <= v27 );
            }
          }
        }
        v22 = *(_QWORD **)(v14 + 8);
        v23 = v14;
        if ( v22 )
        {
          v13 = (_QWORD *)*v22;
          v14 = *(_QWORD *)(v14 + 8);
          if ( *v22 )
          {
            do
            {
              v14 = (unsigned __int64)v13;
              v13 = (_QWORD *)*v13;
            }
            while ( v13 );
          }
        }
        else
        {
          while ( 1 )
          {
            v14 = *(_QWORD *)(v14 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !v14 || *(_QWORD *)v14 == v23 )
              break;
            v23 = v14;
          }
        }
      }
LABEL_15:
      qword_140C4E340 = MmMapLockedPagesSpecifyCache(v7, 0, MmCached, 0LL, 0, 0x40000020u);
      if ( qword_140C4E340 )
      {
        v16 = (char *)MmMapIoSpaceEx(655360LL, 0x20000LL, 0x204u);
        if ( v16 )
        {
          v17 = sub_1403B1F04(v15, 0x2000LL);
          if ( v17 )
          {
            qword_140C4E348 = (__int64)(v16 - 655360);
            sub_1403D0428(v18, qword_140C4E340, v16 - 655360, v17);
            v19 = (void *)MmMapIoSpaceEx(0LL, 2048LL, 4u);
            if ( v19 )
            {
              v20 = sub_1403A3520(0, 0);
              memmove(v20, v19, 0x800uLL);
              MmUnmapVideoDisplay(v19, 0x800uLL);
              byte_140C54940 = 1;
              qword_140C01C38 = (__int64)sub_140503540;
              goto LABEL_20;
            }
          }
          MmUnmapVideoDisplay(v16, 0x20000uLL);
          qword_140C4E348 = 0LL;
        }
        if ( qword_140C4E340 )
        {
          MmUnmapLockedPages(qword_140C4E340, v7);
          qword_140C4E340 = 0LL;
        }
      }
LABEL_20:
      ExFreePoolWithTag(v7, 0);
      return;
    }
    if ( (*(_BYTE *)(a2[30] + 2656LL) & 4) == 0 )
    {
      qword_140C4E340 = 0LL;
      qword_140C4E348 = 0LL;
      qword_140C01C38 = (__int64)sub_140503540;
      byte_140C54940 = 1;
      sub_1403D0428(v3, 0LL, 0LL, 0x20000LL);
      v12 = sub_1403A3520(0, 0);
      memmove(v12, 0LL, 0x800uLL);
    }
  }
}
