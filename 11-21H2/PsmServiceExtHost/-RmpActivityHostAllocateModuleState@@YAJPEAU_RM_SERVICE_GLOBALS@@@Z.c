/*
 * XREFs of ?RmpActivityHostAllocateModuleState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18004ACE8
 * Callers:
 *     ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180049BB4 (-RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     CempHeapFreeForHashTable @ 0x18003E714 (CempHeapFreeForHashTable.c)
 *     CempHeapAllocateForHashTable @ 0x18003E738 (CempHeapAllocateForHashTable.c)
 *     ?RmpObjectTableAllocateState@@YAJPEAU_RM_OBJECT_TABLE@@@Z @ 0x18004AE44 (-RmpObjectTableAllocateState@@YAJPEAU_RM_OBJECT_TABLE@@@Z.c)
 */

__int64 __fastcall RmpActivityHostAllocateModuleState(struct _RM_SERVICE_GLOBALS *a1)
{
  __int64 result; // rax
  char v3; // r14
  __int64 v4; // rbx
  char *v5; // r8
  char v6; // cl
  unsigned __int64 v7; // rcx
  unsigned int v8; // edx
  unsigned int v9; // edi
  __int64 v10; // r10
  __int64 v11; // r15
  _QWORD *v12; // r9
  __int64 v13; // rdx
  void *v14; // rcx
  __int64 v15; // rbx
  char *v16; // r8
  unsigned __int64 v17; // rcx
  unsigned int v18; // edx
  unsigned int v19; // edi
  __int64 v20; // r12
  __int64 v21; // r11
  _QWORD *v22; // r9
  __int64 v23; // rdx
  void *v24; // rcx
  __int64 v25; // [rsp+50h] [rbp+8h]
  __int64 v26; // [rsp+50h] [rbp+8h]

  result = RmpObjectTableAllocateState((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 16));
  if ( (int)result >= 0 )
  {
    v3 = -1;
    v4 = (unsigned int)(2 * (*((_DWORD *)a1 + 761) >> 5));
    if ( *((_DWORD *)a1 + 760) >= (unsigned int)v4 )
    {
      if ( (unsigned int)v4 < 4 )
        v4 = 4LL;
      v5 = (char *)CempHeapAllocateForHashTable(8LL * (unsigned int)v4);
      if ( v5 )
      {
        if ( (((_DWORD)v4 - 1) & (unsigned int)v4) != 0 )
        {
          v6 = -1;
          do
          {
            ++v6;
            LODWORD(v4) = (unsigned int)v4 >> 1;
          }
          while ( (_DWORD)v4 );
          v4 = (unsigned int)(1 << v6);
        }
        if ( (unsigned int)v4 > 0x4000000 )
          v4 = 0x4000000LL;
        v7 = (unsigned int)v4;
        if ( v5 > &v5[8 * v4] )
          v7 = 0LL;
        if ( v7 )
          memset64(v5, ((unsigned __int64)a1 + 3040) | 1, v7);
        v8 = *((_DWORD *)a1 + 761);
        v9 = 0;
        v10 = -1LL << (*((_BYTE *)a1 + 3044) & 0x1F);
        if ( (v8 & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v11 = *((_QWORD *)a1 + 381);
            while ( 1 )
            {
              v12 = *(_QWORD **)(v11 + 8LL * v9);
              if ( ((unsigned __int8)v12 & 1) != 0 )
                break;
              *(_QWORD *)(v11 + 8LL * v9) = *v12;
              v25 = v10 & v12[1];
              v13 = (37
                   * (BYTE6(v25)
                    + 37
                    * (BYTE5(v25)
                     + 37
                     * (BYTE4(v25)
                      + 37
                      * (BYTE3(v25) + 37 * (BYTE2(v25) + 37 * (BYTE1(v25) + 37 * ((unsigned __int8)v25 + 11623883)))))))
                   + HIBYTE(v25)) & (unsigned int)(v4 - 1);
              *v12 = *(_QWORD *)&v5[8 * v13];
              *(_QWORD *)&v5[8 * v13] = v12;
            }
            v8 = *((_DWORD *)a1 + 761);
            ++v9;
          }
          while ( v9 < v8 >> 5 );
        }
        v14 = (void *)*((_QWORD *)a1 + 381);
        *((_QWORD *)a1 + 381) = v5;
        *((_DWORD *)a1 + 761) = (32 * v4) | v8 & 0x1F;
        if ( v14 )
          CempHeapFreeForHashTable(v14);
      }
      else if ( *((_DWORD *)a1 + 761) < 0x20u )
      {
        return 3221225495LL;
      }
    }
    v15 = (unsigned int)(2 * (*((_DWORD *)a1 + 765) >> 5));
    if ( *((_DWORD *)a1 + 764) < (unsigned int)v15 )
      goto LABEL_3;
    if ( (unsigned int)v15 < 4 )
      v15 = 4LL;
    v16 = (char *)CempHeapAllocateForHashTable(8LL * (unsigned int)v15);
    if ( v16 )
    {
      if ( (((_DWORD)v15 - 1) & (unsigned int)v15) != 0 )
      {
        do
        {
          ++v3;
          LODWORD(v15) = (unsigned int)v15 >> 1;
        }
        while ( (_DWORD)v15 );
        v15 = (unsigned int)(1 << v3);
      }
      if ( (unsigned int)v15 > 0x4000000 )
        v15 = 0x4000000LL;
      v17 = (unsigned int)v15;
      if ( v16 > &v16[8 * v15] )
        v17 = 0LL;
      if ( v17 )
        memset64(v16, ((unsigned __int64)a1 + 3056) | 1, v17);
      v18 = *((_DWORD *)a1 + 765);
      v19 = 0;
      v20 = -1LL << (*((_BYTE *)a1 + 3060) & 0x1F);
      if ( (v18 & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v21 = *((_QWORD *)a1 + 383);
          while ( 1 )
          {
            v22 = *(_QWORD **)(v21 + 8LL * v19);
            if ( ((unsigned __int8)v22 & 1) != 0 )
              break;
            *(_QWORD *)(v21 + 8LL * v19) = *v22;
            v26 = v20 & v22[1];
            v23 = (37
                 * (BYTE6(v26)
                  + 37
                  * (BYTE5(v26)
                   + 37
                   * (BYTE4(v26)
                    + 37 * (BYTE3(v26) + 37 * (BYTE2(v26) + 37 * (BYTE1(v26) + 37 * ((unsigned __int8)v26 + 11623883)))))))
                 + HIBYTE(v26)) & (unsigned int)(v15 - 1);
            *v22 = *(_QWORD *)&v16[8 * v23];
            *(_QWORD *)&v16[8 * v23] = v22;
          }
          v18 = *((_DWORD *)a1 + 765);
          ++v19;
        }
        while ( v19 < v18 >> 5 );
      }
      v24 = (void *)*((_QWORD *)a1 + 383);
      *((_QWORD *)a1 + 383) = v16;
      *((_DWORD *)a1 + 765) = (32 * v15) | v18 & 0x1F;
      if ( v24 )
        CempHeapFreeForHashTable(v24);
      goto LABEL_3;
    }
    if ( *((_DWORD *)a1 + 765) >= 0x20u )
    {
LABEL_3:
      result = TpAllocPool((char *)a1 + 3072, 0LL);
      if ( (int)result >= 0 )
      {
        *((_QWORD *)a1 + 386) = *((_QWORD *)a1 + 384);
        result = 0LL;
        *((_DWORD *)a1 + 770) = 3;
        *((_QWORD *)a1 + 387) = 0LL;
        *((_QWORD *)a1 + 388) = 0LL;
        *((_QWORD *)a1 + 389) = 0LL;
        *((_QWORD *)a1 + 390) = 0LL;
        *((_QWORD *)a1 + 391) = 0LL;
        *((_DWORD *)a1 + 784) = 0;
        *((_DWORD *)a1 + 785) = 1;
        *((_DWORD *)a1 + 786) = 72;
      }
      return result;
    }
    return 3221225495LL;
  }
  return result;
}
