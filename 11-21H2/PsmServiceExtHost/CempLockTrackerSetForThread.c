/*
 * XREFs of CempLockTrackerSetForThread @ 0x180008738
 * Callers:
 *     ?ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180005DA8 (-ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     HamRpcSrvFindOrCreateHostId @ 0x180008570 (HamRpcSrvFindOrCreateHostId.c)
 * Callees:
 *     <none>
 */

void __fastcall CempLockTrackerSetForThread(DWORD dwTlsIndex, LPVOID lpTlsValue)
{
  if ( dwTlsIndex != -1 )
  {
    if ( TlsGetValue(dwTlsIndex) )
      NT_ASSERT("CurrentTracker == 0");
    TlsSetValue(dwTlsIndex, lpTlsValue);
  }
}
