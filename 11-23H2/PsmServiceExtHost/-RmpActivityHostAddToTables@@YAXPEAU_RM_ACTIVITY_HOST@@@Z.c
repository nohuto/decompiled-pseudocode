/*
 * XREFs of ?RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002E038
 * Callers:
 *     ?RmpActivityHostCompleteInitialization@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002DC94 (-RmpActivityHostCompleteInitialization@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     CempHeapAllocateForHashTable @ 0x180013F04 (CempHeapAllocateForHashTable.c)
 *     CempHeapFreeForHashTable @ 0x180013F54 (CempHeapFreeForHashTable.c)
 *     ?RmpObjectTableAddObjectWithLock@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z @ 0x18002DD38 (-RmpObjectTableAddObjectWithLock@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ??R?$hash@U_RM_PSM_HOST_INFO@@@utl@@QEBA_KAEBU_RM_PSM_HOST_INFO@@@Z @ 0x18002ECEC (--R-$hash@U_RM_PSM_HOST_INFO@@@utl@@QEBA_KAEBU_RM_PSM_HOST_INFO@@@Z.c)
 */

void __fastcall RmpActivityHostAddToTables(struct _RM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rdi
  __int64 v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rbx
  char *v6; // r8
  char v7; // cl
  unsigned __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 v10; // r10
  __int64 v11; // r14
  _QWORD *v12; // r9
  __int64 v13; // rdx
  unsigned int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // rdi
  void *v17; // rcx
  __int64 v18; // [rsp+20h] [rbp-38h]
  __int64 v19; // [rsp+60h] [rbp+8h]

  v1 = *((_QWORD *)a1 + 6);
  v3 = v1 + 32;
  *((_QWORD *)a1 + 177) = utl::hash<_RM_PSM_HOST_INFO>::operator()(a1, (char *)a1 + 88);
  RtlAcquireSRWLockExclusive(v1 + 32);
  RmpObjectTableAddObjectWithLock(v1 + 16, a1);
  v4 = v1 + 3344;
  v5 = (unsigned int)(2 * (*(_DWORD *)(v1 + 3348) >> 5));
  if ( *(_DWORD *)(v1 + 3344) >= (unsigned int)v5 )
  {
    if ( (unsigned int)v5 < 4 )
      v5 = 4LL;
    v6 = (char *)CempHeapAllocateForHashTable(8LL * (unsigned int)v5);
    if ( v6 )
    {
      if ( (((_DWORD)v5 - 1) & (unsigned int)v5) != 0 )
      {
        v7 = -1;
        do
        {
          ++v7;
          LODWORD(v5) = (unsigned int)v5 >> 1;
        }
        while ( (_DWORD)v5 );
        v5 = (unsigned int)(1 << v7);
      }
      if ( (unsigned int)v5 > 0x4000000 )
        v5 = 0x4000000LL;
      v8 = (unsigned int)v5;
      if ( v6 > &v6[8 * v5] )
        v8 = 0LL;
      if ( v8 )
        memset64(v6, v4 | 1, v8);
      v9 = 0;
      v10 = -1LL << (*(_BYTE *)(v4 + 4) & 0x1F);
      if ( (*(_DWORD *)(v4 + 4) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v11 = *(_QWORD *)(v4 + 8);
          while ( 1 )
          {
            v12 = *(_QWORD **)(v11 + 8LL * v9);
            if ( ((unsigned __int8)v12 & 1) != 0 )
              break;
            *(_QWORD *)(v11 + 8LL * v9) = *v12;
            v19 = v10 & v12[1];
            v13 = (37
                 * (BYTE6(v19)
                  + 37
                  * (BYTE5(v19)
                   + 37
                   * (BYTE4(v19)
                    + 37 * (BYTE3(v19) + 37 * (BYTE2(v19) + 37 * (BYTE1(v19) + 37 * ((unsigned __int8)v19 + 11623883)))))))
                 + HIBYTE(v19)) & (unsigned int)(v5 - 1);
            *v12 = *(_QWORD *)&v6[8 * v13];
            *(_QWORD *)&v6[8 * v13] = v12;
          }
          ++v9;
        }
        while ( v9 < *(_DWORD *)(v4 + 4) >> 5 );
      }
      *(_DWORD *)(v4 + 4) &= 0x1Fu;
      v17 = *(void **)(v4 + 8);
      *(_DWORD *)(v4 + 4) |= 32 * v5;
      *(_QWORD *)(v4 + 8) = v6;
      if ( v17 )
        CempHeapFreeForHashTable(v17);
    }
  }
  v14 = *(_DWORD *)(v4 + 4);
  v18 = *((_QWORD *)a1 + 177) & (-1LL << (v14 & 0x1F));
  v15 = *(_QWORD *)(v4 + 8);
  v16 = (37
       * (BYTE6(v18)
        + 37
        * (BYTE5(v18)
         + 37
         * (BYTE4(v18)
          + 37 * (BYTE3(v18) + 37 * (BYTE2(v18) + 37 * (BYTE1(v18) + 37 * ((unsigned __int8)v18 + 11623883)))))))
       + HIBYTE(v18)) & ((v14 >> 5) - 1);
  *((_QWORD *)a1 + 176) = *(_QWORD *)(v15 + 8 * v16);
  *(_QWORD *)(v15 + 8 * v16) = (char *)a1 + 1408;
  ++*(_DWORD *)v4;
  RtlReleaseSRWLockExclusive(v3);
}
