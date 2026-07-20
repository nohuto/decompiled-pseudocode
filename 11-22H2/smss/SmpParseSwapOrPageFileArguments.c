/*
 * XREFs of SmpParseSwapOrPageFileArguments @ 0x14000A5C0
 * Callers:
 *     SmpCreatePagingFileDescriptor @ 0x14000A43C (SmpCreatePagingFileDescriptor.c)
 *     SmpCreateWorkingSetSwapPagingFile @ 0x14000A930 (SmpCreateWorkingSetSwapPagingFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpParseSwapOrPageFileArguments(PCUNICODE_STRING String, PULONG Value, PULONG a3)
{
  PWSTR Buffer; // r9
  USHORT Length; // r8
  unsigned __int16 v7; // cx
  unsigned __int16 v8; // r8
  __int64 v9; // r10
  NTSTATUS v10; // r8d
  PWSTR v11; // rdi
  WCHAR *v12; // rcx
  WCHAR v13; // ax
  NTSTATUS v14; // eax
  signed __int32 v16; // edx
  __int64 v17; // rcx
  signed __int32 v18; // edx

  *Value = 0;
  *a3 = 0;
  Buffer = String->Buffer;
  if ( !Buffer )
    return 0LL;
  Length = String->Length;
  v7 = 0;
  v8 = Length >> 1;
  if ( !v8 )
    return 0LL;
  while ( Buffer[v7] <= 0x30u )
  {
    v9 = 0x1000100000200LL;
    if ( !_bittest64(&v9, Buffer[v7]) )
      break;
    if ( ++v7 >= v8 )
      return 0LL;
  }
  v10 = RtlUnicodeStringToInteger(String, 0, Value);
  if ( v10 < 0 )
  {
    v16 = _InterlockedIncrement(SmpGlobalLog) % 64;
    v17 = 2LL * v16;
    SmpGlobalLog[4 * v16 + 2] = 5110;
  }
  else
  {
    v11 = String->Buffer;
    v12 = v11;
    if ( !*v11 )
      return 0LL;
    while ( 1 )
    {
      v13 = *v12++;
      if ( v13 == 32 )
        break;
      if ( !*v12 )
        return 0LL;
    }
    String->Buffer = v12;
    String->Length += (_WORD)v11 - (_WORD)v12;
    String->MaximumLength = String->Length;
    v14 = RtlUnicodeStringToInteger(String, 0, a3);
    String->Buffer = v11;
    v10 = v14;
    if ( v14 >= 0 )
      return 0LL;
    v18 = _InterlockedIncrement(SmpGlobalLog) % 64;
    v17 = 2LL * v18;
    SmpGlobalLog[4 * v18 + 2] = 5132;
  }
  SmpGlobalLog[2 * v17 + 3] = v10;
  *(_QWORD *)&SmpGlobalLog[2 * v17 + 4] = 0LL;
  return (unsigned int)v10;
}
