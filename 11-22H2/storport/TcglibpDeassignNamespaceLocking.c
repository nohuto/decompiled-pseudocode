/*
 * XREFs of TcglibpDeassignNamespaceLocking @ 0x1C007B3C8
 * Callers:
 *     TcglibDeassignNamespaceLocking @ 0x1C00796A4 (TcglibDeassignNamespaceLocking.c)
 * Callees:
 *     TcglibEalLogCommand @ 0x1C005551C (TcglibEalLogCommand.c)
 *     TcglibpCallMethod @ 0x1C007C734 (TcglibpCallMethod.c)
 */

__int64 __fastcall TcglibpDeassignNamespaceLocking(int **a1, int a2, __int64 a3)
{
  int v4; // edi
  __int64 v6; // [rsp+70h] [rbp+18h] BYREF

  v6 = a3;
  v4 = (int)a1;
  TcglibEalLogCommand(*a1, "DeassignNamespaceLocking", a3, 0, 0LL, 0LL);
  return TcglibpCallMethod(v4, a2, 0, 2053, (__int64)GenDeassignNamespaceParams, (__int64)&v6, 0LL, 0LL, 0LL, 0LL);
}
