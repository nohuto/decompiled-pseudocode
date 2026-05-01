/*
 * XREFs of CempLockTrackerSetForThread @ 0x180003768
 * Callers:
 *     ?ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180003738 (-ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CempLockTrackerSetForThread(DWORD dwTlsIndex, LPVOID lpTlsValue)
{
  if ( dwTlsIndex != -1 )
  {
    if ( TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(dwTlsIndex, lpTlsValue);
  }
}
