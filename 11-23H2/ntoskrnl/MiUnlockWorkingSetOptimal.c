/*
 * XREFs of MiUnlockWorkingSetOptimal @ 0x140650880
 * Callers:
 *     MiInitializeBootShadowStackPage @ 0x140644EB4 (MiInitializeBootShadowStackPage.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiUnlockWorkingSetOptimal(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  MiUnlockPageTableInternal(a1, a2);
  return MiUnlockWorkingSetShared(a1, a3);
}
