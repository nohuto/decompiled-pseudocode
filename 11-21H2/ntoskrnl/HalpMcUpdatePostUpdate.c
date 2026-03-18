/*
 * XREFs of HalpMcUpdatePostUpdate @ 0x1403B6DD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 HalpMcUpdatePostUpdate()
{
  __int64 result; // rax

  result = 0LL;
  if ( HalpMcUpdatePostUpdateFunc )
    return ((__int64 (*)(void))HalpMcUpdatePostUpdateFunc)();
  return result;
}
