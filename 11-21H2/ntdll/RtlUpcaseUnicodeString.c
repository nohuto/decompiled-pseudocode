/*
 * XREFs of RtlUpcaseUnicodeString @ 0x18000F280
 * Callers:
 *     RtlCreateVirtualAccountSid @ 0x18000BD90 (RtlCreateVirtualAccountSid.c)
 *     RtlCreateServiceSid @ 0x18000F3F0 (RtlCreateServiceSid.c)
 *     RtlpComputeLangListCheckSum @ 0x180043308 (RtlpComputeLangListCheckSum.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x18004A1A0 (RtlDeriveCapabilitySidsFromName.c)
 * Callees:
 *     AllocateOrValidateUnicodeStringBuffer @ 0x18000F37C (AllocateOrValidateUnicodeStringBuffer.c)
 *     NtdllpFreeStringRoutine @ 0x180025BF0 (NtdllpFreeStringRoutine.c)
 */

NTSTATUS __cdecl RtlUpcaseUnicodeString(
        PUNICODE_STRING DestinationString,
        PUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  PUNICODE_STRING v5; // rdi
  NTSTATUS result; // eax
  __int64 v7; // rsi
  unsigned __int16 *p_MaximumLength; // r9
  wchar_t **p_Buffer; // r8
  unsigned int v10; // r10d
  unsigned int i; // r9d
  unsigned __int64 v12; // r8

  v5 = DestinationString;
  if ( !AllocateDestinationString && !SourceString->Length )
  {
    DestinationString->Length = 0;
    return 0;
  }
  v7 = qword_1801776F8;
  p_MaximumLength = &DestinationString->MaximumLength;
  p_Buffer = &DestinationString->Buffer;
  LOBYTE(DestinationString) = AllocateDestinationString;
  result = AllocateOrValidateUnicodeStringBuffer(DestinationString, SourceString->Length, p_Buffer, p_MaximumLength);
  if ( result >= 0 )
  {
    v10 = SourceString->Length >> 1;
    for ( i = 0; i < v10; ++i )
    {
      v12 = SourceString->Buffer[i];
      if ( (unsigned int)v12 >= 0x61 )
      {
        if ( (unsigned int)v12 > 0x7A )
        {
          if ( v7 )
          {
            if ( (unsigned __int16)v12 >= 0xC0u )
              LOWORD(v12) = *(_WORD *)(v7
                                     + 2
                                     * ((v12 & 0xF)
                                      + *(unsigned __int16 *)(v7
                                                            + 2LL
                                                            * (((unsigned __int8)v12 >> 4)
                                                             + (unsigned int)*(unsigned __int16 *)(v7 + 2 * (v12 >> 8))))))
                          + v12;
          }
        }
        else
        {
          LOWORD(v12) = v12 - 32;
        }
      }
      v5->Buffer[i] = v12;
    }
    v5->Length = SourceString->Length;
    return 0;
  }
  return result;
}
