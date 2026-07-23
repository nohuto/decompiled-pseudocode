/*
 * XREFs of SmKmVirtualLockCtxInitialize @ 0x1403A8AD4
 * Callers:
 *     SmPartitionInitialize @ 0x14084F5DC (SmPartitionInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmKmVirtualLockCtxInitialize(_QWORD *a1)
{
  __int64 result; // rax

  result = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  *a1 = 0LL;
  return result;
}
