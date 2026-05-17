/*
 * XREFs of __report_rangecheckfailure @ 0x1800939E0
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x180031A00 (RtlCanonicalizeDomainName.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180041F80 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlCultureNameToLCID @ 0x18004BE40 (RtlCultureNameToLCID.c)
 *     strcspn @ 0x180098850 (strcspn.c)
 *     strpbrk @ 0x180098DD0 (strpbrk.c)
 *     strspn @ 0x180098EB0 (strspn.c)
 *     strtok_s @ 0x18009F4A0 (strtok_s.c)
 *     RtlpMatchUILanguage @ 0x180109CF4 (RtlpMatchUILanguage.c)
 * Callees:
 *     __report_securityfailure @ 0x1800939FC (__report_securityfailure.c)
 */

void __noreturn _report_rangecheckfailure()
{
  _report_securityfailure(8LL);
}
