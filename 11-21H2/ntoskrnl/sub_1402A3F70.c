/*
 * XREFs of sub_1402A3F70 @ 0x1402A3F70
 * Callers:
 *     sub_1402A2EF0 @ 0x1402A2EF0 (sub_1402A2EF0.c)
 *     sub_1402A38B4 @ 0x1402A38B4 (sub_1402A38B4.c)
 *     sub_14039E588 @ 0x14039E588 (sub_14039E588.c)
 *     sub_1406DF940 @ 0x1406DF940 (sub_1406DF940.c)
 *     sub_140935790 @ 0x140935790 (sub_140935790.c)
 *     sub_140936BF8 @ 0x140936BF8 (sub_140936BF8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402A3F70(__int64 a1, unsigned int a2, signed __int64 a3)
{
  if ( a2 > 8 )
    return 3221225485LL;
  else
    return _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8LL * (int)a2 + 8), a3, 0LL) != 0
         ? 0xC0000001
         : 0;
}
