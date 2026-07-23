/*
 * XREFs of RtlUpcaseUnicodeString @ 0x18000FF50
 * Callers:
 *     RtlCreateServiceSid @ 0x1800100C0 (RtlCreateServiceSid.c)
 *     RtlpComputeLangListCheckSum @ 0x1800135DC (RtlpComputeLangListCheckSum.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x18002ACE0 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlCreateVirtualAccountSid @ 0x180086370 (RtlCreateVirtualAccountSid.c)
 * Callees:
 *     AllocateOrValidateUnicodeStringBuffer @ 0x180010048 (AllocateOrValidateUnicodeStringBuffer.c)
 *     NtdllpFreeStringRoutine @ 0x180039640 (NtdllpFreeStringRoutine.c)
 */

NTSTATUS __cdecl RtlUpcaseUnicodeString(
        PUNICODE_STRING DestinationString,
        PUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  PUNICODE_STRING v5; // rdi
  __int64 v6; // rsi
  unsigned __int16 *p_MaximumLength; // r9
  wchar_t **p_Buffer; // r8
  NTSTATUS result; // eax
  unsigned int v10; // r10d
  unsigned int i; // r9d
  unsigned int v12; // r8d

  v5 = DestinationString;
  if ( AllocateDestinationString || SourceString->Length )
  {
    v6 = qword_180184808;
    p_MaximumLength = &DestinationString->MaximumLength;
    p_Buffer = &DestinationString->Buffer;
    LOBYTE(DestinationString) = AllocateDestinationString;
    result = AllocateOrValidateUnicodeStringBuffer(DestinationString, SourceString->Length, p_Buffer, p_MaximumLength);
    if ( result < 0 )
      return result;
    v10 = SourceString->Length >> 1;
    for ( i = 0; i < v10; ++i )
    {
      v12 = SourceString->Buffer[i];
      if ( v12 >= 0x61 )
      {
        if ( v12 <= 0x7A )
        {
          LOWORD(v12) = v12 - 32;
        }
        else if ( v6 )
        {
          if ( (unsigned __int16)v12 >= 0xC0u )
            LOWORD(v12) = *(_WORD *)(v6
                                   + 2LL
                                   * ((v12 & 0xF)
                                    + *(unsigned __int16 *)(v6
                                                          + 2LL
                                                          * (((unsigned __int8)v12 >> 4)
                                                           + (unsigned int)*(unsigned __int16 *)(v6
                                                                                               + 2
                                                                                               * ((unsigned __int64)v12 >> 8))))))
                        + v12;
        }
      }
      v5->Buffer[i] = v12;
    }
    v5->Length = SourceString->Length;
  }
  else
  {
    DestinationString->Length = 0;
  }
  return 0;
}
