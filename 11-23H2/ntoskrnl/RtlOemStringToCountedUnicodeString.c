/*
 * XREFs of RtlOemStringToCountedUnicodeString @ 0x1407DAF30
 * Callers:
 *     DifRtlOemStringToCountedUnicodeStringWrapper @ 0x1405EBBA0 (DifRtlOemStringToCountedUnicodeStringWrapper.c)
 * Callees:
 *     AllocateOrValidateUnicodeStringBuffer @ 0x140316F8C (AllocateOrValidateUnicodeStringBuffer.c)
 *     RtlxOemStringToUnicodeSize @ 0x140773EC0 (RtlxOemStringToUnicodeSize.c)
 *     RtlOemToUnicodeN @ 0x140774520 (RtlOemToUnicodeN.c)
 *     ExFreePool @ 0x140AAECC0 (ExFreePool.c)
 */

NTSTATUS __stdcall RtlOemStringToCountedUnicodeString(
        PUNICODE_STRING DestinationString,
        PCOEM_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  ULONG v6; // eax
  unsigned __int16 *p_MaximumLength; // r12
  wchar_t **p_Buffer; // r14
  NTSTATUS result; // eax
  int v10; // esi
  ULONG BytesInUnicodeString; // [rsp+88h] [rbp+20h] BYREF

  v6 = RtlxOemStringToUnicodeSize(SourceString) - 2;
  BytesInUnicodeString = v6;
  if ( v6 )
  {
    if ( v6 > 0xFFFE )
    {
      return -1073741584;
    }
    else
    {
      p_MaximumLength = &DestinationString->MaximumLength;
      p_Buffer = &DestinationString->Buffer;
      result = AllocateOrValidateUnicodeStringBuffer(
                 AllocateDestinationString,
                 v6,
                 (__int64 *)&DestinationString->Buffer,
                 &DestinationString->MaximumLength);
      if ( result >= 0 )
      {
        v10 = RtlOemToUnicodeN(
                *p_Buffer,
                *p_MaximumLength,
                &BytesInUnicodeString,
                SourceString->Buffer,
                SourceString->Length);
        if ( v10 < 0 )
        {
          if ( AllocateDestinationString )
          {
            ExFreePool(*p_Buffer);
            *p_Buffer = 0LL;
            *p_MaximumLength = 0;
          }
        }
        else
        {
          DestinationString->Length = BytesInUnicodeString;
        }
        return v10;
      }
    }
  }
  else
  {
    *(_DWORD *)&DestinationString->Length = 0;
    DestinationString->Buffer = 0LL;
    return 0;
  }
  return result;
}
