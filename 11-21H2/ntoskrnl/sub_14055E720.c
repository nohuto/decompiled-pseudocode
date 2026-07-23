/*
 * XREFs of sub_14055E720 @ 0x14055E720
 * Callers:
 *     sub_14093D590 @ 0x14093D590 (sub_14093D590.c)
 *     sub_14093DA18 @ 0x14093DA18 (sub_14093DA18.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14055E720(__int64 a1, _DWORD *a2, unsigned int a3)
{
  __int64 v5; // rdi
  int v6; // eax
  unsigned int v7; // edx
  int v8; // eax

  if ( !byte_140C4EFD4 )
    return 3221225485LL;
  if ( a3 < dword_140C4F020 )
    return 3221225485LL;
  v5 = a3;
  if ( a3 < (unsigned int)dword_140C4F000 + (unsigned __int64)DWORD1(xmmword_140C4EFE8) + 4184 )
    return 3221225485LL;
  memset(a2, 0, a3);
  a2[2] = 1;
  a2[3] = dword_140C4F020;
  *a2 = *(_DWORD *)a1;
  a2[1] = *(_DWORD *)(a1 + 4);
  a2[12] = *(_DWORD *)(a1 + 48);
  a2[998] = *(_DWORD *)(a1 + 3992);
  *((_QWORD *)a2 + 500) = (*(_QWORD *)(a1 + 4000) + v5 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  a2[1044] = *(_DWORD *)(a1 + 4176) | 0x100;
  v6 = *(_DWORD *)(a1 + 56);
  *((_QWORD *)a2 + 8) = 0LL;
  *((_QWORD *)a2 + 9) = 0LL;
  *((_QWORD *)a2 + 10) = 0LL;
  *((_QWORD *)a2 + 11) = 0LL;
  a2[14] = v6;
  a2[5] = 4184;
  a2[4] = dword_140C4F000;
  memmove(a2 + 1046, qword_140C4EFF8, (unsigned int)dword_140C4F000);
  v7 = a2[4] + a2[5];
  a2[10] = dword_140C4F004;
  v8 = dword_140C4F018;
  a2[7] = v7;
  a2[8] = v8;
  a2[6] = DWORD1(xmmword_140C4EFE8);
  memmove((char *)a2 + v7, *((const void **)&xmmword_140C4EFE8 + 1), DWORD1(xmmword_140C4EFE8));
  a2[9] = dword_140C4F01C;
  return 0LL;
}
