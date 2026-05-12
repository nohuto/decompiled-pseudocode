/*
 * XREFs of PartitionIoctlGetDeviceNumberEx @ 0x1C001DB38
 * Callers:
 *     ?PartitionDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00027E0 (-PartitionDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     PartitionForwardIrpSynchronously @ 0x1C001DBB8 (PartitionForwardIrpSynchronously.c)
 */

__int64 __fastcall PartitionIoctlGetDeviceNumberEx(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v4; // edi
  __int64 v5; // rbx

  v2 = *(_QWORD *)(a1 + 64);
  v4 = PartitionForwardIrpSynchronously();
  if ( v4 >= 0 )
  {
    v5 = *(_QWORD *)(a2 + 24);
    KeWaitForSingleObject((PVOID)(*(_QWORD *)(v2 + 24) + 56LL), Executive, 0, 0, 0LL);
    *(_DWORD *)(v5 + 36) = *(_DWORD *)(v2 + 192);
    KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(v2 + 24) + 56LL), 0);
  }
  return (unsigned int)v4;
}
