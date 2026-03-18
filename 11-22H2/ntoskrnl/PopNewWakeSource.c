/*
 * XREFs of PopNewWakeSource @ 0x1409875F4
 * Callers:
 *     PopHandleWakeSources @ 0x140AA0F1C (PopHandleWakeSources.c)
 *     PopProcessWakeSourceWork @ 0x140AA13F8 (PopProcessWakeSourceWork.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopNewWakeSource(int a1)
{
  __int64 result; // rax

  result = ExAllocatePool2(64LL, 112LL, 544040269LL);
  if ( result )
    *(_DWORD *)(result + 16) = a1;
  return result;
}
