/*
 * XREFs of MiDirtySystemCachePte @ 0x140351578
 * Callers:
 *     MmCopyToCachedPage @ 0x1402CD7D0 (MmCopyToCachedPage.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14023C500 (MiUnlockWorkingSetShared.c)
 *     MiWriteValidPteNewProtection @ 0x140284800 (MiWriteValidPteNewProtection.c)
 *     MiLockWorkingSetOptimal @ 0x14028596C (MiLockWorkingSetOptimal.c)
 *     MiUnlockPageTableInternal @ 0x1403195C0 (MiUnlockPageTableInternal.c)
 */

void __fastcall MiDirtySystemCachePte(__int64 a1, __int64 *a2, __int16 a3)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  unsigned __int8 v8; // [rsp+40h] [rbp+18h] BYREF

  if ( (a3 & 0x42) == 0 )
  {
    v8 = 0;
    if ( (a3 & 0x800) != 0 )
    {
      v5 = MiLockWorkingSetOptimal(a1, (unsigned __int64)a2, &v8);
      v6 = *a2;
      v7 = v5;
      if ( (*a2 & 1) != 0 && (v6 & 0x42) == 0 && (v6 & 0x800) != 0 )
        MiWriteValidPteNewProtection((unsigned __int64)a2, v6 | 0x62);
      MiUnlockPageTableInternal(a1, v7);
      MiUnlockWorkingSetShared(a1, v8);
    }
  }
}
