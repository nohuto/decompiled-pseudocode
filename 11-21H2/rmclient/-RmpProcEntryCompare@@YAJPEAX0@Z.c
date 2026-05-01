/*
 * XREFs of ?RmpProcEntryCompare@@YAJPEAX0@Z @ 0x180013F28
 * Callers:
 *     CemRcTableFindOrInsertEx @ 0x1800151C8 (CemRcTableFindOrInsertEx.c)
 *     CempRcTableFindUnsafe @ 0x180015450 (CempRcTableFindUnsafe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpProcEntryCompare(void *a1, _DWORD *a2)
{
  if ( (unsigned int)a1 >= a2[20] )
    return (_DWORD)a1 != a2[20];
  else
    return 0xFFFFFFFFLL;
}
