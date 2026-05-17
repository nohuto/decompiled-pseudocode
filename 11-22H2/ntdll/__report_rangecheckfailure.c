/*
 * XREFs of __report_rangecheckfailure @ 0x18008E930
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x18000D5A0 (RtlCanonicalizeDomainName.c)
 *     RtlCultureNameToLCID @ 0x180016750 (RtlCultureNameToLCID.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001F930 (LdrLoadAlternateResourceModuleEx.c)
 *     strcspn @ 0x1800938A0 (strcspn.c)
 *     strpbrk @ 0x180093E70 (strpbrk.c)
 *     strspn @ 0x180093F60 (strspn.c)
 *     strtok_s @ 0x18009A620 (strtok_s.c)
 *     RtlpMatchUILanguage @ 0x180109EB8 (RtlpMatchUILanguage.c)
 * Callees:
 *     __report_securityfailure @ 0x18008E94C (__report_securityfailure.c)
 */

void __noreturn _report_rangecheckfailure()
{
  _report_securityfailure(8LL);
}
