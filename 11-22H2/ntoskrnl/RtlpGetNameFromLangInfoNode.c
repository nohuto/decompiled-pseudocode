/*
 * XREFs of RtlpGetNameFromLangInfoNode @ 0x1403A1174
 * Callers:
 *     _RtlpMuiRegValidateInstalled @ 0x1408469D0 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x14022B024 (RtlStringCbCopyW.c)
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     RtlLCIDToCultureName @ 0x1409BEDA0 (RtlLCIDToCultureName.c)
 */

__int64 __fastcall RtlpGetNameFromLangInfoNode(__int64 a1, __int64 a2, UNICODE_STRING *a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rax
  __int64 v6; // r8
  unsigned __int16 v7; // r11
  LCID v9; // ecx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  if ( a1 && a2 && a3 )
  {
    v5 = *(__int16 *)(a2 + 6);
    if ( (__int16)v5 <= 0 )
    {
      v9 = *(unsigned __int16 *)(a2 + 4);
      if ( (((_WORD)v9 - 4096) & 0xFBFF) != 0 && RtlLCIDToCultureName(v9, a3) )
        return v3;
    }
    else
    {
      v6 = *(_QWORD *)(a1 + 32);
      DestinationString = 0LL;
      RtlInitUnicodeString(
        &DestinationString,
        (PCWSTR)(*(_QWORD *)(v6 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v6 + 16) + 2 * v5)));
      if ( DestinationString.Length <= a3->MaximumLength
        && RtlStringCbCopyW(a3->Buffer, a3->MaximumLength, DestinationString.Buffer) >= 0 )
      {
        a3->Length = v7;
        return v3;
      }
    }
    return (unsigned int)-1073741595;
  }
  return 3221225485LL;
}
