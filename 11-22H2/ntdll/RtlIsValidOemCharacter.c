/*
 * XREFs of RtlIsValidOemCharacter @ 0x1801094E4
 * Callers:
 *     GetNextWchar @ 0x180108D24 (GetNextWchar.c)
 * Callees:
 *     NLS_UPCASE @ 0x1800156E8 (NLS_UPCASE.c)
 *     RtlpIsUtf8Process @ 0x180018FD4 (RtlpIsUtf8Process.c)
 */

char RtlIsValidOemCharacter()
{
  bool IsUtf8Process; // al
  _WORD *v1; // rcx
  unsigned __int16 *v2; // r10
  __int16 v3; // ax
  _WORD *v4; // r10
  _WORD *WideCharTable; // rbx
  __int64 v6; // rdx
  unsigned __int16 *v7; // r10
  unsigned __int16 v8; // r11
  __int16 v9; // ax
  unsigned __int64 v10; // rax
  int v11; // edx
  signed __int32 v13[10]; // [rsp+0h] [rbp-28h] BYREF

  IsUtf8Process = RtlpIsUtf8Process();
  _InterlockedOr(v13, 0);
  if ( !IsUtf8Process )
  {
    WideCharTable = CodePageTable.WideCharTable;
    v6 = *v2;
    if ( CodePageTable.DBCSCodePage )
    {
      v10 = (unsigned __int64)*((unsigned __int16 *)CodePageTable.WideCharTable + v6) >> 8;
      if ( *(_WORD *)(qword_1801817A8 + 2 * v10) )
        v11 = CodePageTable.DBCSOffsets[*(unsigned __int16 *)(qword_1801817A8 + 2 * v10)
                                      + (unsigned __int64)*((unsigned __int8 *)CodePageTable.WideCharTable + 2 * v6)];
      else
        v11 = CodePageTable.MultiByteTable[*((unsigned __int8 *)CodePageTable.WideCharTable + 2 * v6)];
      v8 = NLS_UPCASE(qword_1801817B8, v11);
      v9 = WideCharTable[v8];
    }
    else
    {
      v8 = NLS_UPCASE(
             qword_1801817B8,
             CodePageTable.MultiByteTable[*((unsigned __int8 *)CodePageTable.WideCharTable + v6)]);
      v9 = *((char *)WideCharTable + v8);
    }
    if ( v9 != CodePageTable.DefaultChar )
    {
      *v7 = v8;
      return 1;
    }
    return 0;
  }
  if ( *v1 > 0x7Fu )
    return 0;
  v3 = NLS_UPCASE(qword_1801817B8, (unsigned __int16)*v1);
  *v4 = v3;
  return 1;
}
