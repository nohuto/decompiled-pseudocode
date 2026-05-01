/*
 * XREFs of ?RmpPsmAppFamilyTableAdd@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z @ 0x1800123C0
 * Callers:
 *     ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18004FF58 (-RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_I.c)
 * Callees:
 *     CempHeapAllocateForHashTable @ 0x180013F04 (CempHeapAllocateForHashTable.c)
 *     CempHeapFreeForHashTable @ 0x180013F54 (CempHeapFreeForHashTable.c)
 */

void __fastcall RmpPsmAppFamilyTableAdd(struct _RM_SERVICE_GLOBALS *a1, struct _RM_PSM_APP_FAMILY *a2)
{
  unsigned __int64 v2; // rsi
  __int64 v4; // rbx
  char *v5; // r8
  char v6; // cl
  unsigned __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 v9; // r10
  __int64 v10; // r14
  _QWORD *v11; // r9
  __int64 v12; // rdx
  unsigned int v13; // edi
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // [rsp+20h] [rbp-38h]
  __int64 v18; // [rsp+60h] [rbp+8h]

  v2 = (unsigned __int64)a1 + 3360;
  v4 = (unsigned int)(2 * (*((_DWORD *)a1 + 841) >> 5));
  if ( *((_DWORD *)a1 + 840) >= (unsigned int)v4 )
  {
    if ( (unsigned int)v4 < 4 )
      v4 = 4LL;
    v5 = (char *)CempHeapAllocateForHashTable(8LL * (unsigned int)v4, 0LL);
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
        memset64(v5, v2 | 1, v7);
      v8 = 0;
      v9 = -1LL << (*(_BYTE *)(v2 + 4) & 0x1F);
      if ( (*(_DWORD *)(v2 + 4) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v10 = *(_QWORD *)(v2 + 8);
          while ( 1 )
          {
            v11 = *(_QWORD **)(v10 + 8LL * v8);
            if ( ((unsigned __int8)v11 & 1) != 0 )
              break;
            *(_QWORD *)(v10 + 8LL * v8) = *v11;
            v18 = v9 & v11[1];
            v12 = (37
                 * (BYTE6(v18)
                  + 37
                  * (BYTE5(v18)
                   + 37
                   * (BYTE4(v18)
                    + 37 * (BYTE3(v18) + 37 * (BYTE2(v18) + 37 * (BYTE1(v18) + 37 * ((unsigned __int8)v18 + 11623883)))))))
                 + HIBYTE(v18)) & (unsigned int)(v4 - 1);
            *v11 = *(_QWORD *)&v5[8 * v12];
            *(_QWORD *)&v5[8 * v12] = v11;
          }
          ++v8;
        }
        while ( v8 < *(_DWORD *)(v2 + 4) >> 5 );
      }
      *(_DWORD *)(v2 + 4) &= 0x1Fu;
      v16 = *(_QWORD *)(v2 + 8);
      *(_DWORD *)(v2 + 4) |= 32 * v4;
      *(_QWORD *)(v2 + 8) = v5;
      if ( v16 )
        CempHeapFreeForHashTable(v16, 0LL);
    }
  }
  v13 = *(_DWORD *)(v2 + 4);
  v17 = *((_QWORD *)a2 + 1) & (-1LL << (v13 & 0x1F));
  v14 = *(_QWORD *)(v2 + 8);
  v15 = (37
       * (BYTE6(v17)
        + 37
        * (BYTE5(v17)
         + 37
         * (BYTE4(v17)
          + 37 * (BYTE3(v17) + 37 * (BYTE2(v17) + 37 * (BYTE1(v17) + 37 * ((unsigned __int8)v17 + 11623883)))))))
       + HIBYTE(v17)) & ((v13 >> 5) - 1);
  *(_QWORD *)a2 = *(_QWORD *)(v14 + 8 * v15);
  *(_QWORD *)(v14 + 8 * v15) = a2;
  ++*(_DWORD *)v2;
}
