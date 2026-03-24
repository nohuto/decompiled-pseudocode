/*
 * XREFs of RtlUnicodeStringPrintf @ 0x1C00029B0
 * Callers:
 *     KbdCreateClassObject @ 0x1C000DD20 (KbdCreateClassObject.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlUnicodeStringPrintf(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  USHORT Length; // cx
  unsigned __int64 MaximumLength; // rax
  wchar_t *Buffer; // r10
  unsigned __int64 v6; // rdi
  NTSTATUS v7; // esi
  int v8; // eax
  va_list Args; // [rsp+60h] [rbp+18h] BYREF

  va_start(Args, pszFormat);
  Length = DestinationString->Length;
  if ( (Length & 1) != 0 )
    return -1073741811;
  MaximumLength = DestinationString->MaximumLength;
  if ( (MaximumLength & 1) != 0 )
    return -1073741811;
  if ( Length > (unsigned __int16)MaximumLength )
    return -1073741811;
  if ( (_WORD)MaximumLength == 0xFFFF )
    return -1073741811;
  Buffer = DestinationString->Buffer;
  if ( !Buffer && (Length || (_WORD)MaximumLength) )
    return -1073741811;
  v6 = MaximumLength >> 1;
  v7 = 0;
  v8 = _vsnwprintf(Buffer, MaximumLength >> 1, pszFormat, Args);
  if ( v8 < 0 || v8 > v6 )
  {
    LOWORD(v8) = v6;
    v7 = -2147483643;
  }
  DestinationString->Length = 2 * v8;
  return v7;
}
