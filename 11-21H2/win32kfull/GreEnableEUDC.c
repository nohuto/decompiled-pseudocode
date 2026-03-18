/*
 * XREFs of GreEnableEUDC @ 0x1C00991AC
 * Callers:
 *     NtGdiEnableEudc @ 0x1C0099320 (NtGdiEnableEudc.c)
 *     ?CleanUpEUDC@@YAXXZ @ 0x1C00EF758 (-CleanUpEUDC@@YAXXZ.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C001C660 (-GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     bAddAllFlEntry @ 0x1C015E414 (bAddAllFlEntry.c)
 *     bDeleteAllFlEntry @ 0x1C015E790 (bDeleteAllFlEntry.c)
 *     ?bSetupDefaultFlEntry@@YAHXZ @ 0x1C02953E4 (-bSetupDefaultFlEntry@@YAHXZ.c)
 */

__int64 __fastcall GreEnableEUDC(int a1)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // esi
  int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // edi
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  v2 = 0;
  if ( !ghsemEUDC1 || !ghsemEnableEUDC )
  {
    if ( !gbAttemptedEnableEUDC )
      gbAttemptedEnableEUDC = 1;
    v2 = 1;
    goto LABEL_16;
  }
  if ( (unsigned int)UmfdHostLifeTimeManager::GetSessionTextStackStatus() )
  {
LABEL_16:
    v8 = v2;
    goto LABEL_13;
  }
  GreAcquireSemaphore(ghsemEnableEUDC);
  if ( a1 )
  {
    GreAcquireSemaphore(ghsemEUDC1);
    if ( bReadyToInitializeFontAssocDefault == 1 && !bFinallyInitializeFontAssocDefault )
      bFinallyInitializeFontAssocDefault = bSetupDefaultFlEntry() != 0;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
  }
  v5 = dword_1C0336380;
  if ( PsGetCurrentProcess(v4, v3) == gpepCSRSS )
    v6 = 0;
  else
    v6 = 2 - (a1 != 0);
  dword_1C0336380 |= v6;
  if ( a1 )
    v7 = bAddAllFlEntry(1LL);
  else
    v7 = bDeleteAllFlEntry();
  v8 = v7;
  dword_1C0336380 = v5;
  EtwTraceGreLockReleaseSemaphore(L"ghsemEnableEUDC", ghsemEnableEUDC);
  GreReleaseSemaphoreInternal(ghsemEnableEUDC);
  if ( !gbAttemptedEnableEUDC )
    gbAttemptedEnableEUDC = 1;
LABEL_13:
  SEMOBJ::vUnlock((SEMOBJ *)&v10);
  return v8;
}
