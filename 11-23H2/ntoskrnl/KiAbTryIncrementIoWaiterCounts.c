/*
 * XREFs of KiAbTryIncrementIoWaiterCounts @ 0x1402A8700
 * Callers:
 *     KiSwapThread @ 0x14023F4C0 (KiSwapThread.c)
 *     KiDispatchInterrupt @ 0x140249600 (KiDispatchInterrupt.c)
 *     KiAbProcessThreadLocks @ 0x1402BC5E0 (KiAbProcessThreadLocks.c)
 *     KiAbForceProcessLockEntry @ 0x1403CCC68 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     PsGetIoPriorityThread @ 0x1402A8E40 (PsGetIoPriorityThread.c)
 */

__int64 __fastcall KiAbTryIncrementIoWaiterCounts(unsigned __int8 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  _BYTE *v5; // r11
  unsigned int v7; // r10d
  unsigned __int8 *v8; // r9

  if ( !a1[17] )
    return 0LL;
  v4 = a1[19];
  v5 = a1 + 19;
  if ( (v4 & 6) == 6 )
    return 0LL;
  v7 = 0;
  v8 = &a1[-96 * a1[16]];
  if ( (v4 & 2) == 0 && ((int)PsGetIoPriorityThread(v8 - 1696, v4, a3, v8) >= 2 || *((_DWORD *)v8 - 64) != v7) )
  {
    ++*(_BYTE *)(a2 + 92);
    *v5 |= 2u;
    if ( *(_BYTE *)(a2 + 92) == 1 )
      v7 = 1;
  }
  if ( (*v5 & 4) == 0 && (!*((_DWORD *)v8 - 62) || *((_DWORD *)v8 - 63)) )
  {
    *(_DWORD *)(a2 + 92) ^= ((unsigned __int16)*(_DWORD *)(a2 + 92) ^ (unsigned __int16)(*(_DWORD *)(a2 + 92) + 256)) & 0x7F00;
    *v5 |= 4u;
    if ( (*(_DWORD *)(a2 + 92) & 0x7F00) == 0x100 )
      v7 |= 2u;
  }
  return v7;
}
