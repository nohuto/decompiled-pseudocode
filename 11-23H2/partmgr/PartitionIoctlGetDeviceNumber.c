/*
 * XREFs of PartitionIoctlGetDeviceNumber @ 0x1C001DC0C
 * Callers:
 *     ?PartitionDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00027E0 (-PartitionDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PartitionIoctlGetDeviceNumber(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // edi
  __int64 v3; // rbp
  __int64 v5; // rbx

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)(a2[23] + 8LL) < 0xCu )
  {
    return (unsigned int)-1073741789;
  }
  else
  {
    v5 = a2[3];
    *(_QWORD *)v5 = 0LL;
    *(_DWORD *)(v5 + 8) = 0;
    KeWaitForSingleObject((PVOID)(*(_QWORD *)(v3 + 24) + 56LL), Executive, 0, 0, 0LL);
    *(_DWORD *)(v5 + 4) = *(_DWORD *)(*(_QWORD *)(v3 + 24) + 168LL);
    *(_DWORD *)v5 = *(_DWORD *)(*(_QWORD *)(v3 + 8) + 72LL);
    *(_DWORD *)(v5 + 8) = *(_DWORD *)(v3 + 192);
    KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(v3 + 24) + 56LL), 0);
    a2[7] = 12LL;
  }
  return v2;
}
