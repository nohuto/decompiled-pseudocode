/*
 * XREFs of MiEmptyWorkingSetHelper @ 0x14034947C
 * Callers:
 *     MiEmptyPte @ 0x140349410 (MiEmptyPte.c)
 *     MiUpdateOldPteWorker @ 0x14046C7E6 (MiUpdateOldPteWorker.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x14027F800 (MiInsertTbFlushEntry.c)
 *     MiFreeWsleList @ 0x140280EB0 (MiFreeWsleList.c)
 *     MiWalkVaCheckCommon @ 0x1402E3AF0 (MiWalkVaCheckCommon.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1402E3C4C (MI_WSLE_LOG_ACCESS.c)
 */

__int64 __fastcall MiEmptyWorkingSetHelper(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v8; // rsi
  __int64 v9; // rbp
  BOOL v10; // r9d
  __int64 v12; // [rsp+68h] [rbp+10h] BYREF

  v8 = (__int64)(a2 << 25) >> 16;
  v12 = MI_READ_PTE_LOCK_FREE(a2);
  v9 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v12) >> 12) & 0xFFFFFFFFFFLL)
     - 0x220000000000LL;
  v10 = v8 < 0xFFFFF68000000000uLL || v8 > 0xFFFFF6FFFFFFFFFFuLL;
  if ( !(unsigned int)MiWalkVaCheckCommon(a1, a2, v9, v10, &v12)
    || *(_WORD *)(v9 + 32) > 1u && (*(_BYTE *)(a1 + 184) & 7) != 0 )
  {
    return 0LL;
  }
  if ( dword_140C67FE8 )
    MI_WSLE_LOG_ACCESS(a1, a2);
  MiInsertTbFlushEntry(a3, v8, 1LL, 0);
  if ( *(_DWORD *)(a3 + 12) == *(_DWORD *)(a3 + 8) )
    MiFreeWsleList(a1, a3, a4);
  return 1LL;
}
