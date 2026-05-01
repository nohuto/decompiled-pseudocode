/*
 * XREFs of ?RmpObjectTableAllocateState@@YAJPEAU_RM_OBJECT_TABLE@@@Z @ 0x18004AE44
 * Callers:
 *     ?RmpActivityHostAllocateModuleState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18004ACE8 (-RmpActivityHostAllocateModuleState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18004ADB4 (-RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     CempHeapFreeForHashTable @ 0x18003E714 (CempHeapFreeForHashTable.c)
 *     CempHeapAllocateForHashTable @ 0x18003E738 (CempHeapAllocateForHashTable.c)
 */

__int64 __fastcall RmpObjectTableAllocateState(unsigned __int64 a1)
{
  __int64 v2; // rbx
  char v3; // r8
  char *v5; // rax
  char v6; // cl
  unsigned __int64 v7; // rcx
  unsigned int v8; // edx
  unsigned int v9; // edi
  __int64 v10; // r11
  __int64 v11; // r14
  _QWORD *v12; // r10
  __int64 v13; // rdx
  void *v14; // rcx
  __int64 v15; // [rsp+40h] [rbp+8h]

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
      v8 = *(_DWORD *)(a1 + 4);
      v9 = 0;
      v10 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
      if ( (v8 & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v11 = *(_QWORD *)(a1 + 8);
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
                    + 37 * (BYTE3(v15) + 37 * (BYTE2(v15) + 37 * (BYTE1(v15) + 37 * ((unsigned __int8)v15 + 11623883)))))))
                 + HIBYTE(v15)) & (unsigned int)(v2 - 1);
            *v12 = *(_QWORD *)&v5[8 * v13];
            *(_QWORD *)&v5[8 * v13] = v12;
          }
          v8 = *(_DWORD *)(a1 + 4);
          ++v9;
        }
        while ( v9 < v8 >> 5 );
      }
      v14 = *(void **)(a1 + 8);
      *(_QWORD *)(a1 + 8) = v5;
      *(_DWORD *)(a1 + 4) = (32 * v2) | v8 & 0x1F;
      if ( v14 )
        CempHeapFreeForHashTable(v14);
    }
    else if ( *(_DWORD *)(a1 + 4) < 0x20u )
    {
      return v3 == 0 ? 0xC0000017 : 0;
    }
  }
  v3 = 1;
  return v3 == 0 ? 0xC0000017 : 0;
}
