/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x140382E1C
 * Callers:
 *     HviGetEnlightenmentInformation @ 0x140381E54 (HviGetEnlightenmentInformation.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x14038294C (KiDetectHardwareSpecControlFeatures.c)
 *     HviGetHypervisorFeatures @ 0x140383390 (HviGetHypervisorFeatures.c)
 *     HvlpTryConfigureInterface @ 0x14038C800 (HvlpTryConfigureInterface.c)
 *     HviGetHypervisorVersion @ 0x1406154CC (HviGetHypervisorVersion.c)
 *     HviGetImplementationLimits @ 0x140615514 (HviGetImplementationLimits.c)
 *     HviGetIptFeatures @ 0x14061555C (HviGetIptFeatures.c)
 * Callees:
 *     HviGetHypervisorInterface @ 0x140382E68 (HviGetHypervisorInterface.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 */

bool HviIsHypervisorMicrosoftCompatible()
{
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0LL;
  HviGetHypervisorInterface(&v1);
  return (_DWORD)v1 == 824407624;
}
