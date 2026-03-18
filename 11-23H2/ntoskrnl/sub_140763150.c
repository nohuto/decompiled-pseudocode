/*
 * XREFs of sub_140763150 @ 0x140763150
 * Callers:
 *     WbAddHeapExecutedBlockToCache @ 0x140761B10 (WbAddHeapExecutedBlockToCache.c)
 *     WbGetHeapExecutedBlock @ 0x140762918 (WbGetHeapExecutedBlock.c)
 * Callees:
 *     sub_140763028 @ 0x140763028 (sub_140763028.c)
 *     sub_1407638C0 @ 0x1407638C0 (sub_1407638C0.c)
 */

__int64 __fastcall sub_140763150(int a1, int a2, _QWORD *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  result = sub_1407638C0(a1 + 8, a2, 8, (unsigned int)&v7, a4);
  if ( (int)result >= 0 && a3 )
  {
    result = sub_140763028(v7);
    if ( (int)result >= 0 )
      *a3 = v6;
  }
  return result;
}
