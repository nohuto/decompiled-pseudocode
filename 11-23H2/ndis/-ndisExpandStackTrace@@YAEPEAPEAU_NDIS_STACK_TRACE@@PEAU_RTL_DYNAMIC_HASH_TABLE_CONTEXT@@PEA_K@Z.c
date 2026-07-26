/*
 * XREFs of ?ndisExpandStackTrace@@YAEPEAPEAU_NDIS_STACK_TRACE@@PEAU_RTL_DYNAMIC_HASH_TABLE_CONTEXT@@PEA_K@Z @ 0x1C00C4E70
 * Callers:
 *     ?ndisCaptureStackTrace@@YAKK@Z @ 0x1C00C4C54 (-ndisCaptureStackTrace@@YAKK@Z.c)
 * Callees:
 *     memmove @ 0x1C0038400 (memmove.c)
 */

unsigned __int8 __fastcall ndisExpandStackTrace(
        struct _NDIS_STACK_TRACE **a1,
        struct _RTL_DYNAMIC_HASH_TABLE_CONTEXT *a2,
        unsigned __int64 *a3)
{
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v3; // rsi
  unsigned int v7; // ebx
  __int64 Pool2; // rdi
  __int128 v9; // xmm1
  int v10; // eax

  v3 = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)*a1;
  v7 = (*((_DWORD *)*a1 + 6) >> 30) + 1;
  if ( *((_DWORD *)*a1 + 6) >> 30 == 3
    || (Pool2 = ExAllocatePool2(64LL, (unsigned int)(32 * ((*((_DWORD *)*a1 + 6) >> 30) + 4)), 1802716238)) == 0 )
  {
    BYTE2(WPP_MAIN_CB.Dpc.SystemArgument2) = 1;
    return 0;
  }
  else
  {
    v9 = *((_OWORD *)a3 + 1);
    v10 = LODWORD(v3[1].Linkage.Flink) + 0x40000000;
    *(_OWORD *)(Pool2 + 32) = *(_OWORD *)a3;
    *(_OWORD *)(Pool2 + 48) = v9;
    *(_DWORD *)(Pool2 + 24) = v10;
    memmove((void *)(Pool2 + 64), &v3[1].Linkage.Blink, 32LL * v7);
    RtlRemoveEntryHashTable((PRTL_DYNAMIC_HASH_TABLE)&WPP_MAIN_CB.Dpc.DpcData, v3, a2);
    RtlInsertEntryHashTable(
      (PRTL_DYNAMIC_HASH_TABLE)&WPP_MAIN_CB.Dpc.DpcData,
      (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Pool2,
      v3->Signature,
      a2);
    *a1 = (struct _NDIS_STACK_TRACE *)Pool2;
    ExFreePoolWithTag(v3, 0);
    return 1;
  }
}
