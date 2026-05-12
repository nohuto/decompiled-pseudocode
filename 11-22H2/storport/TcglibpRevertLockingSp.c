/*
 * XREFs of TcglibpRevertLockingSp @ 0x1C007D0A4
 * Callers:
 *     TcglibRevertLockingSpEx @ 0x1C0079D28 (TcglibRevertLockingSpEx.c)
 * Callees:
 *     TcglibEalLogCommand @ 0x1C005551C (TcglibEalLogCommand.c)
 *     TcglibpCallMethod @ 0x1C007C734 (TcglibpCallMethod.c)
 */

__int64 __fastcall TcglibpRevertLockingSp(int **a1, __int64 a2)
{
  TcglibEalLogCommand(*a1, "RevertLockingSp", 1, 2, 0LL, 0LL);
  return TcglibpCallMethod((__int64)a1, a2, 0x20500000001LL, 0x600000202LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
}
