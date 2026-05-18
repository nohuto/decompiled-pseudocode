/*
 * XREFs of ??$make_range@PEAUThreadLocalFailureInfo@details_abi@wil@@@wil@@YA?AV?$pointer_range@PEAUThreadLocalFailureInfo@details_abi@wil@@@details@0@PEAUThreadLocalFailureInfo@details_abi@0@_K@Z @ 0x18000D308
 * Callers:
 *     ?Clear@ThreadLocalData@details_abi@wil@@QEAAXXZ @ 0x18000D89C (-Clear@ThreadLocalData@details_abi@wil@@QEAAXXZ.c)
 *     ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x18000F4C4 (-SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wil::make_range<wil::details_abi::ThreadLocalFailureInfo *>(_QWORD *a1, __int64 a2, __int64 a3)
{
  *a1 = a2;
  a1[1] = a2 + 80 * a3;
  return a1;
}
