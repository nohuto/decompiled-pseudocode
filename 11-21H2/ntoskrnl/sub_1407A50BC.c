/*
 * XREFs of sub_1407A50BC @ 0x1407A50BC
 * Callers:
 *     sub_1407A5F60 @ 0x1407A5F60 (sub_1407A5F60.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140674F0C @ 0x140674F0C (sub_140674F0C.c)
 *     sub_140674F54 @ 0x140674F54 (sub_140674F54.c)
 *     sub_1406EB300 @ 0x1406EB300 (sub_1406EB300.c)
 *     sub_1406EB7CC @ 0x1406EB7CC (sub_1406EB7CC.c)
 *     sub_1407A53A0 @ 0x1407A53A0 (sub_1407A53A0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1407A50BC(__int64 a1, _OWORD *a2, __int64 *a3)
{
  __int64 result; // rax
  __int64 v7; // r14
  __int64 *Pool2; // rax
  __int64 *v9; // r15
  unsigned int v10; // edx
  __int64 v11; // rbx
  char *v12; // r8
  char v13; // cl
  unsigned __int64 v14; // rcx
  unsigned int v15; // edx
  unsigned int v16; // edi
  __int64 v17; // r10
  __int64 v18; // r14
  _QWORD *v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  void *v23; // rcx
  __int64 *v24; // r8
  unsigned int v25; // edi
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // [rsp+68h] [rbp+48h] BYREF

  v28 = 0LL;
  result = sub_1407A53A0(a1, a2, &v28);
  if ( result )
  {
    *a3 = result;
    return result;
  }
  v7 = a1 + 48;
  if ( *(_DWORD *)(a1 + 48) >= *(_DWORD *)(a1 + 32) )
  {
    ++*(_DWORD *)(a1 + 616);
  }
  else
  {
    Pool2 = (__int64 *)ExAllocatePool2(256LL, 512LL, 1413836624LL);
    v9 = Pool2;
    if ( Pool2 )
    {
      memset(Pool2, 0, 0x200uLL);
      sub_140674F54(v9 + 2, a2);
      v9[1] = v28;
      v10 = *(_DWORD *)(a1 + 52);
      v11 = 2 * (v10 >> 5);
      if ( *(_DWORD *)v7 < (unsigned int)v11 )
        goto LABEL_24;
      if ( (unsigned int)v11 < 4 )
        v11 = 4LL;
      v12 = (char *)sub_1406EB300(8LL * (unsigned int)v11);
      if ( v12 )
      {
        if ( (((_DWORD)v11 - 1) & (unsigned int)v11) != 0 )
        {
          v13 = -1;
          do
          {
            ++v13;
            LODWORD(v11) = (unsigned int)v11 >> 1;
          }
          while ( (_DWORD)v11 );
          v11 = (unsigned int)(1 << v13);
        }
        if ( (unsigned int)v11 > 0x4000000 )
          v11 = 0x4000000LL;
        v14 = (unsigned int)v11;
        if ( v12 > &v12[8 * v11] )
          v14 = 0LL;
        if ( v14 )
          memset64(v12, v7 | 1, v14);
        v15 = *(_DWORD *)(a1 + 52);
        v16 = 0;
        v17 = -1LL << (*(_BYTE *)(a1 + 52) & 0x1F);
        if ( (v15 & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v18 = *(_QWORD *)(v7 + 8);
            while ( 1 )
            {
              v19 = *(_QWORD **)(v18 + 8LL * v16);
              if ( ((unsigned __int8)v19 & 1) != 0 )
                break;
              *(_QWORD *)(v18 + 8LL * v16) = *v19;
              v28 = v17 & v19[1];
              v20 = (37
                   * (BYTE6(v28)
                    + 37
                    * (BYTE5(v28)
                     + 37
                     * (BYTE4(v28)
                      + 37
                      * (BYTE3(v28) + 37 * (BYTE2(v28) + 37 * (BYTE1(v28) + 37 * ((unsigned __int8)v28 + 11623883)))))))
                   + HIBYTE(v28)) & (unsigned int)(v11 - 1);
              *v19 = *(_QWORD *)&v12[8 * v20];
              *(_QWORD *)&v12[8 * v20] = v19;
            }
            v7 = a1 + 48;
            ++v16;
            v15 = *(_DWORD *)(a1 + 52);
          }
          while ( v16 < v15 >> 5 );
        }
        v23 = *(void **)(v7 + 8);
        v10 = (32 * v11) | v15 & 0x1F;
        *(_QWORD *)(v7 + 8) = v12;
        *(_DWORD *)(v7 + 4) = v10;
        if ( v23 )
        {
          sub_1406EB7CC(v23);
          v10 = *(_DWORD *)(a1 + 52);
        }
        goto LABEL_24;
      }
      v10 = *(_DWORD *)(a1 + 52);
      if ( v10 >= 0x20 )
      {
LABEL_24:
        *a3 = (__int64)v9;
        v28 = v9[1] & (-1LL << (v10 & 0x1F));
        v21 = *(_QWORD *)(v7 + 8);
        v22 = (37
             * (BYTE6(v28)
              + 37
              * (BYTE5(v28)
               + 37
               * (BYTE4(v28)
                + 37 * (BYTE3(v28) + 37 * (BYTE2(v28) + 37 * (BYTE1(v28) + 37 * ((unsigned __int8)v28 + 11623883)))))))
             + HIBYTE(v28)) & ((v10 >> 5) - 1);
        result = *(_QWORD *)(v21 + 8 * v22);
        *v9 = result;
        *(_QWORD *)(v21 + 8 * v22) = v9;
LABEL_25:
        ++*(_DWORD *)v7;
        return result;
      }
      sub_140674F0C(v9 + 2);
      ExFreePoolWithTag(v9, 0x54456F50u);
    }
  }
  ++*(_DWORD *)(a1 + 604);
  v24 = (__int64 *)(a1 + 80);
  result = *(unsigned int *)(a1 + 636);
  *a3 = a1 + 80;
  if ( (result & 4) == 0 )
  {
    *(_DWORD *)(a1 + 636) = result | 4;
    v25 = *(_DWORD *)(a1 + 52);
    v28 = *(_QWORD *)(a1 + 88) & (-1LL << (v25 & 0x1F));
    v26 = *(_QWORD *)(a1 + 56);
    v27 = (37
         * (BYTE6(v28)
          + 37
          * (BYTE5(v28)
           + 37
           * (BYTE4(v28)
            + 37 * (BYTE3(v28) + 37 * (BYTE2(v28) + 37 * (BYTE1(v28) + 37 * ((unsigned __int8)v28 + 11623883)))))))
         + HIBYTE(v28)) & ((v25 >> 5) - 1);
    result = *(_QWORD *)(v26 + 8 * v27);
    *v24 = result;
    *(_QWORD *)(v26 + 8 * v27) = v24;
    goto LABEL_25;
  }
  return result;
}
