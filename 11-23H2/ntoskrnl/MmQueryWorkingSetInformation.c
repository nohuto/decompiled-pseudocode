/*
 * XREFs of MmQueryWorkingSetInformation @ 0x14034C3F8
 * Callers:
 *     CmSipQueryProcessWorkingSetLimits @ 0x140374510 (CmSipQueryProcessWorkingSetLimits.c)
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x1405CC4D8 (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x1405CC734 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     NtQueryInformationProcess @ 0x1406FCCA0 (NtQueryInformationProcess.c)
 *     PspQueryQuotaLimits @ 0x1407BCE64 (PspQueryQuotaLimits.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 */

__int64 __fastcall MmQueryWorkingSetInformation(_QWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5, _DWORD *a6)
{
  unsigned __int64 *v10; // rbp
  unsigned __int8 v11; // dl

  *a6 = 0;
  v10 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  v11 = MiLockWorkingSetShared((__int64)v10);
  *a1 = v10[20] << 12;
  *a2 = v10[16] << 12;
  *a3 = v10[17] << 12;
  *a4 = v10[14] << 12;
  *a5 = v10[15] << 12;
  if ( *((char *)v10 + 184) < 0 )
    *a6 |= 4u;
  if ( (v10[23] & 0x40) != 0 )
    *a6 |= 1u;
  MiUnlockWorkingSetShared((__int64)v10, v11);
  return 0LL;
}
