/*
 * XREFs of ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x1800C9030
 * Callers:
 *     ?RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800D3B14 (-RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAJXZ.c)
 *     ?ULongLongMultDivToUlongRU@@YAJ_K00PEAK@Z @ 0x1801640E4 (-ULongLongMultDivToUlongRU@@YAJ_K00PEAK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ULongLongMult(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v4; // rcx
  __int64 result; // rax

  v4 = a1 * a2;
  result = 0LL;
  if ( is_mul_ok(a1, a2) )
  {
    *a3 = v4;
  }
  else
  {
    *a3 = -1LL;
    return 2147942934LL;
  }
  return result;
}
