/*
 * XREFs of CmpTransMgrSyncHive @ 0x1407E79B0
 * Callers:
 *     CmpTransMgrPrepare @ 0x140768A9C (CmpTransMgrPrepare.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD960 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 *     HvpMarkDirty @ 0x140747110 (HvpMarkDirty.c)
 *     CmpFlushHive @ 0x140752E88 (CmpFlushHive.c)
 *     CmpLockRegistry @ 0x140AF54A0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 *     HvLockHiveFlusherExclusive @ 0x140AF5670 (HvLockHiveFlusherExclusive.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140AF568C (HvUnlockHiveFlusherExclusive.c)
 */

__int64 __fastcall CmpTransMgrSyncHive(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // esi
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9

  CmpLockRegistry(BugCheckParameter2, a2, a3, a4);
  HvLockHiveFlusherExclusive(BugCheckParameter2);
  if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 144LL) & 1) == 0 )
  {
    v11 = KeAbPreAcquire(BugCheckParameter2 + 80, 0LL);
    v12 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 80), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter2 + 80), v11, BugCheckParameter2 + 80);
    if ( v12 )
      *(_BYTE *)(v12 + 18) = 1;
    v9 = HvpMarkDirty(BugCheckParameter2, 0, 32, 0);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 + 80));
    KeAbPostRelease(BugCheckParameter2 + 80);
    if ( v9 < 0 )
    {
      HvUnlockHiveFlusherExclusive(BugCheckParameter2);
      CmpUnlockRegistry(v14, v13, v15, v16);
      return (unsigned int)v9;
    }
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 144LL) |= 1u;
  }
  HvUnlockHiveFlusherExclusive(BugCheckParameter2);
  CmpUnlockRegistry(v6, v5, v7, v8);
  v9 = 0;
  if ( (int)CmpFlushHive(BugCheckParameter2, 0) < 0 )
    return (unsigned int)-1073741670;
  return (unsigned int)v9;
}
