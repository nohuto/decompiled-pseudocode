/*
 * XREFs of __delayLoadHelper2 @ 0x180003ED0
 * Callers:
 *     __tailMerge_netapi32_dll @ 0x180004E22 (__tailMerge_netapi32_dll.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _delayLoadHelper2(__int64 a1, __int64 a2)
{
  return ResolveDelayLoadedAPI(
           &_ImageBase,
           a1,
           _pfnDefaultDliFailureHook2,
           DelayLoadFailureHook,
           a2,
           _ResolveDelayLoadedAPIFlags);
}
