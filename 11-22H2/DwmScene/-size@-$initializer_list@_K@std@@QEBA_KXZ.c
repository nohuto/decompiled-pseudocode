/*
 * XREFs of ?size@?$initializer_list@_K@std@@QEBA_KXZ @ 0x18007E7BC
 * Callers:
 *     ??0?$vector@_KV?$allocator@_K@std@@@std@@QEAA@V?$initializer_list@_K@1@AEBV?$allocator@_K@1@@Z @ 0x18007CA0C (--0-$vector@_KV-$allocator@_K@std@@@std@@QEAA@V-$initializer_list@_K@1@AEBV-$allocator@_K@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::initializer_list<unsigned __int64>::size(_QWORD *a1)
{
  return (__int64)(a1[1] - *a1) >> 3;
}
