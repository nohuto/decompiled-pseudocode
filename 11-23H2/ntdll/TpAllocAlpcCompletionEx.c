/*
 * XREFs of TpAllocAlpcCompletionEx @ 0x18004B850
 * Callers:
 *     <none>
 * Callees:
 *     TppAllocAlpcCompletion @ 0x18004B874 (TppAllocAlpcCompletion.c)
 */

__int64 __fastcall TpAllocAlpcCompletionEx(int a1, int a2, int a3, int a4, __int64 a5)
{
  return TppAllocAlpcCompletion(a1, a2, a3, a4, a5, 1);
}
