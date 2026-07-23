/*
 * XREFs of RtlpGetNameFromLangInfoNode @ 0x1800859D0
 * Callers:
 *     RtlpAddLanguagesToMultiSZ @ 0x1800FA4B8 (RtlpAddLanguagesToMultiSZ.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1801144D0 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x180013F48 (RtlStringCbCopyW.c)
 *     RtlLCIDToCultureName @ 0x180015CC0 (RtlLCIDToCultureName.c)
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 */

__int64 __fastcall RtlpGetNameFromLangInfoNode(__int64 a1, __int64 a2, _UNICODE_STRING *a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rax
  unsigned __int16 v6; // r11
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  if ( a1 && a2 && a3 )
  {
    v5 = *(__int16 *)(a2 + 6);
    if ( (__int16)v5 <= 0 )
    {
      if ( ((*(_WORD *)(a2 + 4) - 4096) & 0xFBFF) != 0 && RtlLCIDToCultureName(*(unsigned __int16 *)(a2 + 4), a3) )
        return v3;
    }
    else
    {
      RtlInitUnicodeString(
        &DestinationString,
        (PCWSTR)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL)
               + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) + 2 * v5)));
      if ( DestinationString.Length <= a3->MaximumLength
        && (int)RtlStringCbCopyW(a3->Buffer, a3->MaximumLength, (__int64)DestinationString.Buffer) >= 0 )
      {
        a3->Length = v6;
        return v3;
      }
    }
    return (unsigned int)-1073741595;
  }
  return 3221225485LL;
}
