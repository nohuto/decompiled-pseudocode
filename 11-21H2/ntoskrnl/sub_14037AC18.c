/*
 * XREFs of sub_14037AC18 @ 0x14037AC18
 * Callers:
 *     sub_14037AA7C @ 0x14037AA7C (sub_14037AA7C.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     sub_14037A04C @ 0x14037A04C (sub_14037A04C.c)
 *     sub_14037ADB8 @ 0x14037ADB8 (sub_14037ADB8.c)
 *     sub_14037AE58 @ 0x14037AE58 (sub_14037AE58.c)
 *     sub_14037C0B4 @ 0x14037C0B4 (sub_14037C0B4.c)
 *     sub_1403939B8 @ 0x1403939B8 (sub_1403939B8.c)
 */

__int64 __fastcall sub_14037AC18(int *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 *v4; // rbx
  int v5; // r11d
  unsigned int v7; // esi
  __int64 v8; // r14
  int v9; // eax
  __int64 v10; // rcx
  int v11; // r10d
  __int64 v12; // rbp
  unsigned int v13; // r8d
  int v14; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax

  v4 = (__int64 *)*((_QWORD *)a1 + 4);
  v5 = a3;
  v7 = 1;
  if ( (unsigned __int64)v4 <= 1 )
    v8 = 0LL;
  else
    v8 = *v4;
  v9 = *a1;
  v10 = *a1 & 7;
  v11 = *(_DWORD *)(a3 + 6016) & 0x3FF;
  if ( (v10 & 0xFFFFFFFD) != 0 )
  {
    v12 = 0LL;
    v13 = 0;
  }
  else
  {
    v12 = *((_QWORD *)a1 + 2);
    v13 = *(_DWORD *)(v12 + 40) >> 12;
    if ( (_DWORD)v10 == 2 )
    {
      v4[1] = 0LL;
      v9 = *a1;
    }
  }
  v14 = v9 & 7;
  if ( v14 )
  {
    v16 = v14 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( !v17 )
      {
        v18 = a1[2];
        v10 = *((_QWORD *)a1 + 4);
        if ( (_BYTE)v18 )
        {
          *(_WORD *)(v10 + 8) = (unsigned __int8)v18;
          if ( (dword_140D32130 & 8) != 0 )
            a4 = 0;
        }
        *(_DWORD *)v10 = a4;
        if ( (dword_140D32130 & 0x10) != 0 )
          sub_1403939B8(v4, v13, 1LL);
        goto LABEL_8;
      }
      v19 = v17 - 1;
      if ( !v19 )
      {
        *(_DWORD *)v4 = a4;
        v4[1] = (unsigned int)a1[3];
        goto LABEL_8;
      }
      v20 = v19 - 1;
      if ( v20 )
      {
        if ( v20 != 1 )
          goto LABEL_8;
LABEL_29:
        *(_DWORD *)v4 = a4;
        v4[1] = 0LL;
        goto LABEL_8;
      }
      if ( (a1[2] & 7) != 0 )
        goto LABEL_29;
    }
    else if ( (a1[4] & 1) == 0 )
    {
      sub_14037A04C((__int64)&unk_140D31A00, (unsigned int *)a1 + 2, a1[3], v11);
      *(_DWORD *)v4 = 0;
      goto LABEL_8;
    }
    return 0;
  }
  sub_14037C0B4((unsigned int)&unk_140D31A00, (_DWORD)a1, v13, v5, a4);
LABEL_8:
  if ( v12 )
  {
    if ( (*(_BYTE *)(v12 + 10) & 5) == 0 )
      MmMapLockedPagesSpecifyCache((PMDL)v12, 0, MmCached, 0LL, 0, 0x40000010u);
    if ( (dword_140D32130 & 2) != 0 )
      sub_14037AE58(&unk_140D32000, 5LL, v4, v12);
  }
  if ( v8 )
    sub_14037ADB8(v10, a1, v8, v4);
  return v7;
}
