/*
 * XREFs of HalpMcUpdatePostUpdate @ 0x1403B6C20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 HalpMcUpdatePostUpdate()
{
  __int64 result; // rax

  result = 0LL;
  if ( HalpMcUpdatePostUpdateFunc )
    return ((__int64 (*)(void))HalpMcUpdatePostUpdateFunc)();
  return result;
}
