/*
 * XREFs of PmIoctlGetReliabilityInfo @ 0x1C0025A4C
 * Callers:
 *     ?PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00038D0 (-PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PmIoctlGetReliabilityInfo(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // esi
  struct _KMUTANT *v3; // r14
  __int64 v5; // rdi

  v2 = 0;
  v3 = *(struct _KMUTANT **)(a1 + 64);
  if ( *(_DWORD *)(a2[23] + 8LL) >= 0x20u )
  {
    v5 = a2[3];
    *(_OWORD *)v5 = 0LL;
    *(_OWORD *)(v5 + 16) = 0LL;
    KeWaitForSingleObject(&v3[1], Executive, 0, 0, 0LL);
    *(_DWORD *)v5 = 32;
    *(_QWORD *)(v5 + 8) = v3[14].Header.WaitListHead.Flink;
    *(_QWORD *)(v5 + 16) = v3[14].Header.WaitListHead.Blink;
    *(_QWORD *)(v5 + 24) = v3[14].MutantListEntry.Flink;
    KeReleaseMutex(v3 + 1, 0);
    a2[7] = 32LL;
  }
  else
  {
    return (unsigned int)-1073741789;
  }
  return v2;
}
