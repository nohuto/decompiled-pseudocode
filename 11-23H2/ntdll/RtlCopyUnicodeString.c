/*
 * XREFs of RtlCopyUnicodeString @ 0x18002D690
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x18000D390 (RtlCanonicalizeDomainName.c)
 *     RtlpComputeLangListCheckSum @ 0x1800135DC (RtlpComputeLangListCheckSum.c)
 *     LdrGetDllFullName @ 0x18002D5E0 (LdrGetDllFullName.c)
 *     LdrpSearchPath @ 0x18002DEA4 (LdrpSearchPath.c)
 *     EtwpQueryUmLogger @ 0x18005F188 (EtwpQueryUmLogger.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x18007EE30 (LdrpInitializeNtdllDataTableEntry.c)
 *     LdrGetDllDirectory @ 0x180082640 (LdrGetDllDirectory.c)
 *     AvrfMiniLoadDll @ 0x1800E6DE8 (AvrfMiniLoadDll.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x18012EBC4 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 * Callees:
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

unsigned __int64 __fastcall RtlCopyUnicodeString(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int64 result; // rax
  unsigned int v4; // r8d
  unsigned int v5; // eax
  void *v6; // rsi
  const void *v7; // rdx
  unsigned __int64 v8; // rbx

  result = (unsigned __int64)a2;
  if ( a2 )
  {
    v4 = *a2;
    v5 = a1[1];
    v6 = (void *)*((_QWORD *)a1 + 1);
    v7 = (const void *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int16)v4 <= (unsigned __int16)v5 )
      v5 = v4;
    v8 = v5;
    *a1 = v5;
    memmove(v6, v7, v5);
    result = a1[1];
    if ( (unsigned __int64)*a1 + 2 <= result )
      *((_WORD *)v6 + (v8 >> 1)) = 0;
  }
  else
  {
    *a1 = 0;
  }
  return result;
}
