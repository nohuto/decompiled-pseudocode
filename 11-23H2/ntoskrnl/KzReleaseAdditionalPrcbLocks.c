/*
 * XREFs of KzReleaseAdditionalPrcbLocks @ 0x14056D7E4
 * Callers:
 *     KiSearchForNewThread @ 0x140240420 (KiSearchForNewThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140240D60 (KiSearchForNewThreadOnProcessor.c)
 *     KeYieldExecution @ 0x140246AC0 (KeYieldExecution.c)
 *     KiQuantumEnd @ 0x1402487C0 (KiQuantumEnd.c)
 *     KiDowngradeIsolationUnitLockHandle @ 0x1403097C4 (KiDowngradeIsolationUnitLockHandle.c)
 *     KiTryUpgradeIsolationUnitLockHandle @ 0x14056D6F0 (KiTryUpgradeIsolationUnitLockHandle.c)
 * Callees:
 *     <none>
 */

void __fastcall KzReleaseAdditionalPrcbLocks(__int64 a1, __int64 a2, __int64 *a3, int a4)
{
  __int64 v4; // r11
  __int64 v5; // r10

  v4 = *a3;
  LODWORD(v5) = 0;
  if ( (_DWORD)a2 )
  {
    a2 = (unsigned int)a2;
    do
    {
      if ( v4 == *(_QWORD *)a1 )
      {
        v5 = (unsigned int)(v5 + 1);
        if ( (_DWORD)v5 == a4 )
          v4 = -1LL;
        else
          v4 = a3[v5];
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)a1 + 48LL), 0LL);
      }
      a1 += 8LL;
      --a2;
    }
    while ( a2 );
  }
}
