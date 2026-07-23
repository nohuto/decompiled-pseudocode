/*
 * XREFs of sub_14071BBD8 @ 0x14071BBD8
 * Callers:
 *     sub_14067ED34 @ 0x14067ED34 (sub_14067ED34.c)
 *     sub_1406A5F34 @ 0x1406A5F34 (sub_1406A5F34.c)
 *     sub_1406CE3EC @ 0x1406CE3EC (sub_1406CE3EC.c)
 *     sub_1406DA700 @ 0x1406DA700 (sub_1406DA700.c)
 *     sub_14071B284 @ 0x14071B284 (sub_14071B284.c)
 *     sub_14071B930 @ 0x14071B930 (sub_14071B930.c)
 *     sub_14071B99C @ 0x14071B99C (sub_14071B99C.c)
 *     sub_14071BA34 @ 0x14071BA34 (sub_14071BA34.c)
 *     sub_14071BADC @ 0x14071BADC (sub_14071BADC.c)
 *     sub_14071BB4C @ 0x14071BB4C (sub_14071BB4C.c)
 *     sub_1407C2680 @ 0x1407C2680 (sub_1407C2680.c)
 *     sub_140915544 @ 0x140915544 (sub_140915544.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_14071BBD8(__int64 a1)
{
  signed __int32 v1; // eax
  signed __int32 v2; // ett

  _m_prefetchw((const void *)(a1 + 4232));
  v1 = *(_DWORD *)(a1 + 4232);
  while ( v1 )
  {
    v2 = v1;
    v1 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 4232), v1 + 1, v1);
    if ( v2 == v1 )
      return 1;
  }
  return 0;
}
