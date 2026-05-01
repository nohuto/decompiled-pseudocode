/*
 * XREFs of ?RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18004ADB4
 * Callers:
 *     ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180049BB4 (-RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     CempHeapFreeForHashTable @ 0x18003E714 (CempHeapFreeForHashTable.c)
 *     CempHeapAllocateForHashTable @ 0x18003E738 (CempHeapAllocateForHashTable.c)
 *     ?RmpObjectTableAllocateState@@YAJPEAU_RM_OBJECT_TABLE@@@Z @ 0x18004AE44 (-RmpObjectTableAllocateState@@YAJPEAU_RM_OBJECT_TABLE@@@Z.c)
 *     ?RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18004AE94 (-RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerInitializeReservedCpuSets@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18004B5E8 (-RmpCpuSetManagerInitializeReservedCpuSets@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 */

__int64 __fastcall RmpCpuSetManagerAllocateState(struct _RM_SERVICE_GLOBALS *a1)
{
  char *v1; // rbp
  int State; // edi
  __int64 v4; // rbx
  char *v5; // r8
  char v6; // cl
  unsigned __int64 v7; // rcx
  unsigned int v8; // edx
  unsigned int v9; // edi
  __int64 v10; // r10
  __int64 v11; // r14
  _QWORD *v12; // r9
  __int64 v13; // rdx
  void *v14; // rcx
  __int64 v15; // [rsp+40h] [rbp+8h]

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
          v8 = *((_DWORD *)v1 + 19);
          v9 = 0;
          v10 = -1LL << (v1[76] & 0x1F);
          if ( (v8 & 0xFFFFFFE0) != 0 )
          {
            do
            {
              v11 = *((_QWORD *)v1 + 10);
              while ( 1 )
              {
                v12 = *(_QWORD **)(v11 + 8LL * v9);
                if ( ((unsigned __int8)v12 & 1) != 0 )
                  break;
                *(_QWORD *)(v11 + 8LL * v9) = *v12;
                v15 = v10 & v12[1];
                v13 = (37
                     * (BYTE6(v15)
                      + 37
                      * (BYTE5(v15)
                       + 37
                       * (BYTE4(v15)
                        + 37
                        * (BYTE3(v15) + 37 * (BYTE2(v15) + 37 * (BYTE1(v15) + 37 * ((unsigned __int8)v15 + 11623883)))))))
                     + HIBYTE(v15)) & (unsigned int)(v4 - 1);
                *v12 = *(_QWORD *)&v5[8 * v13];
                *(_QWORD *)&v5[8 * v13] = v12;
              }
              v8 = *((_DWORD *)v1 + 19);
              ++v9;
            }
            while ( v9 < v8 >> 5 );
          }
          v14 = (void *)*((_QWORD *)v1 + 10);
          *((_QWORD *)v1 + 10) = v5;
          *((_DWORD *)v1 + 19) = (32 * v4) | v8 & 0x1F;
          if ( v14 )
            CempHeapFreeForHashTable(v14);
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
