/*
 * XREFs of TcglibpConfigureLockingSp @ 0x1C007CFB4
 * Callers:
 *     TcglibConfigureLockingSpEx @ 0x1C0079504 (TcglibConfigureLockingSpEx.c)
 * Callees:
 *     TcglibpSetACEBooleanExpr @ 0x1C007D144 (TcglibpSetACEBooleanExpr.c)
 */

__int64 __fastcall TcglibpConfigureLockingSp(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  unsigned int v5; // ebx
  __int64 v8; // r15

  result = 0LL;
  v5 = 0;
  do
  {
    if ( v5 >= *(_DWORD *)(a1 + 48) )
      break;
    result = TcglibpSetACEBooleanExpr(a1, a2, v5 + 0x800043000LL, 0x900000001LL);
    if ( (int)result >= 0 )
    {
      v8 = 2 * v5;
      result = TcglibpSetACEBooleanExpr(a1, a2, v8 + 0x80003FC00LL, 0x900000001LL);
      if ( (int)result >= 0 )
        result = TcglibpSetACEBooleanExpr(a1, a2, v8 + 0x80003FC01LL, v5 + 0x900030001LL);
    }
    ++v5;
  }
  while ( (int)result >= 0 );
  if ( a3 )
  {
    if ( (int)result >= 0 )
      return TcglibpSetACEBooleanExpr(a1, a2, 0x800038002LL, 0x900000001LL);
  }
  return result;
}
