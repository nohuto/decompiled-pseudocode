/*
 * XREFs of FinishHash @ 0x1C001716C
 * Callers:
 *     ComputeFlushPeriod @ 0x1C021F334 (ComputeFlushPeriod.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FinishHash(_DWORD *a1)
{
  __int64 result; // rax

  result = 32769 * ((9 * *a1) ^ ((unsigned int)(9 * *a1) >> 11));
  *a1 = result;
  return result;
}
