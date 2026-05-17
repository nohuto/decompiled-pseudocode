/*
 * XREFs of RtlCompareUnicodeString @ 0x1800415D0
 * Callers:
 *     RtlpCapabilityCheckSystemCapability @ 0x18000EC7C (RtlpCapabilityCheckSystemCapability.c)
 *     LdrpSnapKernelBaseExtensions @ 0x1800437E8 (LdrpSnapKernelBaseExtensions.c)
 *     RtlpFindUnicodeStringInSection @ 0x180045FD0 (RtlpFindUnicodeStringInSection.c)
 *     ApiSetQuerySchemaInfo @ 0x18004883C (ApiSetQuerySchemaInfo.c)
 *     LdrpSearchPath @ 0x1800501B4 (LdrpSearchPath.c)
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x180053020 (WerEscalationReadImageVersionInfoForModuleBase.c)
 *     RtlpProcessIFEOKeyFilter @ 0x18007C5D8 (RtlpProcessIFEOKeyFilter.c)
 *     LdrpQuerySxSMUIFile @ 0x18007E478 (LdrpQuerySxSMUIFile.c)
 *     LdrpIsModuleUnderSystem32 @ 0x180082CB0 (LdrpIsModuleUnderSystem32.c)
 *     LdrpCompareModuleName @ 0x18008B940 (LdrpCompareModuleName.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800DCD78 (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpCompareRedirectedFunction @ 0x1800E1420 (LdrpCompareRedirectedFunction.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1800EE948 (RtlpIsEmptyImageFileOptionsKey.c)
 *     RtlpMatchUILanguage @ 0x180109CF4 (RtlpMatchUILanguage.c)
 *     RtlpMatchUserLanguage @ 0x180109DBC (RtlpMatchUserLanguage.c)
 * Callees:
 *     NLS_UPCASE @ 0x180041758 (NLS_UPCASE.c)
 */

__int64 __fastcall RtlCompareUnicodeString(unsigned __int16 *a1, unsigned __int16 *a2, char a3)
{
  _WORD *v3; // r9
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rax
  _WORD *v7; // rdi
  __int64 v8; // r11
  unsigned __int16 v9; // bx
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
        v12 = (unsigned __int16)NLS_UPCASE(qword_1801776F8, (unsigned __int16)*v3);
        v13 = NLS_UPCASE(qword_1801776F8, v9);
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
