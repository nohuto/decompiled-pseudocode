/*
 * XREFs of CmpGlobalLockKeyForWrite @ 0x14084754C
 * Callers:
 *     CmLockKeyForWrite @ 0x1408472CC (CmLockKeyForWrite.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD040 (ExfAcquirePushLockSharedEx.c)
 *     CmpUnlockGlobalKeyLockTracker @ 0x140847664 (CmpUnlockGlobalKeyLockTracker.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x1408476CC (CmpCreateGlobalKeyLockEntry.c)
 *     CmpLockGlobalKeyLockTrackerExclusive @ 0x140847720 (CmpLockGlobalKeyLockTrackerExclusive.c)
 */

__int64 __fastcall CmpGlobalLockKeyForWrite(__int64 a1, __int64 *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v5; // rbx
  unsigned int v6; // edi
  __int64 *v7; // rax
  __int64 GlobalKeyLockEntry; // rbx
  __int64 *v9; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((__int64)&CmpKeyLockTracker, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpKeyLockTracker, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&CmpKeyLockTracker, 0LL, v5, (__int64)&CmpKeyLockTracker);
  v6 = 0;
  if ( v5 )
    *(_BYTE *)(v5 + 18) = 1;
  v7 = (__int64 *)qword_140C13D08;
  GlobalKeyLockEntry = 0LL;
  if ( (__int64 *)qword_140C13D08 != &qword_140C13D08 )
  {
    while ( v7[3] != a1 )
    {
      v7 = (__int64 *)*v7;
      if ( v7 == &qword_140C13D08 )
        goto LABEL_10;
    }
    GlobalKeyLockEntry = (__int64)v7;
  }
  if ( GlobalKeyLockEntry )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(GlobalKeyLockEntry + 16)) <= 1 )
      __fastfail(0xEu);
  }
  else
  {
LABEL_10:
    CmpUnlockGlobalKeyLockTracker();
    GlobalKeyLockEntry = CmpCreateGlobalKeyLockEntry(a1);
    if ( !GlobalKeyLockEntry )
      return (unsigned int)-1073741670;
    *(_WORD *)(a1 + 8) |= 0x80u;
    CmpLockGlobalKeyLockTrackerExclusive();
    v9 = (__int64 *)qword_140C13D10;
    if ( *(__int64 **)qword_140C13D10 != &qword_140C13D08 )
      __fastfail(3u);
    *(_QWORD *)GlobalKeyLockEntry = &qword_140C13D08;
    *(_QWORD *)(GlobalKeyLockEntry + 8) = v9;
    *v9 = GlobalKeyLockEntry;
    qword_140C13D10 = GlobalKeyLockEntry;
  }
  *a2 = GlobalKeyLockEntry;
  CmpUnlockGlobalKeyLockTracker();
  return v6;
}
