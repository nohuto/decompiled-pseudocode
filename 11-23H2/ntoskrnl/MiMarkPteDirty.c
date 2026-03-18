/*
 * XREFs of MiMarkPteDirty @ 0x14034B510
 * Callers:
 *     MmCheckCachedPageStates @ 0x140265320 (MmCheckCachedPageStates.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetShared @ 0x14023C500 (MiUnlockWorkingSetShared.c)
 *     MiWriteValidPteNewProtection @ 0x140284800 (MiWriteValidPteNewProtection.c)
 *     MiLockWorkingSetOptimal @ 0x14028596C (MiLockWorkingSetOptimal.c)
 *     MiUnlockPageTableInternal @ 0x1403195C0 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiMarkPteDirty(__int64 *a1)
{
  __int64 result; // rax
  char *AnyMultiplexedVm; // rdi
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rsi
  unsigned __int8 v7; // [rsp+30h] [rbp+8h] BYREF

  result = *a1;
  v7 = 0;
  if ( (result & 0x42) == 0 && (result & 0x800) != 0 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(0);
    v4 = MiLockWorkingSetOptimal((__int64)AnyMultiplexedVm, (unsigned __int64)a1, &v7);
    v5 = *a1;
    v6 = v4;
    if ( (*a1 & 1) != 0 && (v5 & 0x42) == 0 && (v5 & 0x800) != 0 )
      MiWriteValidPteNewProtection((unsigned __int64)a1, v5 | 0x62);
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v6);
    return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v7);
  }
  return result;
}
