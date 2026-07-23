/*
 * XREFs of sub_140674BE4 @ 0x140674BE4
 * Callers:
 *     sub_1407A5C98 @ 0x1407A5C98 (sub_1407A5C98.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140674EA8 @ 0x140674EA8 (sub_140674EA8.c)
 *     sub_140674F0C @ 0x140674F0C (sub_140674F0C.c)
 *     sub_1406EB300 @ 0x1406EB300 (sub_1406EB300.c)
 *     sub_1406EB7CC @ 0x1406EB7CC (sub_1406EB7CC.c)
 *     sub_1407A6508 @ 0x1407A6508 (sub_1407A6508.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140674BE4(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbp
  __int64 v4; // rdi
  _QWORD *Pool2; // rax
  _QWORD *v6; // r14
  unsigned __int64 v7; // rsi
  unsigned int v8; // edx
  __int64 v9; // rbx
  char *v10; // r8
  char v11; // cl
  unsigned __int64 v12; // rcx
  unsigned int v13; // edx
  unsigned int v14; // edi
  __int64 v15; // r10
  __int64 v16; // r15
  _QWORD *v17; // r9
  __int64 v18; // rdx
  unsigned int v19; // edi
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v23; // rcx
  __int64 v24; // [rsp+50h] [rbp+8h]
  __int64 v25; // [rsp+50h] [rbp+8h]

  v2 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 8);
  Pool2 = (_QWORD *)ExAllocatePool2(256LL, 496LL, 1413836624LL);
  v6 = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, 0x1F0uLL);
    v6[1] = v4;
    sub_140674EA8(v6 + 2, v4, v2 + 32);
    sub_1407A6508(v6 + 3, 0LL);
    v7 = v2 + 64;
    v8 = *(_DWORD *)(v2 + 68);
    v9 = 2 * (v8 >> 5);
    if ( *(_DWORD *)(v2 + 64) < (unsigned int)v9 )
      goto LABEL_21;
    if ( (unsigned int)v9 < 4 )
      v9 = 4LL;
    v10 = (char *)sub_1406EB300(8LL * (unsigned int)v9, 0LL);
    if ( v10 )
    {
      if ( (((_DWORD)v9 - 1) & (unsigned int)v9) != 0 )
      {
        v11 = -1;
        do
        {
          ++v11;
          LODWORD(v9) = (unsigned int)v9 >> 1;
        }
        while ( (_DWORD)v9 );
        v9 = (unsigned int)(1 << v11);
      }
      if ( (unsigned int)v9 > 0x4000000 )
        v9 = 0x4000000LL;
      v12 = (unsigned int)v9;
      if ( v10 > &v10[8 * v9] )
        v12 = 0LL;
      if ( v12 )
        memset64(v10, v7 | 1, v12);
      v13 = *(_DWORD *)(v2 + 68);
      v14 = 0;
      v15 = -1LL << (*(_BYTE *)(v2 + 68) & 0x1F);
      if ( (v13 & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v16 = *(_QWORD *)(v2 + 72);
          while ( 1 )
          {
            v17 = *(_QWORD **)(v16 + 8LL * v14);
            if ( ((unsigned __int8)v17 & 1) != 0 )
              break;
            *(_QWORD *)(v16 + 8LL * v14) = *v17;
            v24 = v15 & v17[1];
            v18 = (37
                 * (BYTE6(v24)
                  + 37
                  * (BYTE5(v24)
                   + 37
                   * (BYTE4(v24)
                    + 37 * (BYTE3(v24) + 37 * (BYTE2(v24) + 37 * (BYTE1(v24) + 37 * ((unsigned __int8)v24 + 11623883)))))))
                 + HIBYTE(v24)) & (unsigned int)(v9 - 1);
            *v17 = *(_QWORD *)&v10[8 * v18];
            *(_QWORD *)&v10[8 * v18] = v17;
          }
          v13 = *(_DWORD *)(v2 + 68);
          ++v14;
        }
        while ( v14 < v13 >> 5 );
      }
      v23 = *(_QWORD *)(v2 + 72);
      v8 = (32 * v9) | v13 & 0x1F;
      *(_QWORD *)(v2 + 72) = v10;
      *(_DWORD *)(v2 + 68) = v8;
      if ( v23 )
      {
        sub_1406EB7CC(v23, 0LL);
        v8 = *(_DWORD *)(v2 + 68);
      }
      goto LABEL_21;
    }
    v8 = *(_DWORD *)(v2 + 68);
    if ( v8 >= 0x20 )
    {
LABEL_21:
      *a2 = v6;
      v25 = v6[1] & (-1LL << (v8 & 0x1F));
      v19 = 0;
      v20 = *(_QWORD *)(v2 + 72);
      v21 = (37
           * (BYTE6(v25)
            + 37
            * (BYTE5(v25)
             + 37
             * (BYTE4(v25)
              + 37 * (BYTE3(v25) + 37 * (BYTE2(v25) + 37 * (BYTE1(v25) + 37 * ((unsigned __int8)v25 + 11623883)))))))
           + HIBYTE(v25)) & ((v8 >> 5) - 1);
      *v6 = *(_QWORD *)(v20 + 8 * v21);
      *(_QWORD *)(v20 + 8 * v21) = v6;
      ++*(_DWORD *)v7;
      return v19;
    }
  }
  ++*(_DWORD *)(v2 + 612);
  v19 = -1073741670;
  if ( v6 )
  {
    sub_140674F0C(v6 + 2);
    ExFreePoolWithTag(v6, 0x54456F50u);
  }
  return v19;
}
