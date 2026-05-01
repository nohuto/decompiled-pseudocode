/*
 * XREFs of HamConnectToServer @ 0x180003120
 * Callers:
 *     <none>
 * Callees:
 *     HamConnectToServerEx @ 0x180003150 (HamConnectToServerEx.c)
 */

__int64 __fastcall HamConnectToServer(int a1, __int64 a2)
{
  return HamConnectToServerEx(a1, 0, 0, 0, 0LL, a2);
}
