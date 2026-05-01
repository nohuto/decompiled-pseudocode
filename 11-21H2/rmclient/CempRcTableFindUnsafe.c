/*
 * XREFs of CempRcTableFindUnsafe @ 0x180015450
 * Callers:
 *     ?RmpProcFindOrCreateEntry@@YAJPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@KPEAX1PEAPEAU_RM_PROC_ENTRY@@@Z @ 0x180014CB8 (-RmpProcFindOrCreateEntry@@YAJPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@KPEAX1PEAPEAU_RM_PROC_ENTRY@@@.c)
 *     CemRcTableFindOrInsertEx @ 0x1800151C8 (CemRcTableFindOrInsertEx.c)
 * Callees:
 *     ?RmpProcEntryCompare@@YAJPEAX0@Z @ 0x180013F28 (-RmpProcEntryCompare@@YAJPEAX0@Z.c)
 */

__int64 __fastcall CempRcTableFindUnsafe(__int64 a1, void *a2)
{
  __int64 v3; // rbx
  int v4; // edi
  int v5; // eax
  __int64 v6; // rax

  v3 = *(_QWORD *)a1;
  v4 = *(_BYTE *)(a1 + 8) & 1;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
  {
    if ( !v3 )
      return 0LL;
    v3 ^= a1;
  }
  if ( v3 )
  {
    do
    {
      v5 = RmpProcEntryCompare(a2, (_DWORD *)v3);
      if ( v5 >= 0 )
      {
        if ( v5 <= 0 )
          break;
        v6 = *(_QWORD *)(v3 + 8);
      }
      else
      {
        v6 = *(_QWORD *)v3;
      }
      if ( v4 && v6 )
        v3 ^= v6;
      else
        v3 = v6;
    }
    while ( v3 );
    if ( v3 )
      return v3;
  }
  return 0LL;
}
