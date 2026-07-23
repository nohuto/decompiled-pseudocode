/*
 * XREFs of RtlEqualString @ 0x180083570
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x180083610 (RtlUpperChar.c)
 */

BOOLEAN __cdecl RtlEqualString(PSTRING String1, PSTRING String2, BOOLEAN CaseInSensitive)
{
  __int64 Length; // rax
  char *Buffer; // rdi
  char *v6; // rsi
  char *v7; // rbp
  CHAR v8; // r14
  signed __int64 v9; // rsi
  CHAR v10; // bl

  Length = String1->Length;
  if ( (_WORD)Length != String2->Length )
    return 0;
  Buffer = String1->Buffer;
  v6 = String2->Buffer;
  v7 = &Buffer[Length];
  if ( Buffer < &Buffer[Length] )
  {
    if ( CaseInSensitive )
    {
      while ( 1 )
      {
        v8 = *v6;
        if ( *Buffer != *v6 )
        {
          v10 = RtlUpperChar(*Buffer);
          if ( v10 != RtlUpperChar(v8) )
            break;
        }
        ++Buffer;
        ++v6;
        if ( Buffer >= v7 )
          return 1;
      }
    }
    else
    {
      v9 = v6 - Buffer;
      while ( *Buffer == Buffer[v9] )
      {
        if ( ++Buffer >= v7 )
          return 1;
      }
    }
    return 0;
  }
  return 1;
}
