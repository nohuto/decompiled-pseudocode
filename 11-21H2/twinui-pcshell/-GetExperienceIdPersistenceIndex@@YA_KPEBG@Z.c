/*
 * XREFs of ?GetExperienceIdPersistenceIndex@@YA_KPEBG@Z @ 0x180172FF8
 * Callers:
 *     ?SetRegistration@WindowWrapperBase@@UEAAXV?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x18009AD50 (-SetRegistration@WindowWrapperBase@@UEAAXV-$shared_ptr@UViewEventRegistration@@@std@@W4ViewIniti.c)
 *     ?SetRegistration@UwpWindowWrapperBase@@UEAAXV?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x1804179A0 (-SetRegistration@UwpWindowWrapperBase@@UEAAXV-$shared_ptr@UViewEventRegistration@@@std@@W4ViewIn.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall GetExperienceIdPersistenceIndex(LPCWCH lpString1)
{
  unsigned __int64 i; // rbx

  for ( i = 1LL; i < 4; ++i )
  {
    if ( CompareStringOrdinal(lpString1, -1, off_1806467A0[i], -1, 1) == 2 )
      return i;
  }
  return 0LL;
}
