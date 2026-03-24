/*
 * XREFs of RtlUnicodeStringPrintf @ 0x1C00028F0
 * Callers:
 *     KbdCreateClassObject @ 0x1C000DDB0 (KbdCreateClassObject.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlUnicodeStringPrintf(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  USHORT Length; // cx
  USHORT MaximumLength; // ax
  NTSTATUS v5; // esi
  size_t v6; // rdi
  int v7; // eax
  va_list Args; // [rsp+60h] [rbp+18h] BYREF

  va_start(Args, pszFormat);
  Length = DestinationString->Length;
  if ( (Length & 1) != 0 )
    return -1073741811;
  MaximumLength = DestinationString->MaximumLength;
  if ( (MaximumLength & 1) != 0
    || Length > MaximumLength
    || MaximumLength == 0xFFFF
    || !DestinationString->Buffer && (Length || MaximumLength) )
  {
    return -1073741811;
  }
  v5 = 0;
  v6 = (unsigned __int64)DestinationString->MaximumLength >> 1;
  v7 = _vsnwprintf(DestinationString->Buffer, v6, pszFormat, Args);
  if ( v7 < 0 || v7 > v6 )
  {
    LOWORD(v7) = v6;
    v5 = -2147483643;
  }
  DestinationString->Length = 2 * v7;
  return v5;
}
