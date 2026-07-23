/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x14038296C
 * Callers:
 *     HviGetEnlightenmentInformation @ 0x1403819A4 (HviGetEnlightenmentInformation.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x14038249C (KiDetectHardwareSpecControlFeatures.c)
 *     HviGetHypervisorFeatures @ 0x140382EE0 (HviGetHypervisorFeatures.c)
 *     HvlpTryConfigureInterface @ 0x140383890 (HvlpTryConfigureInterface.c)
 *     HviGetHypervisorVersion @ 0x1406159AC (HviGetHypervisorVersion.c)
 *     HviGetImplementationLimits @ 0x1406159F4 (HviGetImplementationLimits.c)
 *     HviGetIptFeatures @ 0x140615A3C (HviGetIptFeatures.c)
 * Callees:
 *     HviGetHypervisorInterface @ 0x1403829B8 (HviGetHypervisorInterface.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

bool HviIsHypervisorMicrosoftCompatible()
{
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0LL;
  HviGetHypervisorInterface(&v1);
  return (_DWORD)v1 == 824407624;
}
