/*
 * XREFs of RtlUnicodeStringCatString @ 0x1C005BC8C
 * Callers:
 *     RaGetUnitPerfCounterIdString @ 0x1C00571FC (RaGetUnitPerfCounterIdString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeStringCatString(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszSrc)
{
  unsigned __int64 Length; // rdx
  unsigned __int16 MaximumLength; // ax
  NTSTATUS v6; // ecx
  __int64 v7; // r11
  __int16 v8; // bx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r9
  char *v11; // rdi

  Length = DestinationString->Length;
  if ( (Length & 1) != 0 )
    return -1073741811;
  MaximumLength = DestinationString->MaximumLength;
  if ( (MaximumLength & 1) != 0 )
    return -1073741811;
  if ( (unsigned __int16)Length > MaximumLength )
    return -1073741811;
  if ( MaximumLength == 0xFFFF )
    return -1073741811;
  v6 = 0;
  if ( !DestinationString->Buffer && ((_WORD)Length || MaximumLength) )
    return -1073741811;
  v7 = 0x7FFFLL;
  v8 = 0;
  v9 = Length >> 1;
  v10 = ((unsigned __int64)DestinationString->MaximumLength >> 1) - v9;
  if ( v10 )
  {
    v11 = (char *)DestinationString->Buffer + 2 * v9 - (_QWORD)pszSrc;
    while ( v7 )
    {
      if ( *pszSrc )
      {
        *(NTSTRSAFE_PCWSTR)((char *)pszSrc + (_QWORD)v11) = *pszSrc;
        --v7;
        ++pszSrc;
        ++v8;
        if ( --v10 )
          continue;
      }
      if ( v10 || !v7 )
        break;
      goto LABEL_15;
    }
  }
  else
  {
LABEL_15:
    if ( *pszSrc )
      v6 = -2147483643;
  }
  DestinationString->Length = 2 * (v8 + v9);
  return v6;
}
