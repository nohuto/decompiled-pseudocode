/*
 * XREFs of KsepCacheDeviceFree @ 0x1409778A0
 * Callers:
 *     KseQueryDeviceData @ 0x1408082D0 (KseQueryDeviceData.c)
 *     KsepDbCacheReadDevice @ 0x1408087EC (KsepDbCacheReadDevice.c)
 *     KseQueryDeviceDataList @ 0x140976B00 (KseQueryDeviceDataList.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x140209E80 (KsepPoolFreePaged.c)
 *     KsepStringFree @ 0x1406948CC (KsepStringFree.c)
 */

void __fastcall KsepCacheDeviceFree(void **a1)
{
  void **v1; // rsi
  void **v3; // rbx
  void **v4; // rbp

  if ( a1 )
  {
    v1 = a1 + 7;
    v3 = (void **)a1[7];
    while ( v3 != v1 )
    {
      v4 = v3;
      v3 = (void **)*v3;
      if ( v4 )
      {
        KsepStringFree((__int64)(v4 + 2));
        KsepPoolFreePaged(v4[5]);
        KsepPoolFreePaged(v4);
      }
    }
    KsepStringFree((__int64)(a1 + 5));
    KsepPoolFreePaged(a1);
  }
}
