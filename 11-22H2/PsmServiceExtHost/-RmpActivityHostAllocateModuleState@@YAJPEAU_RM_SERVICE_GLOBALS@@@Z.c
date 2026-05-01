/*
 * XREFs of ?RmpActivityHostAllocateModuleState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180044DE4
 * Callers:
 *     ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180044948 (-RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     CempHeapAllocateForHashTable @ 0x180013F04 (CempHeapAllocateForHashTable.c)
 *     CempHeapFreeForHashTable @ 0x180013F54 (CempHeapFreeForHashTable.c)
 *     ?RmpObjectTableAllocateState@@YAJPEAU_RM_OBJECT_TABLE@@@Z @ 0x180044F40 (-RmpObjectTableAllocateState@@YAJPEAU_RM_OBJECT_TABLE@@@Z.c)
 */

__int64 __fastcall RmpActivityHostAllocateModuleState(struct _RM_SERVICE_GLOBALS *a1)
{
  __int64 result; // rax
  char v3; // r14
  __int64 v4; // rbx
  char *v5; // r8
  char v6; // cl
  unsigned __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 v9; // r10
  __int64 v10; // r15
  _QWORD *v11; // r9
  __int64 v12; // rdx
  void *v13; // rcx
  __int64 v14; // rbx
  char *v15; // r8
  unsigned __int64 v16; // rcx
  unsigned int v17; // edi
  __int64 v18; // r12
  __int64 v19; // r11
  _QWORD *v20; // r9
  __int64 v21; // rdx
  void *v22; // rcx
  __int64 v23; // [rsp+50h] [rbp+8h]
  __int64 v24; // [rsp+50h] [rbp+8h]

  result = RmpObjectTableAllocateState((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 16));
  if ( (int)result >= 0 )
  {
    v3 = -1;
    v4 = (unsigned int)(2 * (*((_DWORD *)a1 + 837) >> 5));
    if ( *((_DWORD *)a1 + 836) >= (unsigned int)v4 )
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
          memset64(v5, ((unsigned __int64)a1 + 3344) | 1, v7);
        v8 = 0;
        v9 = -1LL << (*((_BYTE *)a1 + 3348) & 0x1F);
        if ( (*((_DWORD *)a1 + 837) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v10 = *((_QWORD *)a1 + 419);
            while ( 1 )
            {
              v11 = *(_QWORD **)(v10 + 8LL * v8);
              if ( ((unsigned __int8)v11 & 1) != 0 )
                break;
              *(_QWORD *)(v10 + 8LL * v8) = *v11;
              v23 = v9 & v11[1];
              v12 = (37
                   * (BYTE6(v23)
                    + 37
                    * (BYTE5(v23)
                     + 37
                     * (BYTE4(v23)
                      + 37
                      * (BYTE3(v23) + 37 * (BYTE2(v23) + 37 * (BYTE1(v23) + 37 * ((unsigned __int8)v23 + 11623883)))))))
                   + HIBYTE(v23)) & (unsigned int)(v4 - 1);
              *v11 = *(_QWORD *)&v5[8 * v12];
              *(_QWORD *)&v5[8 * v12] = v11;
            }
            ++v8;
          }
          while ( v8 < *((_DWORD *)a1 + 837) >> 5 );
        }
        *((_DWORD *)a1 + 837) &= 0x1Fu;
        v13 = (void *)*((_QWORD *)a1 + 419);
        *((_DWORD *)a1 + 837) |= 32 * v4;
        *((_QWORD *)a1 + 419) = v5;
        if ( v13 )
          CempHeapFreeForHashTable(v13);
      }
      else if ( *((_DWORD *)a1 + 837) < 0x20u )
      {
        return 3221225495LL;
      }
    }
    v14 = (unsigned int)(2 * (*((_DWORD *)a1 + 841) >> 5));
    if ( *((_DWORD *)a1 + 840) < (unsigned int)v14 )
      goto LABEL_3;
    if ( (unsigned int)v14 < 4 )
      v14 = 4LL;
    v15 = (char *)CempHeapAllocateForHashTable(8LL * (unsigned int)v14);
    if ( v15 )
    {
      if ( (((_DWORD)v14 - 1) & (unsigned int)v14) != 0 )
      {
        do
        {
          ++v3;
          LODWORD(v14) = (unsigned int)v14 >> 1;
        }
        while ( (_DWORD)v14 );
        v14 = (unsigned int)(1 << v3);
      }
      if ( (unsigned int)v14 > 0x4000000 )
        v14 = 0x4000000LL;
      v16 = (unsigned int)v14;
      if ( v15 > &v15[8 * v14] )
        v16 = 0LL;
      if ( v16 )
        memset64(v15, ((unsigned __int64)a1 + 3360) | 1, v16);
      v17 = 0;
      v18 = -1LL << (*((_BYTE *)a1 + 3364) & 0x1F);
      if ( (*((_DWORD *)a1 + 841) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v19 = *((_QWORD *)a1 + 421);
          while ( 1 )
          {
            v20 = *(_QWORD **)(v19 + 8LL * v17);
            if ( ((unsigned __int8)v20 & 1) != 0 )
              break;
            *(_QWORD *)(v19 + 8LL * v17) = *v20;
            v24 = v18 & v20[1];
            v21 = (37
                 * (BYTE6(v24)
                  + 37
                  * (BYTE5(v24)
                   + 37
                   * (BYTE4(v24)
                    + 37 * (BYTE3(v24) + 37 * (BYTE2(v24) + 37 * (BYTE1(v24) + 37 * ((unsigned __int8)v24 + 11623883)))))))
                 + HIBYTE(v24)) & (unsigned int)(v14 - 1);
            *v20 = *(_QWORD *)&v15[8 * v21];
            *(_QWORD *)&v15[8 * v21] = v20;
          }
          ++v17;
        }
        while ( v17 < *((_DWORD *)a1 + 841) >> 5 );
      }
      *((_DWORD *)a1 + 841) &= 0x1Fu;
      v22 = (void *)*((_QWORD *)a1 + 421);
      *((_DWORD *)a1 + 841) |= 32 * v14;
      *((_QWORD *)a1 + 421) = v15;
      if ( v22 )
        CempHeapFreeForHashTable(v22);
      goto LABEL_3;
    }
    if ( *((_DWORD *)a1 + 841) >= 0x20u )
    {
LABEL_3:
      result = TpAllocPool((char *)a1 + 3376, 0LL);
      if ( (int)result >= 0 )
      {
        *((_QWORD *)a1 + 424) = *((_QWORD *)a1 + 422);
        result = 0LL;
        *((_DWORD *)a1 + 846) = 3;
        *((_QWORD *)a1 + 425) = 0LL;
        *((_QWORD *)a1 + 426) = 0LL;
        *((_QWORD *)a1 + 427) = 0LL;
        *((_QWORD *)a1 + 428) = 0LL;
        *((_QWORD *)a1 + 429) = 0LL;
        *((_DWORD *)a1 + 860) = 0;
        *((_DWORD *)a1 + 861) = 1;
        *((_DWORD *)a1 + 862) = 72;
      }
      return result;
    }
    return 3221225495LL;
  }
  return result;
}
