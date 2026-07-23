/*
 * XREFs of RtlUpperString @ 0x1800F65B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x18000C350 (RtlUpperChar.c)
 */

void __cdecl RtlUpperString(PSTRING DestinationString, const STRING *SourceString)
{
  int MaximumLength; // ebx
  char *Buffer; // rsi
  char *v4; // rdi

  MaximumLength = DestinationString->MaximumLength;
  Buffer = SourceString->Buffer;
  v4 = DestinationString->Buffer;
  if ( SourceString->Length <= (unsigned __int16)MaximumLength )
    MaximumLength = SourceString->Length;
  for ( DestinationString->Length = MaximumLength; MaximumLength; --MaximumLength )
    *v4++ = RtlUpperChar(*Buffer++);
}
