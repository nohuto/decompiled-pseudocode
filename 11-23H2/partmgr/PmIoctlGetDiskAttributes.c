/*
 * XREFs of PmIoctlGetDiskAttributes @ 0x1C001CFFC
 * Callers:
 *     ?PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00038D0 (-PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PmIoctlGetDiskAttributes(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // esi
  struct _KMUTANT *v3; // r14
  __int64 v5; // rdi

  v2 = 0;
  v3 = *(struct _KMUTANT **)(a1 + 64);
  if ( *(_DWORD *)(a2[23] + 8LL) < 0x10u )
  {
    return (unsigned int)-1073741789;
  }
  else
  {
    v5 = a2[3];
    *(_OWORD *)v5 = 0LL;
    KeWaitForSingleObject(&v3[1], Executive, 0, 0, 0LL);
    *(_DWORD *)v5 = 16;
    *(_QWORD *)(v5 + 8) = v3[9].MutantListEntry.Flink;
    KeReleaseMutex(v3 + 1, 0);
    a2[7] = 16LL;
  }
  return v2;
}
