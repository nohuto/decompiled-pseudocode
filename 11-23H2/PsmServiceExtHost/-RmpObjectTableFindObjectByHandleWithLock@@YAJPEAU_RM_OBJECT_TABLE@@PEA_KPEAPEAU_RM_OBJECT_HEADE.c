/*
 * XREFs of ?RmpObjectTableFindObjectByHandleWithLock@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z @ 0x18002EF30
 * Callers:
 *     ?RmpObjectTableFindObjectByHandle@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z @ 0x18002EEB8 (-RmpObjectTableFindObjectByHandle@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpObjectTableFindObjectByHandleWithLock(
        struct _RM_OBJECT_TABLE *a1,
        unsigned __int64 *a2,
        struct _RM_OBJECT_HEADER **a3)
{
  unsigned __int64 v3; // rdi
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // r11
  __int64 v7; // r10

  v3 = *a2;
  v4 = *((_DWORD *)a1 + 1);
  v5 = 0LL;
  v6 = -1LL << (*((_BYTE *)a1 + 4) & 0x1F);
  v7 = v6 & (HIBYTE(v3)
           + 37
           * (BYTE6(v3)
            + 37
            * (BYTE5(v3)
             + 37
             * (BYTE4(v3)
              + 37 * (BYTE3(v3) + 37 * (BYTE2(v3) + 37 * (37 * ((unsigned __int8)v3 + 11623883LL) + BYTE1(v3))))))));
LABEL_2:
  if ( v5 )
    goto LABEL_5;
  if ( v4 >> 5 )
  {
    v5 = *((_QWORD *)a1 + 1)
       + 8LL
       * ((37
         * (BYTE6(v7)
          + 37
          * (BYTE5(v7)
           + 37
           * (BYTE4(v7) + 37 * (BYTE3(v7) + 37 * (BYTE2(v7) + 37 * (BYTE1(v7) + 37 * ((unsigned __int8)v7 + 11623883)))))))
         + HIBYTE(v7)) & ((v4 >> 5) - 1));
LABEL_5:
    while ( 1 )
    {
      v5 = *(_QWORD *)v5;
      if ( (v5 & 1) != 0 )
        break;
      if ( v7 == (v6 & *(_QWORD *)(v5 + 8)) )
      {
        if ( v3 != *(_QWORD *)(v5 + 32) )
          goto LABEL_2;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v5 + 16)) <= 1 )
          __fastfail(0xEu);
        *a3 = (struct _RM_OBJECT_HEADER *)v5;
        return 0LL;
      }
    }
  }
  return 3221226021LL;
}
