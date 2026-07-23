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

LONG __cdecl RtlCompareUnicodeString(PUNICODE_STRING String1, PUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  wchar_t *Buffer; // r9
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rax
  wchar_t *v7; // rdi
  char *v8; // r11
  unsigned __int16 v9; // bx
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
        v12 = (unsigned __int16)NLS_UPCASE(qword_1801776F8, *Buffer);
        v13 = NLS_UPCASE(qword_1801776F8, v9);
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
