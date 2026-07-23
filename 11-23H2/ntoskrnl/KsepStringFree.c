/*
 * XREFs of KsepStringFree @ 0x1406948CC
 * Callers:
 *     KsepLoadShimProvider @ 0x140581138 (KsepLoadShimProvider.c)
 *     KsepCacheHwIdFree @ 0x140581210 (KsepCacheHwIdFree.c)
 *     KseAddHardwareId @ 0x140693960 (KseAddHardwareId.c)
 *     KseShimDriverIoCallbacks @ 0x140693D74 (KseShimDriverIoCallbacks.c)
 *     KsepRegistryOpenKey @ 0x1406944C4 (KsepRegistryOpenKey.c)
 *     KsepEngineGetShimsFromRegistry @ 0x1406945C4 (KsepEngineGetShimsFromRegistry.c)
 *     KseDriverLoadImage @ 0x140694730 (KseDriverLoadImage.c)
 *     KsepDbFreeDriverShims @ 0x140694D3C (KsepDbFreeDriverShims.c)
 *     KsepDbQueryRegistryDeviceData @ 0x14080845C (KsepDbQueryRegistryDeviceData.c)
 *     KsepCacheDeviceInsertData @ 0x140808FF8 (KsepCacheDeviceInsertData.c)
 *     KsepStringSplitMultiString @ 0x14085A91C (KsepStringSplitMultiString.c)
 *     KseSetDeviceFlags @ 0x140976D30 (KseSetDeviceFlags.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x140976F48 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepCacheDeviceFree @ 0x1409778A0 (KsepCacheDeviceFree.c)
 *     KsepRegistryCreateKey @ 0x1409779E8 (KsepRegistryCreateKey.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x140209E80 (KsepPoolFreePaged.c)
 *     RtlAssert @ 0x1405AA630 (RtlAssert.c)
 */

void __fastcall KsepStringFree(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rax

  if ( a1 )
  {
    v2 = *(void **)(a1 + 8);
    if ( v2 )
    {
      KsepPoolFreePaged(v2);
      *(_OWORD *)a1 = 0LL;
    }
  }
  else
  {
    v3 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v3 + 1] = -1073740768;
    KsepHistoryErrors[2 * v3] = 197451;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("String != NULL", "minkernel\\ntos\\kshim\\ksemisc.c", 0x34Bu, 0LL);
  }
}
