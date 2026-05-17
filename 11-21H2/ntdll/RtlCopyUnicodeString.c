/*
 * XREFs of RtlCopyUnicodeString @ 0x180034770
 * Callers:
 *     EtwpQueryUmLogger @ 0x180007D88 (EtwpQueryUmLogger.c)
 *     RtlCanonicalizeDomainName @ 0x180031A00 (RtlCanonicalizeDomainName.c)
 *     LdrGetDllFullName @ 0x1800346C0 (LdrGetDllFullName.c)
 *     RtlpComputeLangListCheckSum @ 0x180043308 (RtlpComputeLangListCheckSum.c)
 *     LdrpSearchPath @ 0x1800501B4 (LdrpSearchPath.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x180083010 (LdrpInitializeNtdllDataTableEntry.c)
 *     LdrGetDllDirectory @ 0x180086650 (LdrGetDllDirectory.c)
 *     AvrfMiniLoadDll @ 0x1800E6C5C (AvrfMiniLoadDll.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x180128A70 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 * Callees:
 *     memmove @ 0x1800AAB40 (memmove.c)
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
