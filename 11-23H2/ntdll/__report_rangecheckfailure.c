/*
 * XREFs of __report_rangecheckfailure @ 0x18008F130
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x18000D390 (RtlCanonicalizeDomainName.c)
 *     RtlCultureNameToLCID @ 0x180016540 (RtlCultureNameToLCID.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001F750 (LdrLoadAlternateResourceModuleEx.c)
 *     strcspn @ 0x1800940A0 (strcspn.c)
 *     strpbrk @ 0x180094670 (strpbrk.c)
 *     strspn @ 0x180094760 (strspn.c)
 *     strtok_s @ 0x18009AE20 (strtok_s.c)
 *     RtlpMatchUILanguage @ 0x18010B328 (RtlpMatchUILanguage.c)
 * Callees:
 *     __report_securityfailure @ 0x18008F14C (__report_securityfailure.c)
 */

void __noreturn _report_rangecheckfailure()
{
  _report_securityfailure(8LL);
}
