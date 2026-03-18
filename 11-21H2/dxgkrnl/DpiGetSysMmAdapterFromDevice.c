/*
 * XREFs of DpiGetSysMmAdapterFromDevice @ 0x1C001BAD0
 * Callers:
 *     DxgkFreePagesFromMdlCB @ 0x1C001B330 (DxgkFreePagesFromMdlCB.c)
 *     DxgkAllocatePagesForMdlCB @ 0x1C001B570 (DxgkAllocatePagesForMdlCB.c)
 *     DxgkAllocateContiguousMemoryCB @ 0x1C0054770 (DxgkAllocateContiguousMemoryCB.c)
 *     DxgkCreatePhysicalMemoryObjectCB @ 0x1C0054840 (DxgkCreatePhysicalMemoryObjectCB.c)
 *     DxgkMapMdlToIoMmuCB @ 0x1C0054AA0 (DxgkMapMdlToIoMmuCB.c)
 *     DxgkOpenPhysicalMemoryObjectCB @ 0x1C0054B70 (DxgkOpenPhysicalMemoryObjectCB.c)
 *     DxgkUnmapMdlFromIoMmuCB @ 0x1C0054C70 (DxgkUnmapMdlFromIoMmuCB.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01FECEC (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     DpiGetFdoFromDevice @ 0x1C001BAFC (DpiGetFdoFromDevice.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

__int64 DpiGetSysMmAdapterFromDevice()
{
  __int64 FdoFromDevice; // rbx
  int v2; // edx
  int v3; // ecx
  int v4; // r8d

  FdoFromDevice = DpiGetFdoFromDevice();
  if ( !FdoFromDevice )
  {
    WdLogSingleEntry1(1LL, 5075LL);
    if ( bTracingEnabled )
    {
      LOBYTE(v3) = BYTE3(Microsoft_Windows_DxgKrnlEnableBits);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v3,
          v2,
          v4,
          0,
          2,
          -1,
          (__int64)L"FdoContext != nullptr",
          5075LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  return *(_QWORD *)(FdoFromDevice + 5672);
}
