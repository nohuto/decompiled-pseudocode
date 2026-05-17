/*
 * XREFs of RtlIsValidOemCharacter @ 0x18010A984
 * Callers:
 *     GetNextWchar @ 0x18010A1C4 (GetNextWchar.c)
 * Callees:
 *     NLS_UPCASE @ 0x1800154D8 (NLS_UPCASE.c)
 *     RtlpIsUtf8Process @ 0x180018DC4 (RtlpIsUtf8Process.c)
 */

char RtlIsValidOemCharacter()
{
  bool IsUtf8Process; // al
  _WORD *v1; // rcx
  unsigned __int16 *v2; // r10
  __int16 v3; // ax
  _WORD *v4; // r10
  __int64 v5; // rbx
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
    v5 = qword_1801847C8;
    v6 = *v2;
    if ( word_1801847AC )
    {
      v10 = (unsigned __int64)*(unsigned __int16 *)(qword_1801847C8 + 2 * v6) >> 8;
      if ( *(_WORD *)(qword_1801847F8 + 2 * v10) )
        v11 = *(unsigned __int16 *)(qword_1801847D8
                                  + 2
                                  * (*(unsigned __int16 *)(qword_1801847F8 + 2 * v10)
                                   + (unsigned __int64)*(unsigned __int8 *)(qword_1801847C8 + 2 * v6)));
      else
        v11 = *(unsigned __int16 *)(qword_1801847C0 + 2LL * *(unsigned __int8 *)(qword_1801847C8 + 2 * v6));
      v8 = NLS_UPCASE(qword_180184808, v11);
      v9 = *(_WORD *)(v5 + 2LL * v8);
    }
    else
    {
      v8 = NLS_UPCASE(
             qword_180184808,
             *(unsigned __int16 *)(qword_1801847C0 + 2LL * *(unsigned __int8 *)(v6 + qword_1801847C8)));
      v9 = *(char *)(v8 + v5);
    }
    if ( v9 != word_1801847A4 )
    {
      *v7 = v8;
      return 1;
    }
    return 0;
  }
  if ( *v1 > 0x7Fu )
    return 0;
  v3 = NLS_UPCASE(qword_180184808, (unsigned __int16)*v1);
  *v4 = v3;
  return 1;
}
