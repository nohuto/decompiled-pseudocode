/*
 * XREFs of ExpPlFindLimitEntry @ 0x14035D0D8
 * Callers:
 *     ExAllocateHeapPool @ 0x1402AD570 (ExAllocateHeapPool.c)
 *     ExpResizeBigPageTable @ 0x1403B9A3C (ExpResizeBigPageTable.c)
 *     ExAllocateContiguousHeapPool @ 0x1403BA2F4 (ExAllocateContiguousHeapPool.c)
 *     ExInsertPoolTag @ 0x1403BA6DC (ExInsertPoolTag.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140608088 (ExpInsertPoolTrackerExpansion.c)
 *     ExAllocateHeapSpecialPool @ 0x14060F280 (ExAllocateHeapSpecialPool.c)
 *     ExInitializePoolTracker @ 0x140B54C88 (ExInitializePoolTracker.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ExpPlFindLimitEntry(int a1)
{
  __int64 v1; // r11
  __int64 v2; // r9
  _QWORD *v4; // rdx

  v1 = -1LL << (dword_140CF8104 & 0x1F);
  v2 = (unsigned int)v1 & a1;
  if ( (unsigned int)dword_140CF8104 >> 5 )
  {
    v4 = (char *)qword_140CF8108
       + 8
       * ((37
         * (BYTE6(v2)
          + 37
          * (BYTE5(v2)
           + 37
           * (BYTE4(v2) + 37 * (BYTE3(v2) + 37 * (BYTE2(v2) + 37 * (BYTE1(v2) + 37 * ((unsigned __int8)v2 + 11623883)))))))
         + HIBYTE(v2)) & (((unsigned int)dword_140CF8104 >> 5) - 1));
    while ( 1 )
    {
      v4 = (_QWORD *)*v4;
      if ( ((unsigned __int8)v4 & 1) != 0 )
        break;
      if ( v2 == (v1 & v4[1]) )
        return v4;
    }
  }
  return 0LL;
}
