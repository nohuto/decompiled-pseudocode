/*
 * XREFs of MiTrimPteWorker @ 0x1402E3B68
 * Callers:
 *     MiTrimPte @ 0x1402E38C0 (MiTrimPte.c)
 *     MiTrimWorkingSetEPTCallback @ 0x140635A20 (MiTrimWorkingSetEPTCallback.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x14027F800 (MiInsertTbFlushEntry.c)
 *     MiTrimThisWsle @ 0x1402E2A68 (MiTrimThisWsle.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1402E3C4C (MI_WSLE_LOG_ACCESS.c)
 *     MiTrimWorkingSetBuildup @ 0x14034FF60 (MiTrimWorkingSetBuildup.c)
 */

__int64 __fastcall MiTrimPteWorker(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 a6,
        _DWORD *a7)
{
  __int64 v7; // rbp
  unsigned int v11; // esi
  __int64 v13; // rax

  v7 = *(_QWORD *)(a1 + 24);
  v11 = 0;
  if ( !(unsigned int)MiTrimThisWsle(v7, a3, a4, (int *)a5, a6, a7) )
    return 0LL;
  MiInsertTbFlushEntry(a5 + 64, a3, 1LL, 0);
  if ( (*(_DWORD *)a5 & 0x100) != 0 )
    MI_WSLE_LOG_ACCESS(v7, a2);
  v13 = *(_QWORD *)(a5 + 16) + 1LL;
  *(_QWORD *)(a5 + 16) = v13;
  if ( v13 != *(_QWORD *)(a5 + 8) && *(_DWORD *)(a5 + 76) != *(_DWORD *)(a5 + 72) )
    return 0LL;
  MiTrimWorkingSetBuildup(a1, a5);
  LOBYTE(v11) = *(_QWORD *)(a5 + 16) == *(_QWORD *)(a5 + 8);
  return v11;
}
