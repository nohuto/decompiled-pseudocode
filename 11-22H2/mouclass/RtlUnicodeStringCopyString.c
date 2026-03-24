/*
 * XREFs of RtlUnicodeStringCopyString @ 0x1C00028B0
 * Callers:
 *     MouConfiguration @ 0x1C0011080 (MouConfiguration.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeStringCopyString(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszSrc)
{
  USHORT Length; // dx
  USHORT MaximumLength; // ax
  const wchar_t *v5; // rax
  PWSTR Buffer; // r10
  __int64 v7; // rcx
  NTSTATUS v8; // ebx
  unsigned __int64 v9; // r8
  __int16 v10; // r9
  signed __int64 v11; // r10
  NTSTATUS result; // eax

  Length = DestinationString->Length;
  if ( (DestinationString->Length & 1) != 0 )
    return -1073741811;
  MaximumLength = DestinationString->MaximumLength;
  if ( (MaximumLength & 1) != 0
    || Length > MaximumLength
    || MaximumLength == 0xFFFF
    || !DestinationString->Buffer && (Length || MaximumLength) )
  {
    return -1073741811;
  }
  v5 = L"PointerClass";
  Buffer = DestinationString->Buffer;
  v7 = 0x7FFFLL;
  v8 = 0;
  v9 = (unsigned __int64)DestinationString->MaximumLength >> 1;
  v10 = 0;
  if ( v9 )
  {
    v11 = (char *)Buffer - (char *)L"PointerClass";
    while ( v7 && *v5 )
    {
      *(const wchar_t *)((char *)v5 + v11) = *v5;
      --v7;
      ++v5;
      ++v10;
      if ( !--v9 )
      {
        if ( !v7 || !*v5 )
          break;
        goto LABEL_13;
      }
    }
  }
  else
  {
LABEL_13:
    v8 = -2147483643;
  }
  result = v8;
  DestinationString->Length = 2 * v10;
  return result;
}
