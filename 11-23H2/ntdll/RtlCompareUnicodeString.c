/*
 * XREFs of RtlCompareUnicodeString @ 0x180014A70
 * Callers:
 *     RtlpCapabilityCheckSystemCapability @ 0x18000B5C8 (RtlpCapabilityCheckSystemCapability.c)
 *     ApiSetQuerySchemaInfo @ 0x18000C31C (ApiSetQuerySchemaInfo.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180018890 (LdrpSnapKernelBaseExtensions.c)
 *     RtlpFindUnicodeStringInSection @ 0x18001D750 (RtlpFindUnicodeStringInSection.c)
 *     LdrpSearchPath @ 0x18002DEA4 (LdrpSearchPath.c)
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x18006BDF8 (WerEscalationReadImageVersionInfoForModuleBase.c)
 *     LdrpQuerySxSMUIFile @ 0x180076384 (LdrpQuerySxSMUIFile.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1800770D0 (RtlpProcessIFEOKeyFilter.c)
 *     LdrpIsModuleUnderSystem32 @ 0x18007E864 (LdrpIsModuleUnderSystem32.c)
 *     LdrpCompareModuleName @ 0x18008779C (LdrpCompareModuleName.c)
 *     ApiSetQuerySchemaInfo_V7 @ 0x18009EBF0 (ApiSetQuerySchemaInfo_V7.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800DCEA8 (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpCompareRedirectedFunction @ 0x1800E0F54 (LdrpCompareRedirectedFunction.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1800EF610 (RtlpIsEmptyImageFileOptionsKey.c)
 *     RtlpMatchUILanguage @ 0x18010B328 (RtlpMatchUILanguage.c)
 *     RtlpMatchUserLanguage @ 0x18010B3F0 (RtlpMatchUserLanguage.c)
 * Callees:
 *     NLS_UPCASE @ 0x1800154D8 (NLS_UPCASE.c)
 */

LONG __cdecl RtlCompareUnicodeString(PUNICODE_STRING String1, PUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  wchar_t *Buffer; // r10
  unsigned __int64 v4; // r11
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rax
  wchar_t *v7; // rbp
  char *v8; // rbx
  unsigned __int16 v9; // di
  int v12; // esi
  unsigned __int16 v13; // ax
  char *v14; // rax
  int v15; // ecx
  int v16; // edx

  Buffer = String1->Buffer;
  v4 = (unsigned __int64)String1->Length >> 1;
  v5 = (unsigned __int64)String2->Length >> 1;
  v6 = v4;
  if ( v4 > v5 )
    v6 = (unsigned __int64)String2->Length >> 1;
  v7 = &Buffer[v6];
  if ( Buffer >= v7 )
    return v4 - v5;
  if ( CaseInSensitive )
  {
    v8 = (char *)((char *)String2->Buffer - (char *)Buffer);
    while ( 1 )
    {
      v9 = *(wchar_t *)((char *)Buffer + (_QWORD)v8);
      if ( *Buffer != v9 )
      {
        v12 = (unsigned __int16)NLS_UPCASE(qword_180184808, *Buffer);
        v13 = NLS_UPCASE(qword_180184808, v9);
        if ( (_WORD)v12 != v13 )
          break;
      }
      if ( ++Buffer >= v7 )
        return v4 - v5;
    }
    return v12 - v13;
  }
  else
  {
    v14 = (char *)((char *)String2->Buffer - (char *)Buffer);
    while ( 1 )
    {
      v15 = *Buffer;
      v16 = *(unsigned __int16 *)((char *)Buffer + (_QWORD)v14);
      if ( (_WORD)v15 != (_WORD)v16 )
        break;
      if ( ++Buffer >= v7 )
        return v4 - v5;
    }
    return v15 - v16;
  }
}
