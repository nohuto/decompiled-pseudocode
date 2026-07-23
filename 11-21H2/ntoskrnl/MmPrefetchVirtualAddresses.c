/*
 * XREFs of MmPrefetchVirtualAddresses @ 0x1406EBFB0
 * Callers:
 *     sub_1409DA3EC @ 0x1409DA3EC (sub_1409DA3EC.c)
 * Callees:
 *     sub_1402E670C @ 0x1402E670C (sub_1402E670C.c)
 *     sub_14033D760 @ 0x14033D760 (sub_14033D760.c)
 *     sub_1406EC048 @ 0x1406EC048 (sub_1406EC048.c)
 */

__int64 __fastcall MmPrefetchVirtualAddresses(_DWORD *a1)
{
  unsigned int v1; // edx
  __int64 v2; // r10

  if ( *a1 != 1 )
    return 3221225711LL;
  v1 = a1[1];
  if ( v1 >= 8 || (v1 & 6) > 4 )
    return 3221225711LL;
  if ( (v1 & 6) != 0 && (v1 & 6) != 2 )
    sub_1402E670C((__int64)KeGetCurrentThread());
  sub_14033D760((__int64)KeGetCurrentThread());
  return sub_1406EC048(*(HANDLE *)(v2 + 8));
}
