/*
 * XREFs of sub_1406F40E0 @ 0x1406F40E0
 * Callers:
 *     sub_14026D460 @ 0x14026D460 (sub_14026D460.c)
 *     sub_140761714 @ 0x140761714 (sub_140761714.c)
 * Callees:
 *     sub_140256DF8 @ 0x140256DF8 (sub_140256DF8.c)
 *     sub_14026DA80 @ 0x14026DA80 (sub_14026DA80.c)
 *     sub_14026E548 @ 0x14026E548 (sub_14026E548.c)
 *     sub_14027B234 @ 0x14027B234 (sub_14027B234.c)
 *     sub_140286F90 @ 0x140286F90 (sub_140286F90.c)
 */

__int64 __fastcall sub_1406F40E0(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 *a4, unsigned int a5, int a6)
{
  int v7; // r14d
  __int64 *v8; // rdi
  BOOL v9; // r15d
  unsigned __int64 v10; // rsi
  __int64 v11; // rbx
  unsigned __int64 v12; // r13
  unsigned int *v13; // rax
  __int64 v14; // rbp
  __int64 v15; // rcx
  int v16; // edx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r9
  __int64 v19; // rax
  __int64 v21; // rax
  unsigned int v22; // r10d
  unsigned int v23; // ecx
  unsigned __int64 v24; // rdx
  __int64 v25; // r8
  unsigned __int64 v26; // [rsp+50h] [rbp+8h] BYREF

  v7 = a6;
  v8 = a1;
  v26 = 0LL;
  if ( (dword_140D06880 & 0x8000) == 0 || (v9 = a6 != 0, (dword_140D06880 & 0x4000) == 0) )
    v9 = 0;
  v10 = (unsigned __int64)&a1[a2];
  v11 = 0LL;
  v12 = 0LL;
  v13 = sub_140286F90(a3, *a4, &v26);
  v14 = (__int64)v13;
  if ( v13 )
  {
    if ( (*((_BYTE *)v13 + 34) & 2) != 0 && (*(_DWORD *)(a3 + 56) & 0x8000000) != 0 )
      goto LABEL_23;
    if ( v7 )
    {
      v21 = sub_14027B234(v13);
      if ( v21 )
        goto LABEL_24;
    }
    v15 = *(_QWORD *)(v14 + 8);
    v16 = 0;
    v17 = v15 + 8 * v26;
    v18 = v15 + 8LL * *(unsigned int *)(v14 + 44);
    while ( 1 )
    {
      if ( (unsigned __int64)v8 >= v10 )
        return 0LL;
      if ( v17 < v18 )
        goto LABEL_9;
      v14 = *(_QWORD *)(v14 + 16);
      if ( !v14 )
      {
        if ( v17 < *(_QWORD *)(a3 + 136)
                 + 8
                 * (*(unsigned int *)(*(_QWORD *)a3 + 8LL) | ((unsigned __int64)(*(_WORD *)(*(_QWORD *)a3 + 12LL) & 0x3FF) << 32)) )
        {
          do
          {
            *v8++ = sub_14026DA80(v17);
            if ( (unsigned __int64)v8 >= v10 )
              break;
            v17 = v25 + 8;
          }
          while ( v17 < v24 );
        }
        return 0LL;
      }
      v17 = *(_QWORD *)(v14 + 8);
      if ( (*(_BYTE *)(v14 + 34) & 2) != 0 && (*(_DWORD *)(a3 + 56) & 0x8000000) != 0 )
      {
LABEL_23:
        v21 = sub_140256DF8(a3, a5, v14);
      }
      else
      {
        if ( !v7 )
          goto LABEL_15;
        v21 = sub_14027B234((_QWORD *)v14);
        if ( !v21 )
          goto LABEL_15;
      }
LABEL_24:
      v17 = *(_QWORD *)(v21 + 72);
LABEL_15:
      if ( !v9 || (v22 = *(unsigned __int16 *)(v14 + 32), (v22 & 4) == 0) )
      {
LABEL_10:
        v19 = sub_14026DA80(v17);
        goto LABEL_11;
      }
      v23 = (*(unsigned __int16 *)(v14 + 34) >> 4) + (*(_DWORD *)(v14 + 40) << 9);
      v12 = v17 + 8LL * ((v23 >> 12) + ((v23 & 0xFFF) != 0));
      v11 = sub_14026E548(
              (v22 >> 1) & 0x1F,
              (unsigned int)((8LL * *(unsigned int *)(v14 + 44) - 8LL * ((v23 >> 12) + ((v23 & 0xFFF) != 0))) >> 3)
            - (*(_DWORD *)(v14 + 52) & 0x3FFFFFFF));
LABEL_9:
      if ( !v16 || v17 < v12 )
        goto LABEL_10;
      v19 = v11;
      --v16;
LABEL_11:
      *v8++ = v19;
      v17 += 8LL;
    }
  }
  return 3221225503LL;
}
