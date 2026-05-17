/*
 * XREFs of TpAllocAlpcCompletion @ 0x180088990
 * Callers:
 *     <none>
 * Callees:
 *     TppAllocAlpcCompletion @ 0x18004B9D4 (TppAllocAlpcCompletion.c)
 */

__int64 __fastcall TpAllocAlpcCompletion(_PEB_LDR_DATA *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  return TppAllocAlpcCompletion(a1, a2, a3, a4, a5, 0);
}
