/*
 * XREFs of ?PlayTransitionToFindInStart@CStartExperienceManager@@UEAAJXZ @ 0x180445880
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall CStartExperienceManager::PlayTransitionToFindInStart(CStartExperienceManager *this)
{
  _QWORD v2[4]; // [rsp+30h] [rbp-38h] BYREF

  v2[0] = 6LL;
  memset(&v2[1], 0, 24);
  RtlPublishWnfStateData(WNF_SHEL_START_VISIBILITY_CHANGED, 0LL, v2, 32LL);
  return 0LL;
}
