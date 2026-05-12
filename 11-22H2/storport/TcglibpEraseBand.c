/*
 * XREFs of TcglibpEraseBand @ 0x1C007B45C
 * Callers:
 *     TcglibEraseBand @ 0x1C0079868 (TcglibEraseBand.c)
 * Callees:
 *     TcglibEalLogCommand @ 0x1C005551C (TcglibEalLogCommand.c)
 *     TcglibpCallMethod @ 0x1C007C734 (TcglibpCallMethod.c)
 */

__int64 __fastcall TcglibpEraseBand(int **a1, int a2, unsigned int a3)
{
  unsigned int v3; // esi
  int v5; // r14d
  int v6; // edi
  __int64 v7; // rbx

  v3 = a3;
  v5 = (int)a1;
  v6 = 1;
  if ( a3 )
  {
    v7 = a3;
  }
  else
  {
    LOBYTE(a3) = 1;
    v7 = 0LL;
  }
  TcglibEalLogCommand(*a1, "EraseBand", a3, 3, v7, 0LL);
  if ( v3 )
    v6 = v7 + 196608;
  return TcglibpCallMethod(v5, a2, v6, 2051, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
}
