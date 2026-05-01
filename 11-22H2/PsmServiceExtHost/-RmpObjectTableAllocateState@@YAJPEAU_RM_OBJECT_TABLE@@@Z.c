/*
 * XREFs of ?RmpObjectTableAllocateState@@YAJPEAU_RM_OBJECT_TABLE@@@Z @ 0x180044F40
 * Callers:
 *     ?RmpActivityHostAllocateModuleState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180044DE4 (-RmpActivityHostAllocateModuleState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180044EB0 (-RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     CempHeapAllocateForHashTable @ 0x180013F04 (CempHeapAllocateForHashTable.c)
 *     CempHeapFreeForHashTable @ 0x180013F54 (CempHeapFreeForHashTable.c)
 */

__int64 __fastcall RmpObjectTableAllocateState(unsigned __int64 a1)
{
  __int64 v2; // rbx
  char v3; // r8
  char *v5; // rax
  char v6; // cl
  unsigned __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 v9; // r10
  __int64 v10; // r14
  _QWORD *v11; // r11
  __int64 v12; // rdx
  void *v13; // rcx
  __int64 v14; // [rsp+40h] [rbp+8h]

  v2 = (unsigned int)(2 * (*(_DWORD *)(a1 + 4) >> 5));
  if ( *(_DWORD *)a1 >= (unsigned int)v2 )
  {
    if ( (unsigned int)v2 < 4 )
      v2 = 4LL;
    v5 = (char *)CempHeapAllocateForHashTable(8LL * (unsigned int)v2);
    v3 = 0;
    if ( v5 )
    {
      if ( (((_DWORD)v2 - 1) & (unsigned int)v2) != 0 )
      {
        v6 = -1;
        do
        {
          ++v6;
          LODWORD(v2) = (unsigned int)v2 >> 1;
        }
        while ( (_DWORD)v2 );
        v2 = (unsigned int)(1 << v6);
      }
      if ( (unsigned int)v2 > 0x4000000 )
        v2 = 0x4000000LL;
      v7 = (unsigned int)v2;
      if ( v5 > &v5[8 * v2] )
        v7 = 0LL;
      if ( v7 )
        memset64(v5, a1 | 1, v7);
      v8 = 0;
      v9 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
      if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v10 = *(_QWORD *)(a1 + 8);
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
                    + 37 * (BYTE3(v14) + 37 * (BYTE2(v14) + 37 * (BYTE1(v14) + 37 * ((unsigned __int8)v14 + 11623883)))))))
                 + HIBYTE(v14)) & (unsigned int)(v2 - 1);
            *v11 = *(_QWORD *)&v5[8 * v12];
            *(_QWORD *)&v5[8 * v12] = v11;
          }
          ++v8;
        }
        while ( v8 < *(_DWORD *)(a1 + 4) >> 5 );
      }
      *(_DWORD *)(a1 + 4) &= 0x1Fu;
      v13 = *(void **)(a1 + 8);
      *(_DWORD *)(a1 + 4) |= 32 * v2;
      *(_QWORD *)(a1 + 8) = v5;
      if ( v13 )
        CempHeapFreeForHashTable(v13);
    }
    else if ( *(_DWORD *)(a1 + 4) < 0x20u )
    {
      return v3 == 0 ? 0xC0000017 : 0;
    }
  }
  v3 = 1;
  return v3 == 0 ? 0xC0000017 : 0;
}
