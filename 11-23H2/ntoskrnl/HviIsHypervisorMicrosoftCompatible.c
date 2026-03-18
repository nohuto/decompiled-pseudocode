/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x1403827CC
 * Callers:
 *     HviGetEnlightenmentInformation @ 0x140381804 (HviGetEnlightenmentInformation.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x1403822FC (KiDetectHardwareSpecControlFeatures.c)
 *     HviGetHypervisorFeatures @ 0x140382D40 (HviGetHypervisorFeatures.c)
 *     HvlpTryConfigureInterface @ 0x1403836B0 (HvlpTryConfigureInterface.c)
 *     HviGetHypervisorVersion @ 0x14061545C (HviGetHypervisorVersion.c)
 *     HviGetImplementationLimits @ 0x1406154A4 (HviGetImplementationLimits.c)
 *     HviGetIptFeatures @ 0x1406154EC (HviGetIptFeatures.c)
 * Callees:
 *     HviGetHypervisorInterface @ 0x140382818 (HviGetHypervisorInterface.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 */

bool HviIsHypervisorMicrosoftCompatible()
{
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0LL;
  HviGetHypervisorInterface(&v1);
  return (_DWORD)v1 == 824407624;
}
