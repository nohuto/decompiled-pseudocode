/*
 * XREFs of sub_1800092B0 @ 0x1800092B0
 * Callers:
 *     sub_18000B292 @ 0x18000B292 (sub_18000B292.c)
 *     sub_18000B31D @ 0x18000B31D (sub_18000B31D.c)
 *     sub_18000B3CC @ 0x18000B3CC (sub_18000B3CC.c)
 *     sub_18000B47B @ 0x18000B47B (sub_18000B47B.c)
 *     sub_18000B52A @ 0x18000B52A (sub_18000B52A.c)
 *     sub_18000B5B5 @ 0x18000B5B5 (sub_18000B5B5.c)
 *     sub_18000B640 @ 0x18000B640 (sub_18000B640.c)
 *     sub_18000B6EF @ 0x18000B6EF (sub_18000B6EF.c)
 *     sub_18000B79E @ 0x18000B79E (sub_18000B79E.c)
 *     sub_18000B895 @ 0x18000B895 (sub_18000B895.c)
 *     sub_18000B944 @ 0x18000B944 (sub_18000B944.c)
 *     sub_18000BB49 @ 0x18000BB49 (sub_18000BB49.c)
 *     sub_18000BBF8 @ 0x18000BBF8 (sub_18000BBF8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800092B0(__int64 a1, __int64 a2)
{
  return ResolveDelayLoadedAPI(&_ImageBase, a1, 0LL, DelayLoadFailureHook, a2, 0);
}
