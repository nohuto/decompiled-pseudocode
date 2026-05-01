/*
 * XREFs of ?GetExperienceIdPersistenceIndex@@YA_KPEBG@Z @ 0x18006CAAC
 * Callers:
 *     ?SetRegistration@UwpWindowWrapperBase@@UEAAXV?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x1800A0C80 (-SetRegistration@UwpWindowWrapperBase@@UEAAXV-$shared_ptr@UViewEventRegistration@@@std@@W4ViewIn.c)
 *     ?SetRegistration@WindowWrapperBase@@UEAAXV?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x1804ECAF0 (-SetRegistration@WindowWrapperBase@@UEAAXV-$shared_ptr@UViewEventRegistration@@@std@@W4ViewIniti.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall GetExperienceIdPersistenceIndex(LPCWCH lpString1)
{
  unsigned __int64 i; // rbx

  for ( i = 1LL; i < 4; ++i )
  {
    if ( CompareStringOrdinal(lpString1, -1, off_1807CC350[i], -1, 1) == 2 )
      return i;
  }
  return 0LL;
}
