/*
 * XREFs of RtlIsValidOemCharacter @ 0x180109520
 * Callers:
 *     GetNextWchar @ 0x180108D04 (GetNextWchar.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x18000E12C (RtlpIsUtf8Process.c)
 *     NLS_UPCASE @ 0x180041758 (NLS_UPCASE.c)
 */

char RtlIsValidOemCharacter()
{
  bool IsUtf8Process; // al
  unsigned __int16 *v1; // rcx
  unsigned __int16 *v2; // r9
  unsigned __int16 v3; // ax
  unsigned __int16 *v4; // r9
  __int64 v5; // rdx
  unsigned __int16 *v6; // r9
  unsigned __int16 v7; // r10
  __int64 v8; // r11
  __int16 v9; // ax
  unsigned __int64 v10; // rax
  unsigned __int16 v11; // dx
  __int64 v12; // r11
  signed __int32 v14[10]; // [rsp+0h] [rbp-28h] BYREF

  IsUtf8Process = RtlpIsUtf8Process();
  _InterlockedOr(v14, 0);
  if ( !IsUtf8Process )
  {
    v5 = *v2;
    if ( CodePageTable.DBCSCodePage )
    {
      v10 = (unsigned __int64)*((unsigned __int16 *)CodePageTable.WideCharTable + v5) >> 8;
      if ( *(_WORD *)(qword_1801776E8 + 2 * v10) )
        v11 = CodePageTable.DBCSOffsets[*(unsigned __int16 *)(qword_1801776E8 + 2 * v10)
                                      + (unsigned __int64)*((unsigned __int8 *)CodePageTable.WideCharTable + 2 * v5)];
      else
        v11 = CodePageTable.MultiByteTable[*((unsigned __int8 *)CodePageTable.WideCharTable + 2 * v5)];
      v7 = NLS_UPCASE(qword_1801776F8, v11);
      v9 = *(_WORD *)(v12 + 2LL * v7);
    }
    else
    {
      v7 = NLS_UPCASE(
             qword_1801776F8,
             CodePageTable.MultiByteTable[*((unsigned __int8 *)CodePageTable.WideCharTable + v5)]);
      v9 = *(char *)(v7 + v8);
    }
    if ( v9 != CodePageTable.DefaultChar )
    {
      *v6 = v7;
      return 1;
    }
    return 0;
  }
  if ( *v1 > 0x7Fu )
    return 0;
  v3 = NLS_UPCASE(qword_1801776F8, *v1);
  *v4 = v3;
  return 1;
}
