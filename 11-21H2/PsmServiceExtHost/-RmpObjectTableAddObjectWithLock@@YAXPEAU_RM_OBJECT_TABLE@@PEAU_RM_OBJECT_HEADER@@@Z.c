/*
 * XREFs of ?RmpObjectTableAddObjectWithLock@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z @ 0x180026380
 * Callers:
 *     ?RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800260A0 (-RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpObjectTableAddObject@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z @ 0x18008CB74 (-RmpObjectTableAddObject@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z.c)
 * Callees:
 *     CempHeapFreeForHashTable @ 0x18003E714 (CempHeapFreeForHashTable.c)
 *     CempHeapAllocateForHashTable @ 0x18003E738 (CempHeapAllocateForHashTable.c)
 */

void __fastcall RmpObjectTableAddObjectWithLock(unsigned __int64 a1, struct _RM_OBJECT_HEADER *a2)
{
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
  unsigned int v14; // edi
  unsigned __int64 v15; // r14
  _QWORD *v16; // rcx
  __int64 v17; // rcx

  v4 = (unsigned int)(2 * (*(_DWORD *)(a1 + 4) >> 5));
  if ( *(_DWORD *)a1 >= (unsigned int)v4 )
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
        memset64(v5, a1 | 1, v8);
      v9 = *(_DWORD *)(a1 + 4);
      v10 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
      if ( (v9 & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v11 = (_QWORD **)(*(_QWORD *)(a1 + 8) + 8LL * v7);
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
          v9 = *(_DWORD *)(a1 + 4);
          ++v7;
        }
        while ( v7 < v9 >> 5 );
      }
      v17 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 8) = v5;
      *(_DWORD *)(a1 + 4) = (32 * v4) | v9 & 0x1F;
      if ( v17 )
        CempHeapFreeForHashTable(v17, 0LL);
    }
  }
  v14 = *(_DWORD *)(a1 + 4);
  v15 = *((_QWORD *)a2 + 1) & (-1LL << (v14 & 0x1F));
  v16 = (_QWORD *)(*(_QWORD *)(a1 + 8)
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
  *(_QWORD *)a2 = *v16;
  *v16 = a2;
  ++*(_DWORD *)a1;
}
