/*
 * XREFs of __delayLoadHelper2 @ 0x180004A80
 * Callers:
 *     __tailMerge_api_ms_win_privacy_coreprivacysettingsstore_l1_1_0_dll @ 0x1800059D2 (__tailMerge_api_ms_win_privacy_coreprivacysettingsstore_l1_1_0_dll.c)
 *     __tailMerge_netapi32_dll @ 0x180005A6F (__tailMerge_netapi32_dll.c)
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
