/*
 * XREFs of ?RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180044E20
 * Callers:
 *     ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800448B8 (-RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     CempHeapAllocateForHashTable @ 0x180013F04 (CempHeapAllocateForHashTable.c)
 *     CempHeapFreeForHashTable @ 0x180013F54 (CempHeapFreeForHashTable.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpObjectTableAllocateState@@YAJPEAU_RM_OBJECT_TABLE@@@Z @ 0x180044EB0 (-RmpObjectTableAllocateState@@YAJPEAU_RM_OBJECT_TABLE@@@Z.c)
 *     ?RmpCpuSetManagerInitializeReservedCpuSets@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180044F00 (-RmpCpuSetManagerInitializeReservedCpuSets@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180044FB0 (-RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 */

__int64 __fastcall RmpCpuSetManagerAllocateState(struct _RM_SERVICE_GLOBALS *a1)
{
  char *v1; // rbp
  int State; // edi
  __int64 v4; // rbx
  char *v5; // r8
  char v6; // cl
  unsigned __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 v9; // r9
  __int64 v10; // r14
  _QWORD *v11; // r10
  __int64 v12; // rdx
  void *v13; // rcx
  __int64 v14; // [rsp+40h] [rbp+8h]

  v1 = (char *)a1 + 680;
  State = RmpObjectTableAllocateState((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 704));
  if ( State >= 0 )
  {
    State = RmpObjectTableAllocateState((struct _RM_OBJECT_TABLE *)(v1 + 48));
    if ( State >= 0 )
    {
      v4 = (unsigned int)(2 * (*((_DWORD *)v1 + 19) >> 5));
      if ( *((_DWORD *)v1 + 18) >= (unsigned int)v4 )
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
            memset64(v5, (unsigned __int64)(v1 + 72) | 1, v7);
          v8 = 0;
          v9 = -1LL << (v1[76] & 0x1F);
          if ( (*((_DWORD *)v1 + 19) & 0xFFFFFFE0) != 0 )
          {
            do
            {
              v10 = *((_QWORD *)v1 + 10);
              while ( 1 )
              {
                v11 = *(_QWORD **)(v10 + 8LL * v8);
                if ( ((unsigned __int8)v11 & 1) != 0 )
                  break;
                *(_QWORD *)(v10 + 8LL * v8) = *v11;
                v14 = v9 & v11[1];
                v12 = (37
                     * (BYTE6(v14)
                      + 37
                      * (BYTE5(v14)
                       + 37
                       * (BYTE4(v14)
                        + 37
                        * (BYTE3(v14) + 37 * (BYTE2(v14) + 37 * (BYTE1(v14) + 37 * ((unsigned __int8)v14 + 11623883)))))))
                     + HIBYTE(v14)) & (unsigned int)(v4 - 1);
                *v11 = *(_QWORD *)&v5[8 * v12];
                *(_QWORD *)&v5[8 * v12] = v11;
              }
              ++v8;
            }
            while ( v8 < *((_DWORD *)v1 + 19) >> 5 );
          }
          *((_DWORD *)v1 + 19) &= 0x1Fu;
          v13 = (void *)*((_QWORD *)v1 + 10);
          *((_DWORD *)v1 + 19) |= 32 * v4;
          *((_QWORD *)v1 + 10) = v5;
          if ( v13 )
            CempHeapFreeForHashTable(v13);
        }
        else if ( *((_DWORD *)v1 + 19) < 0x20u )
        {
          return (unsigned int)-1073741801;
        }
      }
      State = RmpCpuSetManagerInitializeReservedCpuSets((struct _RM_CPU_SET_MANAGER *)v1);
      if ( State >= 0 )
      {
        RmpAcquireGlobalLock();
        State = RmpCpuSetManagerResetValidMask((struct _RM_CPU_SET_MANAGER *)v1);
        RmpReleaseGlobalLock();
        if ( State >= 0 )
          return 0;
      }
    }
  }
  return (unsigned int)State;
}
