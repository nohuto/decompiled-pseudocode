/*
 * XREFs of sub_140673F14 @ 0x140673F14
 * Callers:
 *     sub_140673DD4 @ 0x140673DD4 (sub_140673DD4.c)
 *     sub_140675BB8 @ 0x140675BB8 (sub_140675BB8.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140674264 @ 0x140674264 (sub_140674264.c)
 *     sub_1406743AC @ 0x1406743AC (sub_1406743AC.c)
 *     sub_140674AA0 @ 0x140674AA0 (sub_140674AA0.c)
 *     sub_1407FCCD8 @ 0x1407FCCD8 (sub_1407FCCD8.c)
 *     sub_1407FCD00 @ 0x1407FCD00 (sub_1407FCD00.c)
 */

__int64 __fastcall sub_140673F14(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 v7; // rdi
  __int64 v8; // rdx
  int v9; // ecx
  __int64 v11; // rdi
  _QWORD *v12; // r15
  unsigned int v13; // edx
  __int64 v14; // rsi
  char *v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rdx
  char v18; // cl
  unsigned __int64 v19; // rcx
  unsigned int v20; // edx
  unsigned int v21; // edi
  __int64 v22; // r10
  __int64 v23; // r12
  _QWORD *v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // [rsp+50h] [rbp+30h] BYREF

  *(_DWORD *)(a2 + 24) = 0;
  v29 = 0LL;
  v4 = sub_1406743AC(a2, &v29);
  LOBYTE(v5) = 1;
  sub_14042A5E0(a1, v5);
  v6 = v29;
  v7 = sub_140674264(a1, a2, v4, v29);
  LOBYTE(v8) = 1;
  if ( v7 )
  {
    sub_14042A5E0(a1, v8);
    goto LABEL_3;
  }
  v11 = *(_QWORD *)(a1 + 24);
  sub_14042A5E0(a1, v8);
  v12 = (_QWORD *)sub_140674AA0(a1, a2, v4, v6);
  if ( !v12 )
  {
    v7 = 0LL;
    goto LABEL_3;
  }
  sub_14042A5E0(a1, 0LL);
  if ( v11 == *(_QWORD *)(a1 + 24) || (v7 = sub_140674264(a1, a2, v4, v6)) == 0 )
  {
    v13 = *(_DWORD *)(a1 + 4);
    v14 = 2 * (v13 >> 5);
    if ( *(_DWORD *)a1 >= (unsigned int)v14 )
    {
      if ( (unsigned int)v14 < 4 )
        v14 = 4LL;
      v15 = (char *)sub_1407FCCD8(8LL * (unsigned int)v14, a1);
      if ( v15 )
      {
        if ( (((_DWORD)v14 - 1) & (unsigned int)v14) != 0 )
        {
          v18 = -1;
          do
          {
            ++v18;
            LODWORD(v14) = (unsigned int)v14 >> 1;
          }
          while ( (_DWORD)v14 );
          v14 = (unsigned int)(1 << v18);
        }
        if ( (unsigned int)v14 > 0x4000000 )
          v14 = 0x4000000LL;
        v19 = (unsigned int)v14;
        if ( v15 > &v15[8 * v14] )
          v19 = 0LL;
        if ( v19 )
          memset64(v15, a1 | 1, v19);
        v20 = *(_DWORD *)(a1 + 4);
        v21 = 0;
        v22 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
        if ( (v20 & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v23 = *(_QWORD *)(a1 + 8);
            while ( 1 )
            {
              v24 = *(_QWORD **)(v23 + 8LL * v21);
              if ( ((unsigned __int8)v24 & 1) != 0 )
                break;
              *(_QWORD *)(v23 + 8LL * v21) = *v24;
              v29 = v22 & v24[1];
              v25 = (37
                   * (BYTE6(v29)
                    + 37
                    * (BYTE5(v29)
                     + 37
                     * (BYTE4(v29)
                      + 37
                      * (BYTE3(v29) + 37 * (BYTE2(v29) + 37 * (BYTE1(v29) + 37 * ((unsigned __int8)v29 + 11623883)))))))
                   + HIBYTE(v29)) & (unsigned int)(v14 - 1);
              *v24 = *(_QWORD *)&v15[8 * v25];
              *(_QWORD *)&v15[8 * v25] = v24;
            }
            v20 = *(_DWORD *)(a1 + 4);
            ++v21;
          }
          while ( v21 < v20 >> 5 );
        }
        v26 = *(_QWORD *)(a1 + 8);
        v13 = (32 * v14) | v20 & 0x1F;
        *(_QWORD *)(a1 + 8) = v15;
        *(_DWORD *)(a1 + 4) = v13;
        if ( v26 )
        {
          sub_1407FCD00(v26, a1);
          v13 = *(_DWORD *)(a1 + 4);
        }
      }
      else
      {
        v13 = *(_DWORD *)(a1 + 4);
        if ( v13 < 0x20 )
        {
          v7 = 0LL;
          goto LABEL_15;
        }
      }
    }
    v29 = v12[1] & (-1LL << (v13 & 0x1F));
    v16 = *(_QWORD *)(a1 + 8);
    v17 = (37
         * (BYTE6(v29)
          + 37
          * (BYTE5(v29)
           + 37
           * (BYTE4(v29)
            + 37 * (BYTE3(v29) + 37 * (BYTE2(v29) + 37 * (BYTE1(v29) + 37 * ((unsigned __int8)v29 + 11623883)))))))
         + HIBYTE(v29)) & ((v13 >> 5) - 1);
    *v12 = *(_QWORD *)(v16 + 8 * v17);
    *(_QWORD *)(v16 + 8 * v17) = v12;
    ++*(_DWORD *)a1;
    ++*(_QWORD *)(a1 + 24);
    *(_DWORD *)(a2 + 24) |= 2u;
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL) )
      sub_14042A5E0(a1, v12);
    v7 = (__int64)v12;
    v12 = 0LL;
LABEL_15:
    sub_14042A5E0(a1, 0LL);
    if ( !v12 )
      goto LABEL_3;
    goto LABEL_37;
  }
  sub_14042A5E0(a1, 0LL);
LABEL_37:
  sub_14042A5E0(a1, v12);
LABEL_3:
  v9 = *(_DWORD *)(a2 + 24);
  if ( (v9 & 3) == 1 )
  {
    v27 = 0LL;
    if ( *(_QWORD *)(a2 + 16) )
    {
      v28 = 0LL;
      do
      {
        v28 += 32LL;
        ++v27;
        *(_QWORD *)(v28 + *(_QWORD *)(a2 + 8) - 24) = 0LL;
      }
      while ( v27 < *(_QWORD *)(a2 + 16) );
      v9 = *(_DWORD *)(a2 + 24);
    }
    *(_DWORD *)(a2 + 24) = v9 & 0xFFFFFFFE;
  }
  return v7;
}
