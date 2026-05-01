/*
 * XREFs of ?RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800260A0
 * Callers:
 *     ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180024F40 (-RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_I.c)
 * Callees:
 *     ?RmpObjectTableAddObjectWithLock@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z @ 0x180026380 (-RmpObjectTableAddObjectWithLock@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ??R?$hash@U_RM_PSM_HOST_INFO@@@utl@@QEBA_KAEBU_RM_PSM_HOST_INFO@@@Z @ 0x180026610 (--R-$hash@U_RM_PSM_HOST_INFO@@@utl@@QEBA_KAEBU_RM_PSM_HOST_INFO@@@Z.c)
 *     CempHeapFreeForHashTable @ 0x18003E714 (CempHeapFreeForHashTable.c)
 *     CempHeapAllocateForHashTable @ 0x18003E738 (CempHeapAllocateForHashTable.c)
 */

void __fastcall RmpActivityHostAddToTables(struct _RM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rdi
  unsigned __int64 v3; // rsi
  __int64 v4; // rbx
  char *v5; // r10
  char v6; // cl
  unsigned int v7; // ebp
  unsigned __int64 v8; // rcx
  unsigned int v9; // edx
  __int64 v10; // r11
  _QWORD **v11; // r9
  _QWORD *v12; // rax
  unsigned __int64 v13; // rdx
  unsigned int v14; // r8d
  unsigned __int64 v15; // r15
  _QWORD *v16; // rdx
  __int64 v17; // rcx

  v1 = *((_QWORD *)a1 + 6);
  *((_QWORD *)a1 + 177) = utl::hash<_RM_PSM_HOST_INFO>::operator()(a1, (char *)a1 + 88);
  RtlAcquireSRWLockExclusive(v1 + 32);
  RmpObjectTableAddObjectWithLock((struct _RM_OBJECT_TABLE *)(v1 + 16), a1);
  v3 = v1 + 3040;
  v4 = (unsigned int)(2 * (*(_DWORD *)(v1 + 3044) >> 5));
  if ( *(_DWORD *)(v1 + 3040) >= (unsigned int)v4 )
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
      v7 = 0;
      v8 = (unsigned int)v4;
      if ( v5 > &v5[8 * v4] )
        v8 = 0LL;
      if ( v8 )
        memset64(v5, v3 | 1, v8);
      v9 = *(_DWORD *)(v1 + 3044);
      v10 = -1LL << (*(_BYTE *)(v1 + 3044) & 0x1F);
      if ( (v9 & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v11 = (_QWORD **)(*(_QWORD *)(v1 + 3048) + 8LL * v7);
          while ( 1 )
          {
            v12 = *v11;
            if ( ((unsigned __int8)*v11 & 1) != 0 )
              break;
            *v11 = (_QWORD *)*v12;
            v13 = ((((unsigned __int64)v10 & v12[1]) >> 56)
                 + 37
                 * ((unsigned __int8)(((unsigned __int64)v10 & v12[1]) >> 48)
                  + 37
                  * ((unsigned __int8)((unsigned __int16)(((unsigned __int64)v10 & v12[1]) >> 32) >> 8)
                   + 37
                   * ((unsigned __int8)(((unsigned __int64)v10 & v12[1]) >> 32)
                    + 37
                    * ((((unsigned int)v10 & (_DWORD)v12[1]) >> 24)
                     + 37
                     * ((unsigned __int8)(((unsigned int)v10 & (_DWORD)v12[1]) >> 16)
                      + 37
                      * (37 * ((unsigned __int8)(v10 & v12[1]) + 11623883)
                       + (unsigned __int8)((unsigned __int16)(v10 & v12[1]) >> 8)))))))) & (unsigned int)(v4 - 1);
            *v12 = *(_QWORD *)&v5[8 * v13];
            *(_QWORD *)&v5[8 * v13] = v12;
          }
          v9 = *(_DWORD *)(v1 + 3044);
          ++v7;
        }
        while ( v7 < v9 >> 5 );
      }
      v17 = *(_QWORD *)(v1 + 3048);
      *(_QWORD *)(v1 + 3048) = v5;
      *(_DWORD *)(v1 + 3044) = (32 * v4) | v9 & 0x1F;
      if ( v17 )
        CempHeapFreeForHashTable(v17, 0LL);
    }
  }
  v14 = *(_DWORD *)(v1 + 3044);
  v15 = *((_QWORD *)a1 + 177) & (-1LL << (v14 & 0x1F));
  v16 = (_QWORD *)(*(_QWORD *)(v1 + 3048)
                 + 8
                 * ((HIBYTE(v15)
                   + 37
                   * (BYTE6(v15)
                    + 37
                    * (BYTE5(v15)
                     + 37
                     * (BYTE4(v15)
                      + 37
                      * (BYTE3(v15) + 37 * (BYTE2(v15) + 37 * (37 * ((unsigned __int8)v15 + 11623883) + BYTE1(v15)))))))) & ((v14 >> 5) - 1)));
  *((_QWORD *)a1 + 176) = *v16;
  *v16 = (char *)a1 + 1408;
  ++*(_DWORD *)v3;
  RtlReleaseSRWLockExclusive(v1 + 32);
}
