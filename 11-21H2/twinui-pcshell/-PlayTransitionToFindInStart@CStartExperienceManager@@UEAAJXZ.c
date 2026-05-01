/*
 * XREFs of ?PlayTransitionToFindInStart@CStartExperienceManager@@UEAAJXZ @ 0x180197540
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

__int64 __fastcall CStartExperienceManager::PlayTransitionToFindInStart(CStartExperienceManager *this)
{
  __int64 v2; // [rsp+30h] [rbp-18h] BYREF

  v2 = 6LL;
  RtlPublishWnfStateData(WNF_SHEL_START_VISIBILITY_CHANGED, 0LL, &v2, 8LL);
  return 0LL;
}
