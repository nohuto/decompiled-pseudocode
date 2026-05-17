/*
 * XREFs of RtlCompareUnicodeString @ 0x180014C80
 * Callers:
 *     RtlpCapabilityCheckSystemCapability @ 0x18000B7E8 (RtlpCapabilityCheckSystemCapability.c)
 *     ApiSetQuerySchemaInfo @ 0x18000C53C (ApiSetQuerySchemaInfo.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180018AA0 (LdrpSnapKernelBaseExtensions.c)
 *     RtlpFindUnicodeStringInSection @ 0x18001D930 (RtlpFindUnicodeStringInSection.c)
 *     LdrpSearchPath @ 0x18002E074 (LdrpSearchPath.c)
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x18006BDFC (WerEscalationReadImageVersionInfoForModuleBase.c)
 *     LdrpQuerySxSMUIFile @ 0x180075D14 (LdrpQuerySxSMUIFile.c)
 *     RtlpProcessIFEOKeyFilter @ 0x180076A60 (RtlpProcessIFEOKeyFilter.c)
 *     LdrpIsModuleUnderSystem32 @ 0x18007E1F4 (LdrpIsModuleUnderSystem32.c)
 *     LdrpCompareModuleName @ 0x180086F9C (LdrpCompareModuleName.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800DD4F8 (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpCompareRedirectedFunction @ 0x1800DFC24 (LdrpCompareRedirectedFunction.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1800EE200 (RtlpIsEmptyImageFileOptionsKey.c)
 *     RtlpMatchUILanguage @ 0x180109EB8 (RtlpMatchUILanguage.c)
 *     RtlpMatchUserLanguage @ 0x180109F80 (RtlpMatchUserLanguage.c)
 * Callees:
 *     NLS_UPCASE @ 0x1800156E8 (NLS_UPCASE.c)
 */

__int64 __fastcall RtlCompareUnicodeString(unsigned __int16 *a1, unsigned __int16 *a2, char a3)
{
  _WORD *v3; // r10
  unsigned __int64 v4; // r11
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rax
  _WORD *v7; // rbp
  __int64 v8; // rbx
  unsigned __int16 v9; // di
  int v12; // esi
  unsigned __int16 v13; // ax
  __int64 v14; // rax
  int v15; // ecx
  int v16; // edx

  v3 = (_WORD *)*((_QWORD *)a1 + 1);
  v4 = (unsigned __int64)*a1 >> 1;
  v5 = (unsigned __int64)*a2 >> 1;
  v6 = v4;
  if ( v4 > v5 )
    v6 = (unsigned __int64)*a2 >> 1;
  v7 = &v3[v6];
  if ( v3 >= v7 )
  {
    return (unsigned int)(v4 - v5);
  }
  else if ( a3 )
  {
    v8 = *((_QWORD *)a2 + 1) - (_QWORD)v3;
    while ( 1 )
    {
      v9 = *(_WORD *)((char *)v3 + v8);
      if ( *v3 != v9 )
      {
        v12 = (unsigned __int16)NLS_UPCASE(qword_1801817B8, (unsigned __int16)*v3);
        v13 = NLS_UPCASE(qword_1801817B8, v9);
        if ( (_WORD)v12 != v13 )
          break;
      }
      if ( ++v3 >= v7 )
        return (unsigned int)(v4 - v5);
    }
    return (unsigned int)(v12 - v13);
  }
  else
  {
    v14 = *((_QWORD *)a2 + 1) - (_QWORD)v3;
    while ( 1 )
    {
      v15 = (unsigned __int16)*v3;
      v16 = *(unsigned __int16 *)((char *)v3 + v14);
      if ( (_WORD)v15 != (_WORD)v16 )
        break;
      if ( ++v3 >= v7 )
        return (unsigned int)(v4 - v5);
    }
    return (unsigned int)(v15 - v16);
  }
}
